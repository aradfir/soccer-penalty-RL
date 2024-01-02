/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 26 "player_command_parser.ypp"

#include "pcombuilder.h"
#include "pcomparser.h"


#define    yyparse    RCSS_PCOM_parse

void yyerror( rcss::pcom::Parser::Param& param, const char* s );
int yyerror( rcss::pcom::Parser::Param& param, char* s );

namespace
{
  inline rcss::pcom::Builder& getBuilder( rcss::pcom::Parser::Param& param )
  {
    return param.getBuilder();
  }

#define YYSTYPE rcss::pcom::Parser::Lexer::Holder

  inline int yylex( YYSTYPE* holder, rcss::pcom::Parser::Param& param )
  {
    int rval = param.getLexer().lex( *holder );
//    cout << rval << endl;
    return rval;
  }

}

#define BUILDER getBuilder( param )


#line 103 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "player_command_parser.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_RCSS_PCOM_INT = 3,              /* RCSS_PCOM_INT  */
  YYSYMBOL_RCSS_PCOM_REAL = 4,             /* RCSS_PCOM_REAL  */
  YYSYMBOL_RCSS_PCOM_STR = 5,              /* RCSS_PCOM_STR  */
  YYSYMBOL_RCSS_PCOM_LP = 6,               /* "("  */
  YYSYMBOL_RCSS_PCOM_RP = 7,               /* ")"  */
  YYSYMBOL_RCSS_PCOM_DASH = 8,             /* "dash"  */
  YYSYMBOL_RCSS_PCOM_TURN = 9,             /* "turn"  */
  YYSYMBOL_RCSS_PCOM_TURN_NECK = 10,       /* "turn_neck"  */
  YYSYMBOL_RCSS_PCOM_CHANGE_FOCUS = 11,    /* "change_focus"  */
  YYSYMBOL_RCSS_PCOM_KICK = 12,            /* "kick"  */
  YYSYMBOL_RCSS_PCOM_LONG_KICK = 13,       /* "long_kick"  */
  YYSYMBOL_RCSS_PCOM_CATCH = 14,           /* "catch"  */
  YYSYMBOL_RCSS_PCOM_SAY = 15,             /* "say"  */
  YYSYMBOL_RCSS_PCOM_UNQ_SAY = 16,         /* "unquoted say"  */
  YYSYMBOL_RCSS_PCOM_SENSE_BODY = 17,      /* "sense_body"  */
  YYSYMBOL_RCSS_PCOM_SCORE = 18,           /* "score"  */
  YYSYMBOL_RCSS_PCOM_MOVE = 19,            /* "move"  */
  YYSYMBOL_RCSS_PCOM_CHANGE_VIEW = 20,     /* "change_view"  */
  YYSYMBOL_RCSS_PCOM_COMPRESSION = 21,     /* "compression"  */
  YYSYMBOL_RCSS_PCOM_BYE = 22,             /* "bye"  */
  YYSYMBOL_RCSS_PCOM_DONE = 23,            /* "done"  */
  YYSYMBOL_RCSS_PCOM_POINTTO = 24,         /* "pointto"  */
  YYSYMBOL_RCSS_PCOM_ATTENTIONTO = 25,     /* "attentionto"  */
  YYSYMBOL_RCSS_PCOM_TACKLE = 26,          /* "tackle"  */
  YYSYMBOL_RCSS_PCOM_CLANG = 27,           /* "clang"  */
  YYSYMBOL_RCSS_PCOM_EAR = 28,             /* "ear"  */
  YYSYMBOL_RCSS_PCOM_SYNCH_SEE = 29,       /* "synch_see"  */
  YYSYMBOL_RCSS_PCOM_VIEW_WIDTH_NARROW = 30, /* "narrow"  */
  YYSYMBOL_RCSS_PCOM_VIEW_WIDTH_NORMAL = 31, /* "normal"  */
  YYSYMBOL_RCSS_PCOM_VIEW_WIDTH_WIDE = 32, /* "wide"  */
  YYSYMBOL_RCSS_PCOM_VIEW_QUALITY_LOW = 33, /* "low"  */
  YYSYMBOL_RCSS_PCOM_VIEW_QUALITY_HIGH = 34, /* "high"  */
  YYSYMBOL_RCSS_PCOM_ON = 35,              /* "on"  */
  YYSYMBOL_RCSS_PCOM_OFF = 36,             /* "off"  */
  YYSYMBOL_RCSS_PCOM_TRUE = 37,            /* "true"  */
  YYSYMBOL_RCSS_PCOM_FALSE = 38,           /* "false"  */
  YYSYMBOL_RCSS_PCOM_OUR = 39,             /* "our"  */
  YYSYMBOL_RCSS_PCOM_OPP = 40,             /* "opp"  */
  YYSYMBOL_RCSS_PCOM_LEFT = 41,            /* RCSS_PCOM_LEFT  */
  YYSYMBOL_42_l_ = 42,                     /* 'l'  */
  YYSYMBOL_RCSS_PCOM_RIGHT = 43,           /* RCSS_PCOM_RIGHT  */
  YYSYMBOL_44_r_ = 44,                     /* 'r'  */
  YYSYMBOL_RCSS_PCOM_EAR_PARTIAL = 45,     /* "partial"  */
  YYSYMBOL_RCSS_PCOM_EAR_COMPLETE = 46,    /* "complete"  */
  YYSYMBOL_RCSS_PCOM_CLANG_VERSION = 47,   /* "ver"  */
  YYSYMBOL_RCSS_PCOM_ERROR = 48,           /* RCSS_PCOM_ERROR  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_command_list = 50,              /* command_list  */
  YYSYMBOL_command = 51,                   /* command  */
  YYSYMBOL_dash_com = 52,                  /* dash_com  */
  YYSYMBOL_turn_com = 53,                  /* turn_com  */
  YYSYMBOL_turn_neck_com = 54,             /* turn_neck_com  */
  YYSYMBOL_change_focus_com = 55,          /* change_focus_com  */
  YYSYMBOL_kick_com = 56,                  /* kick_com  */
  YYSYMBOL_long_kick_com = 57,             /* long_kick_com  */
  YYSYMBOL_catch_com = 58,                 /* catch_com  */
  YYSYMBOL_say_com = 59,                   /* say_com  */
  YYSYMBOL_sense_body_com = 60,            /* sense_body_com  */
  YYSYMBOL_score_com = 61,                 /* score_com  */
  YYSYMBOL_move_com = 62,                  /* move_com  */
  YYSYMBOL_change_view_com = 63,           /* change_view_com  */
  YYSYMBOL_view_width = 64,                /* view_width  */
  YYSYMBOL_view_quality = 65,              /* view_quality  */
  YYSYMBOL_compression_com = 66,           /* compression_com  */
  YYSYMBOL_bye_com = 67,                   /* bye_com  */
  YYSYMBOL_done_com = 68,                  /* done_com  */
  YYSYMBOL_pointto_com = 69,               /* pointto_com  */
  YYSYMBOL_attentionto_com = 70,           /* attentionto_com  */
  YYSYMBOL_tackle_com = 71,                /* tackle_com  */
  YYSYMBOL_clang_com = 72,                 /* clang_com  */
  YYSYMBOL_ear_com = 73,                   /* ear_com  */
  YYSYMBOL_synch_see_com = 74,             /* synch_see_com  */
  YYSYMBOL_on_off = 75,                    /* on_off  */
  YYSYMBOL_boolean_value = 76,             /* boolean_value  */
  YYSYMBOL_team_side = 77,                 /* team_side  */
  YYSYMBOL_partial_complete = 78,          /* partial_complete  */
  YYSYMBOL_floating_point_number = 79      /* floating_point_number  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   130

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,     2,
       2,     2,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    43,    45,    46,
      47,    48
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   129,   129,   130,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   156,   160,   166,   172,   178,
     184,   190,   196,   202,   206,   212,   218,   224,   230,   234,
     240,   244,   248,   254,   258,   264,   270,   276,   282,   286,
     292,   296,   300,   306,   311,   317,   323,   327,   331,   335,
     339,   343,   349,   355,   359,   365,   369,   373,   377,   383,
     387,   391,   395,   401,   405,   411,   415
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "RCSS_PCOM_INT",
  "RCSS_PCOM_REAL", "RCSS_PCOM_STR", "\"(\"", "\")\"", "\"dash\"",
  "\"turn\"", "\"turn_neck\"", "\"change_focus\"", "\"kick\"",
  "\"long_kick\"", "\"catch\"", "\"say\"", "\"unquoted say\"",
  "\"sense_body\"", "\"score\"", "\"move\"", "\"change_view\"",
  "\"compression\"", "\"bye\"", "\"done\"", "\"pointto\"",
  "\"attentionto\"", "\"tackle\"", "\"clang\"", "\"ear\"", "\"synch_see\"",
  "\"narrow\"", "\"normal\"", "\"wide\"", "\"low\"", "\"high\"", "\"on\"",
  "\"off\"", "\"true\"", "\"false\"", "\"our\"", "\"opp\"",
  "RCSS_PCOM_LEFT", "'l'", "RCSS_PCOM_RIGHT", "'r'", "\"partial\"",
  "\"complete\"", "\"ver\"", "RCSS_PCOM_ERROR", "$accept", "command_list",
  "command", "dash_com", "turn_com", "turn_neck_com", "change_focus_com",
  "kick_com", "long_kick_com", "catch_com", "say_com", "sense_body_com",
  "score_com", "move_com", "change_view_com", "view_width", "view_quality",
  "compression_com", "bye_com", "done_com", "pointto_com",
  "attentionto_com", "tackle_com", "clang_com", "ear_com", "synch_see_com",
  "on_off", "boolean_value", "team_side", "partial_complete",
  "floating_point_number", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-113)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      14,    59,  -113,    17,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,    28,    28,    28,    28,
      28,    28,    28,     8,    38,    56,    28,    30,    61,    68,
      82,    22,    16,    28,    84,    85,    86,  -113,  -113,  -113,
    -113,    15,    87,    88,    28,    28,    28,    89,    90,  -113,
    -113,    28,  -113,  -113,  -113,    32,    91,  -113,  -113,    92,
      28,    97,    94,  -113,  -113,  -113,  -113,    99,     0,    45,
      18,  -113,  -113,    96,  -113,  -113,    98,   100,   101,  -113,
    -113,   102,  -113,  -113,  -113,   103,  -113,  -113,   104,   105,
    -113,   106,  -113,  -113,  -113,  -113,  -113,   107,   112,  -113,
    -113,     1,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,   113,     3,   110,  -113,  -113,     5,   111,   114,
     115,   116,  -113,   117,   118,   119,   120,  -113,   121,  -113,
     122,  -113,  -113,  -113,  -113
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    33,     0,     2,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     3,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,    40,    41,    42,     0,     0,    46,    47,     0,
       0,     0,     0,    69,    70,    71,    72,     0,     0,     0,
       0,    62,    25,     0,    27,    28,     0,     0,     0,    32,
      34,     0,    39,    43,    44,     0,    45,    49,     0,     0,
      52,     0,    53,    65,    66,    67,    68,     0,     0,    63,
      64,     0,    26,    29,    30,    31,    37,    38,    48,    51,
      50,    54,     0,     0,     0,    73,    74,     0,     0,     0,
       0,     0,    61,     0,     0,     0,     0,    59,     0,    58,
       0,    60,    55,    57,    56
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -113,  -113,   127,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,    -7,  -112,
     -27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    65,    95,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   111,   107,    77,   128,
      51
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      52,    53,    54,    55,    56,    57,   123,   102,   124,    61,
     130,   131,   133,    58,    70,   134,    78,    47,    49,    50,
       1,    71,    82,     1,    83,    49,    50,    86,    87,    88,
       2,    49,    50,     2,    91,   103,   104,   105,   106,    92,
      73,    74,    75,    98,    76,    59,   125,   126,   125,   126,
     125,   126,    72,   109,   110,    73,    74,    75,    69,    76,
      62,    63,    64,    60,    66,    93,    94,    26,    27,    28,
      29,    30,    31,    32,    33,    67,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    68,
      79,    80,   108,    81,    84,    85,    89,    90,    96,    97,
      99,   100,   101,   112,   127,   113,     0,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   129,   132,   135,     0,
       0,   136,   137,   138,   139,   140,   141,   142,   143,   144,
      48
};

static const yytype_int8 yycheck[] =
{
      27,    28,    29,    30,    31,    32,     5,     7,     7,    36,
       7,   123,     7,     5,    41,   127,    43,     0,     3,     4,
       6,     5,     7,     6,    51,     3,     4,    54,    55,    56,
      16,     3,     4,    16,    61,    35,    36,    37,    38,     7,
      39,    40,    41,    70,    43,     7,    45,    46,    45,    46,
      45,    46,    36,    35,    36,    39,    40,    41,    36,    43,
      30,    31,    32,     7,     3,    33,    34,     8,     9,    10,
      11,    12,    13,    14,    15,     7,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     7,
       6,     6,    47,     7,     7,     7,     7,     7,     7,     7,
       3,     7,     3,     7,   111,     7,    -1,     7,     7,     7,
       7,     7,     7,     7,     7,     3,     3,     7,     7,    -1,
      -1,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       3
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    16,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     8,     9,    10,    11,
      12,    13,    14,    15,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,    51,     3,
       4,    79,    79,    79,    79,    79,    79,    79,     5,     7,
       7,    79,    30,    31,    32,    64,     3,     7,     7,    36,
      79,     5,    36,    39,    40,    41,    43,    77,    79,     6,
       6,     7,     7,    79,     7,     7,    79,    79,    79,     7,
       7,    79,     7,    33,    34,    65,     7,     7,    79,     3,
       7,     3,     7,    35,    36,    37,    38,    76,    47,    35,
      36,    75,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     7,     3,     5,     7,    45,    46,    77,    78,     3,
       7,    78,     7,     7,    78,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    50,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    53,    54,    55,
      56,    57,    58,    59,    59,    60,    61,    62,    63,    63,
      64,    64,    64,    65,    65,    66,    67,    68,    69,    69,
      70,    70,    70,    71,    71,    72,    73,    73,    73,    73,
      73,    73,    74,    75,    75,    76,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    79,    79
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     4,     4,     5,
       5,     5,     4,     1,     4,     3,     3,     5,     5,     4,
       1,     1,     1,     1,     1,     4,     3,     3,     5,     4,
       5,     5,     4,     4,     5,     8,     8,     8,     7,     7,
       7,     6,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (param, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, param); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, rcss::pcom::Parser::Param& param)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (param);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, rcss::pcom::Parser::Param& param)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, param);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, rcss::pcom::Parser::Param& param)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], param);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, param); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, rcss::pcom::Parser::Param& param)
{
  YY_USE (yyvaluep);
  YY_USE (param);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (rcss::pcom::Parser::Param& param)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, param);
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 25: /* dash_com: "(" "dash" floating_point_number ")"  */
#line 157 "player_command_parser.ypp"
           {
             BUILDER.dash( (yyvsp[-1]. m_double ) );
           }
