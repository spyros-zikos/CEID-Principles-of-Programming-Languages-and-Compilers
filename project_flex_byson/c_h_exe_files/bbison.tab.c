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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bbison.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


extern int yylex();
extern int yyparse();
extern FILE* yyin;

extern int counter;
FILE * fp;

char fname[50];

void yyerror(const char* s);

#line 90 "bbison.tab.c"

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

#include "bbison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_NEWLINE = 3,                  /* T_NEWLINE  */
  YYSYMBOL_T_INT = 4,                      /* T_INT  */
  YYSYMBOL_ATTSTR = 5,                     /* ATTSTR  */
  YYSYMBOL_ATTINT = 6,                     /* ATTINT  */
  YYSYMBOL_T_STR = 7,                      /* T_STR  */
  YYSYMBOL_T_LinearLayout1 = 8,            /* T_LinearLayout1  */
  YYSYMBOL_T_LinearLayout2 = 9,            /* T_LinearLayout2  */
  YYSYMBOL_T_RelativeLayout1 = 10,         /* T_RelativeLayout1  */
  YYSYMBOL_T_RelativeLayout2 = 11,         /* T_RelativeLayout2  */
  YYSYMBOL_T_RadioGroup1 = 12,             /* T_RadioGroup1  */
  YYSYMBOL_T_RadioGroup2 = 13,             /* T_RadioGroup2  */
  YYSYMBOL_T_TextView = 14,                /* T_TextView  */
  YYSYMBOL_T_ImageView = 15,               /* T_ImageView  */
  YYSYMBOL_T_RadioButton = 16,             /* T_RadioButton  */
  YYSYMBOL_T_Button = 17,                  /* T_Button  */
  YYSYMBOL_T_ProgressBar = 18,             /* T_ProgressBar  */
  YYSYMBOL_T_EndTag1 = 19,                 /* T_EndTag1  */
  YYSYMBOL_T_EndTag2 = 20,                 /* T_EndTag2  */
  YYSYMBOL_T_Android = 21,                 /* T_Android  */
  YYSYMBOL_T_Width = 22,                   /* T_Width  */
  YYSYMBOL_T_Height = 23,                  /* T_Height  */
  YYSYMBOL_T_Id = 24,                      /* T_Id  */
  YYSYMBOL_T_Orientation = 25,             /* T_Orientation  */
  YYSYMBOL_T_TextColor = 26,               /* T_TextColor  */
  YYSYMBOL_T_Padding = 27,                 /* T_Padding  */
  YYSYMBOL_T_CheckedButton = 28,           /* T_CheckedButton  */
  YYSYMBOL_T_Max = 29,                     /* T_Max  */
  YYSYMBOL_T_Progress = 30,                /* T_Progress  */
  YYSYMBOL_T_Text = 31,                    /* T_Text  */
  YYSYMBOL_T_Src = 32,                     /* T_Src  */
  YYSYMBOL_T_Rnum = 33,                    /* T_Rnum  */
  YYSYMBOL_YYACCEPT = 34,                  /* $accept  */
  YYSYMBOL_root = 35,                      /* root  */
  YYSYMBOL_textview = 36,                  /* textview  */
  YYSYMBOL_imageview = 37,                 /* imageview  */
  YYSYMBOL_radiobutton = 38,               /* radiobutton  */
  YYSYMBOL_button = 39,                    /* button  */
  YYSYMBOL_progressbar = 40,               /* progressbar  */
  YYSYMBOL_buttonss = 41,                  /* buttonss  */
  YYSYMBOL_radiogroup = 42,                /* radiogroup  */
  YYSYMBOL_T1 = 43,                        /* T1  */
  YYSYMBOL_T2 = 44,                        /* T2  */
  YYSYMBOL_comment = 45,                   /* comment  */
  YYSYMBOL_mandatory = 46,                 /* mandatory  */
  YYSYMBOL_NA = 47,                        /* NA  */
  YYSYMBOL_Aid = 48,                       /* Aid  */
  YYSYMBOL_Aor = 49,                       /* Aor  */
  YYSYMBOL_Atc = 50,                       /* Atc  */
  YYSYMBOL_Ap = 51,                        /* Ap  */
  YYSYMBOL_Acb = 52,                       /* Acb  */
  YYSYMBOL_Amax = 53,                      /* Amax  */
  YYSYMBOL_Aprog = 54,                     /* Aprog  */
  YYSYMBOL_AL = 55,                        /* AL  */
  YYSYMBOL_AR = 56,                        /* AR  */
  YYSYMBOL_AT = 57,                        /* AT  */
  YYSYMBOL_AI = 58,                        /* AI  */
  YYSYMBOL_AB = 59,                        /* AB  */
  YYSYMBOL_ARB = 60,                       /* ARB  */
  YYSYMBOL_ARG = 61,                       /* ARG  */
  YYSYMBOL_APB = 62,                       /* APB  */
  YYSYMBOL_APBComb = 63,                   /* APBComb  */
  YYSYMBOL_values = 64,                    /* values  */
  YYSYMBOL_nline = 65,                     /* nline  */
  YYSYMBOL_padding = 66                    /* padding  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   528

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  302

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   288


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    46,    46,    47,    48,    52,    53,    54,    55,    56,
      58,    58,    60,    62,    62,    65,    65,    65,    65,    65,
      65,    67,    67,    69,    69,    71,    74,    75,    76,    77,
      78,    79,    80,    82,    82,    82,    82,    82,    83,    83,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      90,    92,    92,    92,    93,    93,    94,    94,    95,    95,
      96,    97,    99,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   104,   106,   106,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   113,   115,   115,   116,   116,
     116,   116,   117,   117,   117,   117,   117,   118,   118,   119,
     119,   120,   121,   125,   125,   127,   127,   128,   128
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
  "\"end of file\"", "error", "\"invalid token\"", "T_NEWLINE", "T_INT",
  "ATTSTR", "ATTINT", "T_STR", "T_LinearLayout1", "T_LinearLayout2",
  "T_RelativeLayout1", "T_RelativeLayout2", "T_RadioGroup1",
  "T_RadioGroup2", "T_TextView", "T_ImageView", "T_RadioButton",
  "T_Button", "T_ProgressBar", "T_EndTag1", "T_EndTag2", "T_Android",
  "T_Width", "T_Height", "T_Id", "T_Orientation", "T_TextColor",
  "T_Padding", "T_CheckedButton", "T_Max", "T_Progress", "T_Text", "T_Src",
  "T_Rnum", "$accept", "root", "textview", "imageview", "radiobutton",
  "button", "progressbar", "buttonss", "radiogroup", "T1", "T2", "comment",
  "mandatory", "NA", "Aid", "Aor", "Atc", "Ap", "Acb", "Amax", "Aprog",
  "AL", "AR", "AT", "AI", "AB", "ARB", "ARG", "APB", "APBComb", "values",
  "nline", "padding", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-106)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,    31,    40,    31,    73,  -111,  -111,     1,    31,    63,
      63,  -111,    63,    79,    79,  -111,    89,   128,    31,   128,
     121,   138,   138,     0,   123,   128,   128,   115,  -111,   119,
     126,  -111,  -111,    31,    31,  -111,  -111,    63,    63,   140,
     152,   133,  -111,  -111,  -111,  -111,  -111,    31,    31,  -111,
     139,   141,  -111,  -111,    31,    31,   138,   138,    31,  -111,
      31,  -111,    31,  -111,  -111,    31,  -111,    71,    18,   125,
      31,    63,    63,    63,    63,    63,  -111,  -111,  -111,  -111,
    -111,    31,  -111,    79,    79,    79,    79,    79,  -111,    63,
      31,    63,    31,    63,    31,    63,    31,   128,    31,    30,
      63,    63,   142,    94,    63,    63,   146,    33,    63,    63,
     147,   -12,    63,    63,   149,    38,   128,   128,   128,  -111,
    -111,   151,   163,   168,    23,    63,    -4,    63,    31,   170,
     171,    83,    63,    53,    63,  -111,   173,   172,    96,    63,
      55,    63,  -111,   175,    61,    63,    59,    63,  -111,   176,
     178,   124,   128,   128,  -111,     7,   128,   128,  -111,    97,
     128,   128,  -111,  -111,  -111,   128,   181,   155,   183,   157,
     179,    31,  -111,   128,   186,   150,   188,   164,  -111,   128,
     189,   165,   191,   166,   128,   194,   169,   196,   180,  -111,
    -111,   174,  -111,  -111,   184,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,    74,   128,   128,  -111,   128,
     197,   128,   201,  -111,   193,   111,   128,   128,  -111,   128,
     207,   128,   209,   103,   128,   128,  -111,   128,   212,   128,
     214,   128,   128,  -111,   128,   216,   128,   217,   199,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,    63,
      31,   203,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,   198,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,    79,  -111,    31,    63,    31,   193,    77,
     182,   227,   229,  -111,    63,    63,   205,   218,   233,   235,
    -111,  -111
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
     107,   107,     0,   107,    21,   108,     1,     0,   107,     0,
       0,    22,   105,     0,     0,   106,     0,   107,   107,   107,
       0,     0,     0,   107,     0,   107,   107,     0,    37,     0,
       0,    38,    39,   107,   107,   104,   103,     0,     0,     0,
       0,     0,    33,    36,    34,    35,    25,   107,   107,     4,
       0,     0,    26,    27,   107,   107,     0,     0,   107,    15,
     107,    13,   107,    23,    24,   107,    14,    21,     0,    21,
     107,     0,     0,     0,     0,     0,    18,    17,    19,    20,
      16,   107,     3,     0,     0,     0,     0,     0,     2,     0,
     107,     0,   107,     0,   107,     0,   107,   107,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   107,   107,    86,
      87,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,     8,     0,
       0,     0,   107,   107,    93,     0,   107,   107,    94,     0,
     107,   107,    95,     9,    30,   107,     0,     0,     0,     0,
       0,   107,    28,   107,     0,     0,     0,     0,    29,   107,
       0,     0,     0,     0,   107,     0,     0,     0,     0,    31,
      32,     0,    88,    89,     0,    97,    90,    92,    96,    99,
      91,   102,   100,   101,    98,     0,   107,   107,    79,   107,
       0,   107,     0,    12,     0,     0,   107,   107,    44,   107,
       0,   107,     0,     0,   107,   107,    55,   107,     0,   107,
       0,   107,   107,    66,   107,     0,   107,     0,     0,    75,
      76,    78,    77,    80,    81,    84,    82,    83,    85,     0,
     107,     0,    40,    41,    43,    42,    45,    46,    49,    47,
      48,    50,     0,    51,    52,    54,    53,    56,    57,    60,
      58,    59,    61,    62,    63,    65,    64,    67,    68,    71,
      69,    70,    72,     0,    10,   107,     0,   107,    11,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
      73,    74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,   244,  -111,  -111,  -111,  -111,  -111,    -3,  -111,   192,
      64,     5,   -13,   148,   292,   221,   -97,   -85,   -96,  -110,
     -71,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
      -8,    32,    -1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    59,    76,    77,   250,    78,    79,   170,    80,    60,
      61,    62,    17,    30,    25,    26,   105,   109,   101,   117,
     118,    18,    20,    92,    94,    96,   287,    90,    98,   119,
      37,    27,     4
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       5,    19,     7,    23,   125,     3,   152,   132,   161,     9,
     113,    10,    39,    11,    38,   136,    28,    29,    32,   143,
      39,  -105,     5,   139,    43,    45,     9,   145,    10,   168,
      71,    39,    72,    73,     1,    74,    75,   150,    48,    49,
       6,    13,    14,   195,    15,   153,   157,    55,    63,    64,
     201,   122,    54,    58,    39,    15,   166,    39,   122,    67,
     136,    68,    39,   123,    69,   137,    12,   149,   150,   207,
      89,    91,    93,    95,    97,    82,   217,    39,     8,    39,
       8,   192,    70,    39,   176,   197,    88,   182,   136,   102,
     187,   106,   185,   110,   225,   114,   120,   121,    39,   232,
      16,   291,   122,    83,    84,    85,    86,    87,   292,   129,
     239,    21,    22,   243,   174,   154,   158,   162,    39,   252,
     129,    39,   256,   136,    66,   130,   149,    39,   180,    66,
     136,    23,     8,   171,    81,    39,    46,   129,    47,   263,
      33,    34,   267,    35,    36,    52,   273,    39,    40,   277,
      39,   193,   196,   149,   150,   198,   200,    53,    40,   202,
     204,   128,    56,    57,   208,    24,   135,   142,   164,   148,
     214,   163,   218,    41,   165,   172,   173,   179,   226,   178,
     184,   220,   189,   233,   190,    50,    51,   209,   210,   211,
     212,   219,   213,   221,   227,   222,   229,   228,   230,   234,
     235,   236,   293,   245,   150,   240,   242,   248,   244,   249,
     247,   237,   258,   149,   261,   253,   255,   269,   257,   272,
     260,   279,   282,   264,   266,   136,   268,   122,   271,   129,
     274,   276,   294,   278,   295,   281,   298,    99,   300,   103,
     301,   107,   299,   111,     2,   115,    42,   284,   124,   126,
      65,     0,   131,   133,     0,   285,   138,   140,     0,     0,
     144,   146,     0,     0,   151,   155,   159,     0,     0,     0,
     286,     0,     0,   167,     0,   169,     0,     0,     0,     0,
     175,   283,   177,     0,   288,     0,   290,   181,     0,   183,
       0,     0,     0,   186,     0,   188,     0,     0,     0,     0,
     191,   194,     0,     0,   191,     0,     0,     0,   194,     0,
       0,    31,     0,   205,     0,     0,     0,     0,    44,     0,
       0,   215,     0,     0,     0,     0,     0,   223,     0,     0,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   238,     0,     0,   238,     0,     0,
       0,     0,     0,     0,   251,     0,     0,   251,     0,     0,
       0,     0,   262,     0,     0,   262,     0,     0,     0,   262,
       0,   100,   262,   104,     0,   108,     0,   112,     0,   116,
       0,     0,     0,   127,     0,     0,     0,   134,     0,     0,
       0,   141,     0,     0,     0,   147,     0,     0,     0,   156,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   289,     0,     0,     0,     0,     0,
       0,     0,   296,   297,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   203,     0,     0,     0,   206,     0,     0,
       0,     0,     0,     0,     0,   216,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,   231,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   241,
       0,     0,     0,   246,     0,     0,     0,     0,     0,   254,
       0,     0,     0,   259,     0,     0,     0,   265,     0,     0,
       0,   270,     0,     0,   275,     0,     0,     0,   280
};

static const yytype_int16 yycheck[] =
{
       1,    14,     3,     3,   100,     0,   116,   104,   118,     8,
      95,    10,    24,     8,    22,    27,    17,    18,    19,    31,
      24,    21,    23,   108,    25,    26,     8,   112,    10,    33,
      12,    24,    14,    15,     3,    17,    18,    30,    33,    34,
       0,     9,    10,   153,    12,   116,   117,    48,    56,    57,
     160,    28,    47,    54,    24,    23,    33,    24,    28,    60,
      27,    62,    24,    33,    65,    32,     3,    29,    30,   165,
      83,    84,    85,    86,    87,    70,   173,    24,     7,    24,
       7,   152,    11,    24,    31,   156,    81,    32,    27,    90,
      31,    92,    31,    94,   179,    96,    97,    98,    24,   184,
      21,    24,    28,    71,    72,    73,    74,    75,    31,    26,
     206,    22,    23,   209,    31,   116,   117,   118,    24,   216,
      26,    24,   219,    27,    60,    31,    29,    24,    32,    65,
      27,     3,     7,   128,     9,    24,    21,    26,    19,   224,
      19,    20,   227,     5,     6,     5,   231,    24,    25,   234,
      24,   152,   153,    29,    30,   156,   157,     5,    25,   160,
     161,    19,    23,    22,   165,    17,    20,    20,     5,    20,
     171,    20,   173,    25,     6,     5,     5,     5,   179,     6,
       5,    31,     6,   184,     6,    37,    38,     6,    33,     6,
      33,     5,    13,     5,     5,    31,     5,    32,    32,     5,
      31,     5,    20,     6,    30,   206,   207,     6,   209,    16,
     211,    31,     5,    29,     5,   216,   217,     5,   219,     5,
     221,     5,     5,   224,   225,    27,   227,    28,   229,    26,
     231,   232,     5,   234,     5,   236,    31,    89,     5,    91,
       5,    93,    24,    95,     0,    97,    25,   250,   100,   101,
      58,    -1,   104,   105,    -1,   250,   108,   109,    -1,    -1,
     112,   113,    -1,    -1,   116,   117,   118,    -1,    -1,    -1,
     283,    -1,    -1,   125,    -1,   127,    -1,    -1,    -1,    -1,
     132,   249,   134,    -1,   285,    -1,   287,   139,    -1,   141,
      -1,    -1,    -1,   145,    -1,   147,    -1,    -1,    -1,    -1,
     152,   153,    -1,    -1,   156,    -1,    -1,    -1,   160,    -1,
      -1,    19,    -1,   165,    -1,    -1,    -1,    -1,    26,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,   179,    -1,    -1,
      -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   206,    -1,    -1,   209,    -1,    -1,
      -1,    -1,    -1,    -1,   216,    -1,    -1,   219,    -1,    -1,
      -1,    -1,   224,    -1,    -1,   227,    -1,    -1,    -1,   231,
      -1,    89,   234,    91,    -1,    93,    -1,    95,    -1,    97,
      -1,    -1,    -1,   101,    -1,    -1,    -1,   105,    -1,    -1,
      -1,   109,    -1,    -1,    -1,   113,    -1,    -1,    -1,   117,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   294,   295,    -1,    -1,    -1,    -1,    -1,   157,
      -1,    -1,    -1,   161,    -1,    -1,    -1,   165,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,
      -1,   179,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
      -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,   221,    -1,    -1,    -1,   225,    -1,    -1,
      -1,   229,    -1,    -1,   232,    -1,    -1,    -1,   236
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    35,    45,    66,    66,     0,    66,     7,     8,
      10,    45,     3,    65,    65,    65,    21,    46,    55,    46,
      56,    22,    23,     3,    47,    48,    49,    65,    66,    66,
      47,    48,    66,    19,    20,     5,     6,    64,    64,    24,
      25,    47,    49,    66,    48,    66,    21,    19,    45,    45,
      47,    47,     5,     5,    45,    66,    23,    22,    66,    35,
      43,    44,    45,    64,    64,    43,    44,    66,    66,    66,
      11,    12,    14,    15,    17,    18,    36,    37,    39,    40,
      42,     9,    45,    65,    65,    65,    65,    65,    45,    46,
      61,    46,    57,    46,    58,    46,    59,    46,    62,    47,
      48,    52,    66,    47,    48,    50,    66,    47,    48,    51,
      66,    47,    48,    51,    66,    47,    48,    53,    54,    63,
      66,    66,    28,    33,    47,    52,    47,    48,    19,    26,
      31,    47,    50,    47,    48,    20,    27,    32,    47,    51,
      47,    48,    20,    31,    47,    51,    47,    48,    20,    29,
      30,    47,    53,    54,    66,    47,    48,    54,    66,    47,
      48,    53,    66,    20,     5,     6,    33,    47,    33,    47,
      41,    45,     5,     5,    31,    47,    31,    47,     6,     5,
      32,    47,    32,    47,     5,    31,    47,    31,    47,     6,
       6,    47,    54,    66,    47,    53,    66,    54,    66,    48,
      66,    53,    66,    48,    66,    47,    48,    52,    66,     6,
      33,     6,    33,    13,    66,    47,    48,    50,    66,     5,
      31,     5,    31,    47,    48,    51,    66,     5,    32,     5,
      32,    48,    51,    66,     5,    31,     5,    31,    47,    52,
      66,    48,    66,    52,    66,     6,    48,    66,     6,    16,
      38,    47,    50,    66,    48,    66,    50,    66,     5,    48,
      66,     5,    47,    51,    66,    48,    66,    51,    66,     5,
      48,    66,     5,    51,    66,    48,    66,    51,    66,     5,
      48,    66,     5,    65,    41,    45,    46,    60,    66,    47,
      66,    24,    31,    20,     5,     5,    47,    47,    31,    24,
       5,     5
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    35,    35,    36,    37,    38,    39,    40,
      41,    41,    42,    43,    43,    44,    44,    44,    44,    44,
      44,    45,    45,    46,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    55,    55,    55,    55,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    65,    65,    66,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    13,    12,     7,     5,     5,     5,     5,     5,
       4,     5,     7,     1,     2,     1,     3,     3,     3,     3,
       3,     1,     3,     6,     6,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       6,     6,     6,     6,     5,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     5,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     5,     6,     6,     6,
       6,     6,     6,     7,     7,     6,     6,     6,     6,     5,
       6,     6,     6,     6,     6,     6,     2,     2,     3,     3,
       3,     3,     3,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     2,     0,     2
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
        yyerror (YY_("syntax error: cannot back up")); \
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
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
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
      yychar = yylex ();
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

#line 1370 "bbison.tab.c"

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
      yyerror (YY_("syntax error"));
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
                      yytoken, &yylval);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 131 "bbison.y"


void prpr() {
	fp = fopen(fname, "r");
	char c = fgetc(fp);
    	while (c != EOF) {
        	printf ("%c", c);
        	c = fgetc(fp);
    	}
    	fclose(fp);

}

int main(int argc, char *argv[]) {
	strcpy(fname, argv[1]);
	yyin = fopen (argv[1], "r");
	yyparse();

	printf("\n--------------\n");
	prpr();
	printf("\n--------------\n");
	printf("SUCCESS!!!\n");

	return 0;
}

void yyerror(const char* s) {
	
	//system("cls");
	printf("\n--------------\n");
	prpr();
	printf("\n--------------");
	printf("\n%s in line %d\n\n  -->  ", s, counter+1);

	fp = fopen(fname, "r");
	char ch = fgetc(fp);
	int flag = 0;
    	while (ch != EOF) {
		if (flag == counter) printf ("%c", ch);
		if (ch == '\n') flag++;
        	ch = fgetc(fp);
    	}
    	fclose(fp);

	exit(1);
}
