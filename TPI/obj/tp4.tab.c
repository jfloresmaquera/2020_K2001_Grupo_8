
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "../src/tp4.y"
 /* seccion de definiciones */

	#include <stdio.h>
	#include <math.h>
	#include <ctype.h>
	#include <stdlib.h>
	#include <string.h>
	extern FILE* yyin; 


	void yyerror (char const *s) {
  		 fprintf(stderr, "hay un error \n", s);
	}

	int yylex();

	
   



/* Line 189 of yacc.c  */
#line 95 "tp4.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FOR = 258,
     IF = 259,
     ELSE = 260,
     RETURN = 261,
     SWITCH = 262,
     DECIMAL = 263,
     HEXA = 264,
     OCTAL = 265,
     NUM_R = 266,
     IDENTIFICADOR = 267,
     TIPO_DATO = 268,
     DO = 269,
     WHILE = 270,
     CHAR = 271,
     LITERAL_CADENA = 272,
     MAYOR_IGUAL = 273,
     MENOR_IGUAL = 274,
     IGUALDAD = 275,
     AND = 276,
     OR = 277,
     DESIGUALDAD = 278,
     CASE = 279,
     BREAK = 280,
     DEFAULT = 281,
     MAS_IGUAL = 282,
     MENOS_IGUAL = 283,
     POR_IGUAL = 284,
     DIVIDIDO_IGUAL = 285,
     MAS_MAS = 286,
     MENOS_MENOS = 287
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 27 "../src/tp4.y"

char cadena[50];