#line 1281 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 26: /* dash_com: "(" "dash" floating_point_number floating_point_number ")"  */
#line 161 "player_command_parser.ypp"
           {
	           BUILDER.dash( (yyvsp[-2]. m_double ), (yyvsp[-1]. m_double ) );
           }
#line 1289 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 27: /* turn_com: "(" "turn" floating_point_number ")"  */
#line 167 "player_command_parser.ypp"
           {
             BUILDER.turn( (yyvsp[-1]. m_double ) );
           }
#line 1297 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 28: /* turn_neck_com: "(" "turn_neck" floating_point_number ")"  */
#line 173 "player_command_parser.ypp"
                {
                  BUILDER.turn_neck( (yyvsp[-1]. m_double ) );
                }
#line 1305 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 29: /* change_focus_com: "(" "change_focus" floating_point_number floating_point_number ")"  */
#line 179 "player_command_parser.ypp"
                {
                  BUILDER.change_focus( (yyvsp[-2]. m_double ), (yyvsp[-1]. m_double ) );
                }
#line 1313 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 30: /* kick_com: "(" "kick" floating_point_number floating_point_number ")"  */
#line 185 "player_command_parser.ypp"
           {
             BUILDER.kick( (yyvsp[-2]. m_double ), (yyvsp[-1]. m_double ) );
           }
