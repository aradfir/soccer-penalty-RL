
import math
from base.tools import Tools
from lib.action.kick_table import calc_max_velocity
from lib.action.smart_kick import SmartKick
from lib.action.go_to_point import GoToPoint
import pyrusgeom.soccer_math as smath
from lib.debug.debug import log
from lib.action.neck_turn_to_ball import NeckTurnToBall
from lib.action.neck_turn_to_point import NeckTurnToPoint
from lib.action.intercept import Intercept
from lib.action.turn_to_point import TurnToPoint
from lib.rcsc.server_param import ServerParam
from lib.player.world_model import WorldModel
from pyrusgeom.size_2d import Size2D
from pyrusgeom.vector_2d import Vector2D
from pyrusgeom.rect_2d import Rect2D
from typing import TYPE_CHECKING

from lib.action.turn_to_ball import TurnToBall
import base.goalie_decision as normal_goalie
from base.bhv_kick import BhvKick

if TYPE_CHECKING:
    from lib.player.object_player import PlayerObject
    from lib.player.player_agent import PlayerAgent
    from pyrusgeom.angle_deg import AngleDeg
import random

original_num_players=1
class Bhv_Penalty:
    # this is x-axis multiplier, 1 means similar to normal play (left for goalie, right for shoot), -1 means opposite of normal (right for goalie, left for shoot)
    goal_side = 1
    kicker_unum = 1
    penalty_order =list(range(1,original_num_players+1))
    def __init__(self) -> None:
        pass
    @classmethod
    def handle_goalside(cls,wm:'WorldModel'):
        if not wm.game_mode().type().is_penalty_setup():
            return
        if wm.game_mode().side() is wm.our_side():
            cls.goal_side = 1 if wm.ball().pos().x() > 0 else -1
        else:
            cls.goal_side = 1 if wm.ball().pos().x() < 0 else -1

    @classmethod
    def handle_kicker(cls, wm: 'WorldModel'):
        if wm.game_mode().type().is_penalty_setup() and wm.game_mode().side() is wm.our_side():
            cls.kicker_unum = cls.penalty_order[0]
        if (wm.game_mode().type().is_penalty_score() or wm.game_mode().type().is_penalty_miss()) and wm.game_mode().side() is wm.our_side():
            if cls.kicker_unum in cls.penalty_order:
                cls.penalty_order.remove(cls.kicker_unum)
                if len(cls.penalty_order) == 0:
                    cls.penalty_order =list(range(1,original_num_players+1))
            
    def execute(self, agent: 'PlayerAgent'):
        wm: WorldModel = agent.world()
        self.handle_kicker(wm)
        self.handle_goalside(wm)
        if not wm.self().goalie() or (self._is_kicker(wm) and wm.game_mode().side() is wm.our_side()):
            return self.execute_kicker(agent)
        else:
            return self.execute_goalie(agent)

    def execute_kicker(self, agent: 'PlayerAgent'):
        wm: WorldModel = agent.world()
        self.goal_side = 1 if wm.ball().pos().x() > 0 else -1

        if wm.self().goalie() and not (self._is_kicker(wm) and wm.game_mode().side() is wm.our_side()):
            return self.do_goalie_wait(agent)
        
        if not self._is_kicker(wm) or wm.game_mode().side() is wm.their_side():
            return self.do_kicker_wait(agent)
        
        game_mode = wm.game_mode().type()
        if game_mode.is_penalty_ready():
            return self.do_kicker_ready(agent)
        elif game_mode.is_penalty_setup():
            return self.do_kicker_setup(agent)
        elif game_mode.is_penalty_taken():
            return self.do_kick(agent)
        return self.do_kicker_wait(agent)

    def do_kicker_setup(self, agent: 'PlayerAgent'):
        log.sw_log().team().add_text( "do_kicker_setup")
        wm: WorldModel = agent.world()
        target = Vector2D(ServerParam.i().pitch_half_length() * self.goal_side, 0)
        dash_power = wm.self().get_safety_dash_power(ServerParam.i().max_dash_power())
        if not wm.self().is_kickable():
            GoToPoint(wm.ball().pos(), 0.2, dash_power).execute(agent)
            return True
        TurnToPoint(target).execute(agent)
        NeckTurnToPoint(target).execute(agent)
        return True

    def do_kicker_ready(self, agent: 'PlayerAgent'):
        log.sw_log().team().add_text( "do_kicker_ready")
        wm: WorldModel = agent.world()
        if not wm.self().is_kickable():
            return self.do_kicker_setup(agent)
        need_stamina = wm.self().stamina() < ServerParam.i().stamina_max() * 0.5
        has_time = wm.time().cycle() - wm.game_mode().time().cycle() > ServerParam.i().pen_ready_wait() - 3
        if need_stamina and has_time:
            return self.do_kicker_setup(agent)
        return self.do_kick(agent)

    def do_kick(self, agent: 'PlayerAgent'):
        target = Vector2D(ServerParam.i().pitch_half_length() * self.goal_side, 0)
        log.sw_log().team().add_text( "do_kick: target = " + str(target))
        wm: WorldModel = agent.world()
        opp_goalie : PlayerObject =  wm.get_opponent_goalie()
        if not opp_goalie:
            NeckTurnToPoint(target).execute(agent)
        else:
            NeckTurnToPoint(opp_goalie.pos()).execute(agent)
        if not wm.self().is_kickable():
            Intercept().execute(agent)
            return True
        if self.goal_side == 1:
            if BhvKick().execute(agent):
                return True
        if self.shoot(agent):
            return True
        top_post = target + Vector2D(0,-16.5)
        bottom_post = target + Vector2D(0,16.5)

        random_choice = random.choice([target, top_post, bottom_post])
        dribble_target = wm.self().pos() + (random_choice - wm.self().pos())*0.2
        
        if opp_goalie:
            dribble_speed =  max(min(opp_goalie.dist_from_ball()/17,3.0),0.4)
        else:
            dribble_speed=0.6
        
        SmartKick(dribble_target,dribble_speed,0.2,3).execute(agent)
        return True
        
    
    def shoot(self,agent: 'PlayerAgent'):
        wm: WorldModel = agent.world()
        opp_goal_x = ServerParam.i().pitch_half_length() * self.goal_side
        goalie:PlayerObject = wm.get_their_goalie()
        if goalie is None:
            return False
        if not wm.self().is_kickable():
            return False
        NUM_DIVS = 25
        SP = ServerParam.i()
        ball_speed_max = SP.ball_speed_max()
        STEP_DIV = SP.goal_width()/NUM_DIVS
        for i in range(NUM_DIVS):
            y = -SP.goal_half_width()+ (i+2)*STEP_DIV
            target_point = Vector2D(opp_goal_x,y)
            ball_move_angle = (target_point - wm.ball().pos()).th()
            ball_move_dist = wm.ball().pos().dist(target_point)

            max_one_step_vel = calc_max_velocity(ball_move_angle, wm.self().kick_rate(), wm.ball().vel())
            max_one_step_speed = max_one_step_vel.r()
            first_ball_speed = max((ball_move_dist + 5.0) * (1.0 - SP.ball_decay()), max_one_step_speed, 1.5)
            while first_ball_speed <= ball_speed_max:
                if self.check_shoot(wm,target_point,first_ball_speed,ball_move_angle,ball_move_dist,goalie):
                    SmartKick(target_point,first_ball_speed,0.4,3).execute(agent)
                    return True
                first_ball_speed+=0.3
        return False
    
    def check_shoot(self,wm: 'WorldModel', target_point: Vector2D, first_ball_speed, ball_move_angle: 'AngleDeg', ball_move_dist,goalie:'PlayerObject'):
        sp = ServerParam.i()
        ball_reach_step = int(
            math.ceil(smath.calc_length_geom_series(first_ball_speed, ball_move_dist, sp.ball_decay())))

        if ball_reach_step == -1:
            return False
        if ball_reach_step < 1:
            ball_reach_step = 1
        CONTROL_AREA_BUF = 0.15
        ptype = goalie.player_type()
        min_cycle = Tools.estimate_min_reach_cycle(goalie.pos(), ptype.real_speed_max(), wm.ball().pos(),
                                                   ball_move_angle)
        if min_cycle < 0:
            return True
        first_ball_vel: Vector2D = Vector2D.polar2vector(first_ball_speed, ball_move_angle)
        goalie_speed = goalie.vel().r()
        seen_dist_noise = goalie.dist_from_self() * 0.02
        max_cycle = ball_reach_step
        for cycle in range(min_cycle, max_cycle):
            ball_pos = smath.inertia_n_step_point(wm.ball().pos(), first_ball_vel, cycle, sp.ball_decay())
            if ball_pos.x() > sp.pitch_half_length():
                break
            in_penalty_area = True
            control_area = sp._catchable_area if in_penalty_area else ptype.kickable_area()

            inertia_pos = goalie.inertia_point(cycle)
            target_dist = inertia_pos.dist(ball_pos)

            if in_penalty_area:
                target_dist -= seen_dist_noise

            if target_dist - control_area - CONTROL_AREA_BUF < 0.001:
                return False

            dash_dist = float(target_dist)
            if cycle > 1:
                dash_dist -= control_area * 0.9
                dash_dist *= 0.999

            n_dash = ptype.cycles_to_reach_distance(dash_dist)

            if n_dash > cycle + goalie.pos_count():
                continue
            n_turn = 0
            if goalie.body_count() <= 1:
                Tools.predict_player_turn_cycle(ptype, goalie.body(), goalie_speed, target_dist,
                                                (ball_pos - inertia_pos).th(), control_area + 0.1, True)
            n_step = n_turn + n_dash
            if n_turn == 0:
                n_step += 1
            bonus_step = 2
            if n_step <= cycle + bonus_step:
                return False

        return True


    def do_kicker_wait(self, agent: 'PlayerAgent'):
        log.sw_log().team().add_text( "do_kicker_wait")
        wm: WorldModel = agent.world()
        dist_step = 1.5
        wait_pos = Vector2D(-2, -9 + dist_step * (wm.self().unum() - 2))
        dash_power = wm.self().get_safety_dash_power(ServerParam.i().max_dash_power())
        GoToPoint(wait_pos, 0.5, dash_power).execute(agent)
        return True

    def execute_goalie(self, agent: 'PlayerAgent'):
        wm: WorldModel = agent.world()
        
        if wm.game_mode().side() is wm.our_side():
            return self.do_goalie_wait(agent)
        
        game_mode = wm.game_mode().type()
        if game_mode.is_penalty_setup() or game_mode.is_penalty_ready():
            return self.do_goalie_setup(agent)
        if game_mode.is_penalty_taken():
            return self.do_goalie(agent)
        return self.do_goalie_wait(agent)

    def do_goalie_wait(self, agent: 'PlayerAgent'):
        log.sw_log().team().add_text( "do_goalie_wait")
        wm: WorldModel = agent.world()
        if not wm.self().goalie():
            return False
        agent.set_neck_action(NeckTurnToBall())
        TurnToBall().execute(agent)
        return True
    
    def do_goalie_setup(self, agent: 'PlayerAgent'):
        log.sw_log().team().add_text( "do_goalie_setup")
        wm: WorldModel = agent.world()
        if not wm.self().goalie():
            return False
        agent.set_neck_action(NeckTurnToBall())
        our_goal_point = Vector2D(-ServerParam.i().pitch_half_length()*self.goal_side, 0)
        our_goal_point._x += (ServerParam.i().pen_max_goalie_dist_x()- 0.2 )*self.goal_side 
        #go to border of possible position
        if GoToPoint(our_goal_point,1, ServerParam.i().max_dash_power()).execute(agent):
            return True
        #already there
        #turn to ball
        TurnToBall().execute(agent)
        return True
    
    def do_goalie(self, agent: 'PlayerAgent'):
        log.sw_log().team().add_text( "do_goalie")
        SP = ServerParam.i()
        wm: WorldModel = agent.world()
        if not wm.self().goalie():
            return False
        agent.set_neck_action(NeckTurnToBall())
        penalty_top = -SP.penalty_area_half_width() + 1 
        penalty_width = SP.penalty_area_width() -2
        penalty_left = -SP.pitch_half_length() if self.goal_side == 1 else SP.pitch_half_length() - SP.penalty_area_length() +1
        penalty_lenth = SP.penalty_area_length() -2
        our_penalty = Rect2D(Vector2D(penalty_left, penalty_top), Size2D(penalty_lenth, penalty_width))

        if wm.self().player_type().catchable_area() - 0.05 > wm.ball().dist_from_self() and our_penalty.contains(wm.ball().pos()):
            agent.do_catch()
            return True
        if wm.self().is_kickable():
            opp_goal_x = ServerParam.i().pitch_half_length()*self.goal_side
            SmartKick(Vector2D(opp_goal_x, 0), ServerParam.i().ball_speed_max(), 1, 1).execute(agent)
            return True
        if self.goal_side == 1:
            if normal_goalie.decision(agent):
                return True
        Intercept().execute(agent)
        return True
    def _is_kicker(self, wm: 'WorldModel'):
        log.sw_log().team().add_text( "_is_kicker, kicker is "+ str(self.penalty_order[0])+"idx = "+str(self.kicker_unum))
        return wm.self().unum() == self.kicker_unum