/* Line 214 of yacc.c  */
#line 169 "tp4.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 181 "tp4.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   353

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNRULES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      33,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,    35,    43,    49,    44,    45,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    39,    38,
      47,    42,    46,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    36,     2,    37,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     8,    10,    13,    16,    19,
      22,    25,    28,    31,    34,    37,    40,    41,    44,    46,
      57,    58,    61,    64,    67,    70,    73,    76,    79,    82,
      85,    88,    98,   110,   112,   114,   117,   120,   124,   128,
     129,   140,   143,   144,   150,   159,   160,   169,   170,   177,
     182,   183,   187,   188,   190,   194,   198,   201,   208,   219,
     224,   231,   234,   238,   240,   245,   250,   255,   260,   265,
     268,   270,   272,   276,   279,   284,   289,   294,   299,   304,
     306,   310,   313,   318,   320,   322,   324,   326,   330,   334,
     338,   342,   346,   350,   354,   358,   362,   364,   366,   368,
     370,   374,   378
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    -1,    51,    52,    -1,    -1,    33,    -1,
      68,    53,    -1,    54,    53,    -1,    65,    53,    -1,    64,
      53,    -1,    57,    53,    -1,    56,    53,    -1,    61,    53,
      -1,    71,    53,    -1,    60,    53,    -1,     1,    53,    -1,
      -1,    33,    53,    -1,    33,    -1,    13,    12,    34,    75,
      35,    53,    36,    55,    37,    38,    -1,    -1,    65,    55,
      -1,    56,    55,    -1,    57,    55,    -1,    64,    55,    -1,
      61,    55,    -1,    71,    55,    -1,    67,    55,    -1,    68,
      55,    -1,    60,    55,    -1,    33,    55,    -1,    14,    36,
      55,    37,    15,    34,    76,    35,    38,    -1,     3,    34,
      58,    77,    38,    59,    35,    53,    36,    55,    37,    -1,
      71,    -1,    69,    -1,    12,    31,    -1,    12,    32,    -1,
      12,    31,    38,    -1,    12,    32,    38,    -1,    -1,     4,
      34,    76,    35,    53,    36,    55,    37,    62,    63,    -1,
       1,    53,    -1,    -1,     5,    53,    36,    55,    37,    -1,
      15,    34,    76,    35,    53,    36,    55,    37,    -1,    -1,
       7,    34,    76,    35,    53,    36,    66,    37,    -1,    -1,
      24,    76,    39,    55,    25,    38,    -1,    66,    26,    39,
      55,    -1,    -1,     6,    76,    38,    -1,    -1,    69,    -1,
      69,    38,    68,    -1,    13,    12,    38,    -1,    13,    73,
      -1,    13,    12,    40,    77,    41,    38,    -1,    13,    12,
      40,    77,    41,    42,    36,    70,    37,    38,    -1,    13,
      43,    12,    38,    -1,    13,    12,    34,    75,    35,    38,
      -1,     1,    53,    -1,    77,    44,    70,    -1,    77,    -1,
      72,    42,    76,    38,    -1,    72,    27,    76,    38,    -1,
      72,    28,    76,    38,    -1,    72,    29,    76,    38,    -1,
      72,    30,    76,    38,    -1,    13,    12,    -1,    12,    -1,
      74,    -1,    73,    44,    74,    -1,    12,    38,    -1,    12,
      42,    76,    38,    -1,    12,    27,    76,    38,    -1,    12,
      28,    76,    38,    -1,    12,    29,    76,    38,    -1,    12,
      30,    76,    38,    -1,    13,    -1,    13,    44,    75,    -1,
      13,    12,    -1,    13,    12,    44,    75,    -1,    17,    -1,
      77,    -1,    12,    -1,    16,    -1,    77,    45,    77,    -1,
      77,    46,    77,    -1,    77,    47,    77,    -1,    77,    20,
      77,    -1,    77,    18,    77,    -1,    77,    19,    77,    -1,
      77,    23,    77,    -1,    77,    21,    77,    -1,    77,    22,
      77,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      77,    43,    77,    -1,    77,    48,    77,    -1,    77,    49,
      77,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    80,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    99,   100,   101,   104,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   119,   122,   126,   127,   131,   132,   136,   137,   141,
     141,   142,   145,   146,   149,   153,   154,   158,   159,   160,
     163,   164,   167,   168,   169,   172,   173,   174,   175,   176,
     177,   178,   181,   182,   185,   186,   187,   188,   189,   192,
     193,   197,   198,   203,   204,   205,   206,   207,   208,   212,
     213,   214,   215,   220,   221,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FOR", "IF", "ELSE", "RETURN", "SWITCH",
  "DECIMAL", "HEXA", "OCTAL", "NUM_R", "IDENTIFICADOR", "TIPO_DATO", "DO",
  "WHILE", "CHAR", "LITERAL_CADENA", "MAYOR_IGUAL", "MENOR_IGUAL",
  "IGUALDAD", "AND", "OR", "DESIGUALDAD", "CASE", "BREAK", "DEFAULT",
  "MAS_IGUAL", "MENOS_IGUAL", "POR_IGUAL", "DIVIDIDO_IGUAL", "MAS_MAS",
  "MENOS_MENOS", "'\\n'", "'('", "')'", "'{'", "'}'", "';'", "':'", "'['",
  "']'", "'='", "'*'", "','", "'-'", "'>'", "'<'", "'/'", "'+'", "$accept",
  "input", "line", "saltoOpcional", "definicionFuncion",
  "listadoDeSentencias", "sentenciaDoWhile", "sentenciaFor",
  "sentenciaDecOAsig", "incrementoParaFor", "incrementoDecremento",
  "sentenciaIfElse", "$@1", "sentenciaElse", "sentenciaWhile",
  "sentenciaSwitch", "sentenciaCase", "sentenciaReturn",
  "listadoDeSentenciasDeDeclaracion", "sentenciaDeclaracion", "auxi",
  "sentenciaAsignacion", "parametro", "listaIdentificadores",
  "identificadorA", "listaParametros", "exp", "expC", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    10,    40,    41,   123,   125,    59,    58,
      91,    93,    61,    42,    44,    45,    62,    60,    47,    43
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    56,    57,    58,    58,    59,    59,    60,    60,    62,
      61,    61,    63,    63,    64,    65,    65,    66,    66,    66,
      67,    67,    68,    68,    68,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    71,    71,    71,    71,    71,    72,
      72,    73,    73,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    76,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     0,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     0,     2,     1,    10,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     9,    11,     1,     1,     2,     2,     3,     3,     0,
      10,     2,     0,     5,     8,     0,     8,     0,     6,     4,
       0,     3,     0,     1,     3,     3,     2,     6,    10,     4,
       6,     2,     3,     1,     4,     4,     4,     4,     4,     2,
       1,     1,     3,     2,     4,     4,     4,     4,     4,     1,
       3,     2,     4,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    16,     0,     0,     0,    70,     0,     0,
       0,     5,     3,    16,    16,    16,    16,    16,    16,    16,
      16,    53,    16,     0,    16,    15,     0,     0,     0,     0,
       0,     0,     0,    56,    71,     0,     0,     7,    11,    10,
      14,    12,     9,     8,     6,     0,    13,     0,     0,     0,
       0,     0,    17,    16,    70,     0,     0,    34,    33,    96,
      97,    98,    99,    85,    86,    83,     0,    84,     0,    37,
      38,     0,     0,     0,     0,     0,    55,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,     0,     0,     0,
       0,     0,    61,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     0,     0,    79,     0,     0,     0,    59,     0,    72,
      41,     0,    30,     0,    22,    23,    29,    25,    24,    21,
      27,    28,    26,    16,     0,    65,    66,    67,    68,    64,
       0,     0,     0,    91,    92,    90,    94,    95,    93,   100,
      87,    88,    89,   101,   102,     0,    75,    76,    77,    78,
      81,     0,    16,     0,    74,    73,    51,     0,     0,     0,
       0,     0,     0,    47,     0,    80,    60,     0,    57,     0,
       0,     0,     0,    35,    36,    16,     0,     0,     0,    82,
       0,     0,     0,     0,     0,    39,     0,     0,    46,     0,
       0,    63,     0,    44,     0,    42,     0,     0,     0,     0,
       0,    31,     0,    16,    40,     0,    49,    19,    58,    62,
      32,     0,     0,     0,    48,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    12,    25,    13,    84,    85,    86,    56,   181,
      87,    88,   215,   224,    89,    90,   198,    91,    92,    21,
     210,    93,    23,    33,    34,   124,    66,    67
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -130
static const yytype_int16 yypact[] =
{
    -130,   200,  -130,     1,    27,    30,    53,   -18,     7,    52,
      55,  -130,  -130,     1,     1,     1,     1,     1,     1,     1,
       1,    73,     1,    -5,     1,    81,    47,   288,   288,    83,
      86,   295,   102,    91,  -130,    32,   288,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,   103,  -130,   288,   288,   288,
     288,   288,  -130,     1,  -130,    14,    74,  -130,  -130,  -130,
    -130,  -130,  -130,  -130,  -130,  -130,    92,   272,   104,  -130,
    -130,   288,   288,   288,   288,   124,    94,    74,   288,   105,
     129,     1,   288,   119,   109,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   107,    20,  -130,   110,   111,   112,
     113,   115,  -130,   311,   224,     1,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,     1,   116,
     125,   126,   133,     5,   127,   233,   134,  -130,   167,  -130,
      81,   135,  -130,   132,  -130,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,  -130,     1,   311,  -130,  -130,  -130,  -130,  -130,
     124,   162,   139,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   140,  -130,  -130,  -130,  -130,
     137,   124,   -23,    70,  -130,  -130,  -130,   144,   143,   148,
      35,   150,    32,   164,   124,  -130,  -130,   153,  -130,   156,
     288,    32,   155,  -130,  -130,     1,   149,   288,    76,  -130,
      32,    74,   163,   165,   170,  -130,   172,   177,  -130,   180,
     181,   265,   182,  -130,    32,   214,   225,   154,   183,   185,
      74,  -130,   190,     1,  -130,   205,  -130,  -130,  -130,  -130,
    -130,   198,   197,    32,  -130,   199,  -130
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,   -13,  -130,     8,   247,   248,  -130,  -130,
     256,   258,  -130,  -130,   259,   260,  -130,  -130,    11,   237,
      44,    17,  -130,  -130,   186,  -129,   -20,   -36
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -74
static const yytype_int16 yytable[] =
{
      37,    38,    39,    40,    41,    42,    43,    44,    68,    46,
      24,    52,    20,    29,    30,   186,    94,   170,    22,    31,
     104,   179,    47,    48,    49,    50,   103,    97,    98,    99,
     100,   101,   144,    81,    24,     4,     5,    51,    82,     6,
     102,   125,   185,    58,     7,    55,     9,    10,    53,   171,
      32,   119,   120,   121,   122,   199,    96,    32,   126,    54,
      55,    26,   131,    32,    27,    83,   193,   194,   130,   -20,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,    59,    60,    61,    62,    63,    28,    35,    36,
      64,   132,   152,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   207,   -52,    53,   165,   -52,   -52,   188,   -52,
     -52,    45,   189,   208,    79,   -52,    95,   -52,   -52,   -61,
      81,    69,     4,     5,    70,    82,     6,   105,   -52,   -52,
     178,     7,    55,     9,    10,    80,   -52,   123,   -73,   118,
     -52,   128,   143,   127,   -20,   -20,   133,   177,   145,   146,
     147,   148,    83,   149,   166,    81,   -20,     4,     5,   187,
      82,     6,   172,   167,   168,   211,     7,    55,     9,    10,
     202,   169,   174,   176,   180,   182,   183,   206,   190,   191,
     -20,   184,   204,   192,   211,   195,   205,    83,   197,   200,
     196,   -20,   201,   186,    71,    72,    73,    74,   212,   203,
       2,     3,   213,     4,     5,   175,   214,     6,   209,    78,
     231,   216,     7,     8,     9,    10,   217,   218,   219,   223,
     221,   227,   222,   228,   225,   226,    81,   230,     4,     5,
     232,    82,     6,    11,   233,   234,   236,     7,    55,     9,
      10,   235,   106,   107,   108,   109,   110,   111,    14,    15,
     -20,   106,   107,   108,   109,   110,   111,    16,    83,    17,
      18,    19,   151,    57,   229,     0,   129,   112,     0,   113,
     114,   115,   116,   117,   173,     0,   112,     0,   113,   114,
     115,   116,   117,   106,   107,   108,   109,   110,   111,     0,
     106,   107,   108,   109,   110,   111,    59,    60,    61,    62,
      63,     0,     0,     0,    64,    65,     0,     0,   112,   220,
     113,   114,   115,   116,   117,   112,     0,   113,   114,   115,
     116,   117,    71,    72,    73,    74,     0,     0,     0,    75,
       0,     0,     0,    76,     0,    77,     0,    78,    71,    72,
      73,    74,     0,     0,     0,   150,     0,     0,     0,    76,
       0,    77,     0,    78
};

static const yytype_int16 yycheck[] =
{
      13,    14,    15,    16,    17,    18,    19,    20,    28,    22,
      33,    24,     1,    31,    32,    38,    36,    12,     1,    12,
      56,   150,    27,    28,    29,    30,    12,    47,    48,    49,
      50,    51,    12,     1,    33,     3,     4,    42,     6,     7,
      53,    77,   171,    26,    12,    13,    14,    15,     1,    44,
      43,    71,    72,    73,    74,   184,    45,    43,    78,    12,
      13,    34,    82,    43,    34,    33,    31,    32,    81,    37,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,     8,     9,    10,    11,    12,    34,    36,    34,
      16,    83,   105,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    26,     0,     1,   118,     3,     4,    38,     6,
       7,    38,    42,    37,    12,    12,    13,    14,    15,    38,
       1,    38,     3,     4,    38,     6,     7,    35,    25,    26,
     143,    12,    13,    14,    15,    44,    33,    13,    44,    35,
      37,    12,    35,    38,    25,    26,    37,    15,    38,    38,
      38,    38,    33,    38,    38,     1,    37,     3,     4,   172,
       6,     7,    35,    38,    38,   201,    12,    13,    14,    15,
     190,    38,    38,    38,    12,    36,    36,   197,    34,    36,
      26,    44,   195,    35,   220,    35,    37,    33,    24,    36,
     182,    37,    36,    38,    27,    28,    29,    30,    35,   191,
       0,     1,    37,     3,     4,    38,    36,     7,   200,    42,
     223,    39,    12,    13,    14,    15,    39,    37,    37,     5,
      38,    38,   214,    38,   216,   217,     1,    37,     3,     4,
      25,     6,     7,    33,    36,    38,    37,    12,    13,    14,
      15,   233,    18,    19,    20,    21,    22,    23,     1,     1,
      25,    18,    19,    20,    21,    22,    23,     1,    33,     1,
       1,     1,    38,    26,   220,    -1,    80,    43,    -1,    45,
      46,    47,    48,    49,    41,    -1,    43,    -1,    45,    46,
      47,    48,    49,    18,    19,    20,    21,    22,    23,    -1,
      18,    19,    20,    21,    22,    23,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    16,    17,    -1,    -1,    43,    44,
      45,    46,    47,    48,    49,    43,    -1,    45,    46,    47,
      48,    49,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    -1,    40,    -1,    42,    27,    28,
      29,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      -1,    40,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,     0,     1,     3,     4,     7,    12,    13,    14,
      15,    33,    52,    54,    56,    57,    60,    61,    64,    65,
      68,    69,    71,    72,    33,    53,    34,    34,    34,    31,
      32,    12,    43,    73,    74,    36,    34,    53,    53,    53,
      53,    53,    53,    53,    53,    38,    53,    27,    28,    29,
      30,    42,    53,     1,    12,    13,    58,    69,    71,     8,
       9,    10,    11,    12,    16,    17,    76,    77,    76,    38,
      38,    27,    28,    29,    30,    34,    38,    40,    42,    12,
      44,     1,     6,    33,    55,    56,    57,    60,    61,    64,
      65,    67,    68,    71,    76,    13,    68,    76,    76,    76,
      76,    76,    53,    12,    77,    35,    18,    19,    20,    21,
      22,    23,    43,    45,    46,    47,    48,    49,    35,    76,
      76,    76,    76,    13,    75,    77,    76,    38,    12,    74,
      53,    76,    55,    37,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    35,    12,    38,    38,    38,    38,    38,
      34,    38,    53,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    53,    38,    38,    38,    38,
      12,    44,    35,    41,    38,    38,    38,    15,    53,    75,
      12,    59,    36,    36,    44,    75,    38,    53,    38,    42,
      34,    36,    35,    31,    32,    35,    55,    24,    66,    75,
      36,    36,    76,    55,    53,    37,    76,    26,    37,    55,
      70,    77,    35,    37,    36,    62,    39,    39,    37,    37,
      44,    38,    55,     5,    63,    55,    55,    38,    38,    70,
      37,    53,    25,    36,    38,    55,    37
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 15:

/* Line 1455 of yacc.c  */
#line 94 "../src/tp4.y"
    { yyerrok; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 104 "../src/tp4.y"
    {printf("Se ha definido una funcion de tipo %s llamada %s \n",(yyvsp[(1) - (10)].cadena),(yyvsp[(2) - (10)].cadena));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 119 "../src/tp4.y"
    {printf( "Se ha declarado una sentencia do-while \n");;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 122 "../src/tp4.y"
    {printf("Se ha declarado una sentencia for\n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 131 "../src/tp4.y"
    {printf("Se ha incrementado la variable %s \n",(yyvsp[(1) - (2)].cadena));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 132 "../src/tp4.y"
    {printf("Se ha decrementado la variable %s\n",(yyvsp[(1) - (2)].cadena));;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 136 "../src/tp4.y"
    {printf("Se ha incrementado la variable %s \n",(yyvsp[(1) - (3)].cadena));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 137 "../src/tp4.y"
    {printf("Se ha decrementado la variable %s\n",(yyvsp[(1) - (3)].cadena));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 141 "../src/tp4.y"
    {printf ("Se declaro un if \n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 142 "../src/tp4.y"
    { yyerrok; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 146 "../src/tp4.y"
    {printf ("Se declaron un else \n");;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 149 "../src/tp4.y"
    {printf ("Se declaro un while \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 154 "../src/tp4.y"
    {printf ("Se declaro un switch \n");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 159 "../src/tp4.y"
    {printf ("Se declaro un case \n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 160 "../src/tp4.y"
    {printf ("Se declaro el default \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 164 "../src/tp4.y"
    {printf ("Se declaro un return \n ");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 172 "../src/tp4.y"
    {printf ("Se declaro una variable de tipo %s llamada %s \n", (yyvsp[(1) - (3)].cadena),(yyvsp[(2) - (3)].cadena));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 174 "../src/tp4.y"
    {printf ("Se declaro un arreglo de tipo %s llamado %s \n",(yyvsp[(1) - (6)].cadena),(yyvsp[(2) - (6)].cadena));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 175 "../src/tp4.y"
    {printf ("Se declaro y se asignaron valores a las posiciones de un arreglo de tipo %s llamado %s \n",(yyvsp[(1) - (10)].cadena),(yyvsp[(2) - (10)].cadena));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 176 "../src/tp4.y"
    {printf ("Se declaro un puntero \n");;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 177 "../src/tp4.y"
    {printf ("Se declaro un prototipo de una funcion de tipo %s llamada %s \n",  (yyvsp[(1) - (6)].cadena), (yyvsp[(2) - (6)].cadena));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 178 "../src/tp4.y"
    { yyerrok; ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 185 "../src/tp4.y"
    {printf ("Se le asigno  %s y se le asigno el valor %s \n",(yyvsp[(1) - (4)].cadena),(yyvsp[(3) - (4)].cadena));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 186 "../src/tp4.y"
    {printf ("Se le asigno  %s y se le asigno su valor mas %s \n",(yyvsp[(1) - (4)].cadena),(yyvsp[(3) - (4)].cadena));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 187 "../src/tp4.y"
    {printf ("Se le asigno  %s y se le asigno su valor menos %s \n",(yyvsp[(1) - (4)].cadena),(yyvsp[(3) - (4)].cadena));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 188 "../src/tp4.y"
    {printf ("Se le asigno  %s y se le asigno su valor por %s \n",(yyvsp[(1) - (4)].cadena),(yyvsp[(3) - (4)].cadena));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 189 "../src/tp4.y"
    {printf ("Se le asigno  %s y se le asigno su valor dividido %s \n",(yyvsp[(1) - (4)].cadena),(yyvsp[(3) - (4)].cadena));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 203 "../src/tp4.y"
    {printf ("Se declaro una variable llamada %s \n",(yyvsp[(1) - (2)].cadena));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 204 "../src/tp4.y"
    {printf ("Se declaro una variable llamada %s y se le asigno el valor %s \n",(yyvsp[(1) - (4)].cadena),(yyvsp[(3) - (4)].cadena));;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 205 "../src/tp4.y"
    {printf ("Se declaro una variable llamada %s y se le asigno el valor %s \n",(yyvsp[(1) - (4)].cadena),(yyvsp[(3) - (4)].cadena));;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 206 "../src/tp4.y"
    {printf ("Se declaro una variable llamada %s y se le asigno el valor %s \n",(yyvsp[(1) - (4)].cadena),(yyvsp[(3) - (4)].cadena));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 207 "../src/tp4.y"
    {printf ("Se declaro una variable llamada %s y se le asigno el valor %s \n",(yyvsp[(1) - (4)].cadena),(yyvsp[(3) - (4)].cadena));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 208 "../src/tp4.y"
    {printf ("Se declaro una variable llamada %s y se le asigno el valor %s \n",(yyvsp[(1) - (4)].cadena),(yyvsp[(3) - (4)].cadena));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 227 "../src/tp4.y"
    {printf ("Se escribio una expresion usando una resta \n");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 228 "../src/tp4.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 229 "../src/tp4.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 230 "../src/tp4.y"
    {printf ("Se escribio una expresion con signo de igualdad \n");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 231 "../src/tp4.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 232 "../src/tp4.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 233 "../src/tp4.y"
    {printf ("Se escribio una expresion con signo de distinto \n");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 234 "../src/tp4.y"
    {printf ("Se escribio una expresion con la operacion logica and \n");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 235 "../src/tp4.y"
    {printf ("Se escribio una expresion con la operacion logica or \n");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 240 "../src/tp4.y"
    {printf ("Se escribio una expresion  \n");;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 241 "../src/tp4.y"
    {printf ("Se escribio una expresion  \n");;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 242 "../src/tp4.y"
    {printf ("Se escribio una expresion  \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 1914 "tp4.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 250 "../src/tp4.y"


int main ()
{

	yyin=fopen("entrada.c","r");
 
   	yyparse();
 
	
	#ifdef BISON_DEBUG
        yydebug = 1;
	#endif
	fclose(yyin);
	system("pause");
	return 0;

}