#line 1321 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 31: /* long_kick_com: "(" "long_kick" floating_point_number floating_point_number ")"  */
#line 191 "player_command_parser.ypp"
           {
             BUILDER.long_kick( (yyvsp[-2]. m_double ), (yyvsp[-1]. m_double ) );
           }
#line 1329 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 32: /* catch_com: "(" "catch" floating_point_number ")"  */
#line 197 "player_command_parser.ypp"
            {
              BUILDER.goalieCatch( (yyvsp[-1]. m_double ) );
            }
#line 1337 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 33: /* say_com: "unquoted say"  */
#line 203 "player_command_parser.ypp"
          {
            BUILDER.say( (yyvsp[0]. m_str ) );
          }
#line 1345 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 34: /* say_com: "(" "say" RCSS_PCOM_STR ")"  */
#line 207 "player_command_parser.ypp"
          {
            BUILDER.say( rcss::stripQuotes( (yyvsp[-1]. m_str ) ) );
          }
#line 1353 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 35: /* sense_body_com: "(" "sense_body" ")"  */
#line 213 "player_command_parser.ypp"
                 {
                   BUILDER.sense_body();
                 }
#line 1361 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 36: /* score_com: "(" "score" ")"  */
#line 219 "player_command_parser.ypp"
            {
              BUILDER.score();
            }
