# One on One with RL

## Introduction

This is the bachelor's project for my Bsc. Computer Engineering at Amirkabir University! My goal is to use a variety of different Reinforcement Learning algorithms, in order to solve the "penalty" game mode of Robocup's 2D Soccer Simulation, where a one-on-one soccer scenario is played from a top-down view.

## Structure

You can find the environment used for training in the environment server. it is a fork of the robocup soccer simulator server (rcssserver) with minimal modifications. The agent used for the offensive side runs on a fork of Pyrus2D, a project which allows python clients to interact with the rcssserver. **Each folder contains a readme, where you can see changes done from the original project**.

There is also a configuration file at the top-level directory. This is the settings used to set up the environment for training. **You should paste this to ~/.rcssserver/ after installing the server.** *You can see what is different from the default in the environment readme*.