#line 1369 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 37: /* move_com: "(" "move" floating_point_number floating_point_number ")"  */
#line 225 "player_command_parser.ypp"
           {
             BUILDER.move( (yyvsp[-2]. m_double ), (yyvsp[-1]. m_double ) );
           }
#line 1377 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 38: /* change_view_com: "(" "change_view" view_width view_quality ")"  */
#line 231 "player_command_parser.ypp"
                 {
                   BUILDER.change_view( (yyvsp[-2]. m_view_w ), (yyvsp[-1]. m_view_q ) );
                 }
#line 1385 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 39: /* change_view_com: "(" "change_view" view_width ")"  */
#line 235 "player_command_parser.ypp"
                 {
                   BUILDER.change_view( (yyvsp[-1]. m_view_w ) );
                 }
#line 1393 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 40: /* view_width: "narrow"  */
#line 241 "player_command_parser.ypp"
             {
               (yyval. m_view_w ) = rcss::pcom::NARROW;
             }
#line 1401 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 41: /* view_width: "normal"  */
#line 245 "player_command_parser.ypp"
             {
               (yyval. m_view_w ) = rcss::pcom::NORMAL;
             }
#line 1409 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 42: /* view_width: "wide"  */
#line 249 "player_command_parser.ypp"
             {
               (yyval. m_view_w ) = rcss::pcom::WIDE;
             }
#line 1417 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 43: /* view_quality: "low"  */
#line 255 "player_command_parser.ypp"
               {
                 (yyval. m_view_q ) = rcss::pcom::LOW;
               }
#line 1425 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 44: /* view_quality: "high"  */
#line 259 "player_command_parser.ypp"
               {
                 (yyval. m_view_q ) = rcss::pcom::HIGH;
               }
#line 1433 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 45: /* compression_com: "(" "compression" RCSS_PCOM_INT ")"  */
#line 265 "player_command_parser.ypp"
                  {
                    BUILDER.compression( (yyvsp[-1]. m_int ) );
                  }
#line 1441 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 46: /* bye_com: "(" "bye" ")"  */
#line 271 "player_command_parser.ypp"
          {
            BUILDER.bye();
          }
#line 1449 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 47: /* done_com: "(" "done" ")"  */
#line 277 "player_command_parser.ypp"
           {
             BUILDER.done();
           }
#line 1457 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 48: /* pointto_com: "(" "pointto" floating_point_number floating_point_number ")"  */
#line 283 "player_command_parser.ypp"
              {
                BUILDER.pointto( true, (yyvsp[-2]. m_double ), (yyvsp[-1]. m_double ) );
              }
#line 1465 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 49: /* pointto_com: "(" "pointto" "off" ")"  */
#line 287 "player_command_parser.ypp"
              {
                BUILDER.pointto( false, 0.0, 0.0 );
              }
#line 1473 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 50: /* attentionto_com: "(" "attentionto" team_side RCSS_PCOM_INT ")"  */
#line 293 "player_command_parser.ypp"
                  {
                    BUILDER.attentionto( true, (yyvsp[-2]. m_team ), "", (yyvsp[-1]. m_int ) );
                  }
#line 1481 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 51: /* attentionto_com: "(" "attentionto" RCSS_PCOM_STR RCSS_PCOM_INT ")"  */
#line 297 "player_command_parser.ypp"
                  {
                    BUILDER.attentionto( true, rcss::pcom::UNKNOWN_TEAM, (yyvsp[-2]. m_str ), (yyvsp[-1]. m_int ) );
                  }
#line 1489 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 52: /* attentionto_com: "(" "attentionto" "off" ")"  */
#line 301 "player_command_parser.ypp"
                  {
                    BUILDER.attentionto( false, rcss::pcom::UNKNOWN_TEAM, "", 0 );
                  }
#line 1497 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 53: /* tackle_com: "(" "tackle" floating_point_number ")"  */
#line 307 "player_command_parser.ypp"
             {
               BUILDER.tackle( (yyvsp[-1]. m_double ) );
             }
#line 1505 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 54: /* tackle_com: "(" "tackle" floating_point_number boolean_value ")"  */
#line 312 "player_command_parser.ypp"
             {
               BUILDER.tackle( (yyvsp[-2]. m_double ), (yyvsp[-1]. m_bool ) );
             }
#line 1513 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 55: /* clang_com: "(" "clang" "(" "ver" RCSS_PCOM_INT RCSS_PCOM_INT ")" ")"  */
#line 318 "player_command_parser.ypp"
           {
             BUILDER.clang( (yyvsp[-3]. m_int ), (yyvsp[-2]. m_int ) );
           }
#line 1521 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 56: /* ear_com: "(" "ear" "(" on_off team_side partial_complete ")" ")"  */
#line 324 "player_command_parser.ypp"
          {
            BUILDER.ear( (yyvsp[-4]. m_bool ), (yyvsp[-3]. m_team ), "", (yyvsp[-2]. m_ear ) );
          }
#line 1529 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 57: /* ear_com: "(" "ear" "(" on_off RCSS_PCOM_STR partial_complete ")" ")"  */
#line 328 "player_command_parser.ypp"
          {
            BUILDER.ear( (yyvsp[-4]. m_bool ), rcss::pcom::UNKNOWN_TEAM, (yyvsp[-3]. m_str ), (yyvsp[-2]. m_ear ) );
          }
#line 1537 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 58: /* ear_com: "(" "ear" "(" on_off team_side ")" ")"  */
#line 332 "player_command_parser.ypp"
          {
            BUILDER.ear( (yyvsp[-3]. m_bool ), (yyvsp[-2]. m_team ), "", rcss::pcom::UNKNOWN_EAR_MODE );
          }
#line 1545 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 59: /* ear_com: "(" "ear" "(" on_off RCSS_PCOM_STR ")" ")"  */
#line 336 "player_command_parser.ypp"
          {
            BUILDER.ear( (yyvsp[-3]. m_bool ), rcss::pcom::UNKNOWN_TEAM, (yyvsp[-2]. m_str ), rcss::pcom::UNKNOWN_EAR_MODE );
          }
#line 1553 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 60: /* ear_com: "(" "ear" "(" on_off partial_complete ")" ")"  */
#line 340 "player_command_parser.ypp"
          {
            BUILDER.ear( (yyvsp[-3]. m_bool ), rcss::pcom::UNKNOWN_TEAM, "", (yyvsp[-2]. m_ear ) );
          }
#line 1561 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 61: /* ear_com: "(" "ear" "(" on_off ")" ")"  */
#line 344 "player_command_parser.ypp"
          {
            BUILDER.ear( (yyvsp[-2]. m_bool ), rcss::pcom::UNKNOWN_TEAM, "", rcss::pcom::UNKNOWN_EAR_MODE );
          }
#line 1569 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 62: /* synch_see_com: "(" "synch_see" ")"  */
#line 350 "player_command_parser.ypp"
                {
                   BUILDER.synch_see();
                }
#line 1577 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 63: /* on_off: "on"  */
#line 356 "player_command_parser.ypp"
         {
           (yyval. m_bool ) = true;
         }
#line 1585 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 64: /* on_off: "off"  */
#line 360 "player_command_parser.ypp"
         {
           (yyval. m_bool ) = false;
         }
#line 1593 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 65: /* boolean_value: "on"  */
#line 366 "player_command_parser.ypp"
                {
                  (yyval. m_bool ) = true;
                }
#line 1601 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 66: /* boolean_value: "off"  */
#line 370 "player_command_parser.ypp"
                {
                  (yyval. m_bool ) = false;
                }
#line 1609 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 67: /* boolean_value: "true"  */
#line 374 "player_command_parser.ypp"
                {
                  (yyval. m_bool ) = true;
                }
#line 1617 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 68: /* boolean_value: "false"  */
#line 378 "player_command_parser.ypp"
                {
                  (yyval. m_bool ) = false;
                }
#line 1625 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 69: /* team_side: "our"  */
#line 384 "player_command_parser.ypp"
            {
              (yyval. m_team ) = rcss::pcom::OUR;
            }
#line 1633 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 70: /* team_side: "opp"  */
#line 388 "player_command_parser.ypp"
            {
              (yyval. m_team ) = rcss::pcom::OPP;
            }
#line 1641 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 71: /* team_side: RCSS_PCOM_LEFT  */
#line 392 "player_command_parser.ypp"
            {
              (yyval. m_team ) = rcss::pcom::LEFT_SIDE;
            }
#line 1649 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 72: /* team_side: RCSS_PCOM_RIGHT  */
#line 396 "player_command_parser.ypp"
            {
              (yyval. m_team ) = rcss::pcom::RIGHT_SIDE;
            }
#line 1657 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 73: /* partial_complete: "partial"  */
#line 402 "player_command_parser.ypp"
                   {
                     (yyval. m_ear ) = rcss::pcom::PARTIAL;
                   }
#line 1665 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 74: /* partial_complete: "complete"  */
#line 406 "player_command_parser.ypp"
                   {
                     (yyval. m_ear ) = rcss::pcom::COMPLETE;
                   }
#line 1673 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 75: /* floating_point_number: RCSS_PCOM_INT  */
#line 412 "player_command_parser.ypp"
                        {
                          (yyval. m_double ) = static_cast< double >( (yyvsp[0]. m_int ) );
                        }
#line 1681 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;

  case 76: /* floating_point_number: RCSS_PCOM_REAL  */
#line 416 "player_command_parser.ypp"
                        {
                          (yyval. m_double ) = (yyvsp[0]. m_double );
                        }
#line 1689 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"
    break;


#line 1693 "/home/arad/robo/rcssserver-18.1.3/build/src/player_command_parser.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (param, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, param);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, param);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (param, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, param);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, param);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 421 "player_command_parser.ypp"



void yyerror (rcss::pcom::Parser::Param& /*param*/, const char* s)
{
  std::cerr << s << std::endl;
  //do nothing
}

int yyerror (rcss::pcom::Parser::Param& param, char* s)
{
  yyerror ( param, (const char*)s );
  return 0;
}
