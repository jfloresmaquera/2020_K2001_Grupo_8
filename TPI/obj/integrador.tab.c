
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
#line 1 "../src/integrador.y"
 /* seccion de definiciones */

	#include <stdio.h>
	#include <math.h>
	#include <ctype.h>
	#include <stdlib.h>
	#include <string.h>
	#include "tablaDeSimbolos.h"
	#include "tablaDeSimbolos.c"
	#define YYERROR_VERBOSE

	extern FILE* yyin; 
	extern FILE* yyout;
	int my_line=1;
	
	// el mensaje muestre la línea en la que está el error

	int yylex();

	void yyerror (char const *s) {
        agregarErrorSintactico(my_line);
        //fprintf(stderr, "hay un error \n", s); 
    }



/* Line 189 of yacc.c  */
#line 100 "integrador.tab.c"

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
     MENOS_MENOS = 287,
     ERROR_LEXICO = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 28 "../src/integrador.y"

	struct{
		char cadena[50];
		int tipo;// char=0,int=1, float=2, double=3, void=4 ,char*=5
		float numero;
	}s;



/* Line 214 of yacc.c  */
#line 179 "integrador.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 191 "integrador.tab.c"

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   648

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNRULES -- Number of states.  */
#define YYNSTATES  300

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      35,    36,    49,    45,    44,    46,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    37,
      48,    41,    47,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    43,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    38,     2,    39,     2,     2,     2,     2,
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    12,    14,    17,    20,
      23,    26,    29,    32,    35,    38,    41,    44,    47,    50,
      52,    53,    56,    62,    63,    66,    69,    72,    75,    78,
      81,    84,    87,    90,    93,    96,    99,   102,   113,   125,
     127,   130,   132,   134,   136,   138,   141,   143,   145,   149,
     153,   154,   165,   166,   172,   181,   190,   191,   198,   203,
     207,   208,   210,   215,   218,   219,   221,   226,   229,   235,
     240,   244,   251,   262,   271,   278,   279,   282,   286,   288,
     293,   295,   297,   299,   301,   303,   305,   307,   311,   313,
     317,   321,   325,   329,   333,   334,   337,   338,   342,   343,
     347,   350,   351,   356,   357,   360,   364,   365,   367,   369,
     371,   373,   375,   377,   381,   385,   389,   393,   397,   401,
     403,   405,   407,   409,   411,   413,   415,   417,   419,   423,
     427,   431,   435,   439,   443,   447,   451,   455,   459,   461,
     463,   465,   467,   471
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    -1,    52,    53,    -1,    33,    -1,     1,
      52,    -1,    34,    -1,    71,    54,    -1,    55,    54,    -1,
      76,    54,    -1,    75,    54,    -1,    68,    54,    -1,    67,
      54,    -1,    58,    54,    -1,    57,    54,    -1,    64,    54,
      -1,    79,    54,    -1,    63,    54,    -1,    72,    54,    -1,
      33,    -1,    -1,    34,    54,    -1,    12,    35,    88,    36,
      37,    -1,    -1,    68,    56,    -1,    57,    56,    -1,    58,
      56,    -1,    67,    56,    -1,    64,    56,    -1,    79,    56,
      -1,    70,    56,    -1,    71,    56,    -1,    72,    56,    -1,
      55,    54,    -1,    63,    56,    -1,     1,    56,    -1,    34,
      56,    -1,    14,    54,    38,    56,    39,    15,    35,    92,
      36,    37,    -1,     3,    35,    59,    92,    60,    61,    36,
      54,    38,    56,    39,    -1,    73,    -1,    12,    37,    -1,
      79,    -1,     1,    -1,    37,    -1,     1,    -1,    12,    62,
      -1,    31,    -1,    32,    -1,    12,    31,    37,    -1,    12,
      32,    37,    -1,    -1,     4,    35,    92,    36,    54,    38,
      56,    39,    65,    66,    -1,    -1,     5,    54,    38,    56,
      39,    -1,    15,    35,    92,    36,    54,    38,    56,    39,
      -1,     7,    35,    92,    36,    54,    38,    69,    39,    -1,
      -1,    24,    92,    40,    56,    25,    37,    -1,    69,    26,
      40,    56,    -1,     6,    92,    37,    -1,    -1,    74,    -1,
      74,    37,    54,    71,    -1,     1,    71,    -1,    -1,    79,
      -1,    79,    37,    54,    72,    -1,     1,    72,    -1,    13,
      12,    41,    92,    37,    -1,    13,    12,    77,    37,    -1,
      13,    82,    37,    -1,    13,    12,    42,    92,    43,    37,
      -1,    13,    12,    42,    92,    43,    41,    38,    78,    39,
      37,    -1,    13,    12,    35,    86,    36,    38,    56,    39,
      -1,    13,    12,    35,    84,    36,    37,    -1,    -1,    80,
      92,    -1,    92,    44,    78,    -1,    92,    -1,    81,    80,
      92,    37,    -1,    41,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    12,    -1,    83,    -1,    82,    44,    83,
      -1,    12,    -1,    12,    41,    92,    -1,    12,    27,    92,
      -1,    12,    28,    92,    -1,    12,    29,    92,    -1,    12,
      30,    92,    -1,    -1,    13,    85,    -1,    -1,    44,    13,
      85,    -1,    -1,    13,    12,    87,    -1,     1,    86,    -1,
      -1,    44,    13,    12,    87,    -1,    -1,    90,    89,    -1,
      44,    90,    89,    -1,    -1,    12,    -1,    16,    -1,     8,
      -1,     9,    -1,    10,    -1,    11,    -1,    91,    20,    91,
      -1,    91,    18,    91,    -1,    91,    19,    91,    -1,    91,
      23,    91,    -1,    91,    21,    91,    -1,    91,    22,    91,
      -1,    12,    -1,    16,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,    17,    -1,    12,    -1,    16,    -1,    92,
      45,    92,    -1,    92,    46,    92,    -1,    92,    47,    92,
      -1,    92,    48,    92,    -1,    92,    20,    92,    -1,    92,
      18,    92,    -1,    92,    19,    92,    -1,    92,    23,    92,
      -1,    92,    21,    92,    -1,    92,    22,    92,    -1,     8,
      -1,     9,    -1,    10,    -1,    11,    -1,    92,    49,    92,
      -1,    92,    50,    92,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    93,    94,    95,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     115,   116,   120,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   141,   144,   150,
     151,   152,   153,   156,   157,   160,   164,   165,   168,   169,
     173,   173,   177,   178,   181,   185,   189,   190,   191,   194,
     197,   198,   199,   200,   203,   204,   205,   206,   209,   216,
     217,   218,   219,   226,   229,   234,   235,   240,   241,   244,
     248,   249,   250,   251,   252,   257,   261,   262,   265,   266,
     267,   268,   269,   270,   274,   275,   279,   280,   285,   286,
     287,   290,   291,   297,   298,   302,   303,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   321,
     322,   323,   324,   325,   326,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350
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
  "MENOS_MENOS", "ERROR_LEXICO", "'\\n'", "'('", "')'", "';'", "'{'",
  "'}'", "':'", "'='", "'['", "']'", "','", "'+'", "'-'", "'>'", "'<'",
  "'*'", "'/'", "$accept", "input", "line", "saltoOpcional",
  "invocacionFuncion", "listadoDeSentencias", "sentenciaDoWhile",
  "sentenciaFor", "sentenciaDecOAsig", "puntoYComa", "incrementoParaFor",
  "incrementoParaForAuxiliar", "incrementoDecremento", "sentenciaIfElse",
  "$@1", "sentenciaElse", "sentenciaWhile", "sentenciaSwitch",
  "sentenciaCase", "sentenciaReturn", "listadoDeSentenciasDeDeclaracion",
  "listadoDeSentenciasDeAsignacion", "sentenciaDeclaracionParaFor",
  "sentenciaDeclaracion", "desarrolloFuncion", "prototipoFuncion",
  "opcional1", "auxi", "sentenciaAsignacion",
  "sentenciaAsignacionAuxiliar", "parametro", "listaIdentificadores",
  "identificadorA", "listaParametrosPrototipo", "auxiliarM",
  "listaParametrosFuncion", "auxiliarN", "listaParametrosInvocacion",
  "listaParametrosInvocacionAuxiliar", "noTerminal", "noTerminalFinal",
  "expC", 0
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
     285,   286,   287,   288,    10,    40,    41,    59,   123,   125,
      58,    61,    91,    93,    44,    43,    45,    62,    60,    42,
      47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    58,    59,
      59,    59,    59,    60,    60,    61,    62,    62,    63,    63,
      65,    64,    66,    66,    67,    68,    69,    69,    69,    70,
      71,    71,    71,    71,    72,    72,    72,    72,    73,    74,
      74,    74,    74,    75,    76,    77,    77,    78,    78,    79,
      80,    80,    80,    80,    80,    81,    82,    82,    83,    83,
      83,    83,    83,    83,    84,    84,    85,    85,    86,    86,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       0,     2,     5,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    10,    11,     1,
       2,     1,     1,     1,     1,     2,     1,     1,     3,     3,
       0,    10,     0,     5,     8,     8,     0,     6,     4,     3,
       0,     1,     4,     2,     0,     1,     4,     2,     5,     4,
       3,     6,    10,     8,     6,     0,     2,     3,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     3,     3,     3,     0,     2,     0,     3,     0,     3,
       2,     0,     4,     0,     2,     3,     0,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     4,     0,     0,     1,     0,     0,     0,     0,
      85,     0,    20,     0,    19,     6,     3,    20,    20,    20,
      20,    20,    20,    20,    20,    20,    61,    20,    20,    20,
       0,    85,     0,    63,    67,    65,     0,     0,     0,     0,
       0,   103,    75,     0,    86,    20,     0,     0,     8,    14,
      13,    17,    15,    12,    11,     7,    18,    20,    10,     9,
      20,    16,    81,    82,    83,    84,    80,     0,    75,    42,
      85,     0,     0,    39,    41,   138,   139,   140,   141,   126,
     127,   125,     0,     0,    48,    49,   121,   122,   123,   124,
     119,   120,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,     0,    21,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,     0,     0,    20,     0,
       0,   104,     0,     0,     0,     0,     0,     0,    90,    91,
      92,    93,     0,    96,     0,     0,    89,     0,    69,    76,
      88,    87,     0,     0,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,    62,
       0,    66,    79,     0,    44,    43,     0,   133,   134,   132,
     136,   137,   135,     0,   128,   129,   130,   131,   142,   143,
       0,    22,   106,   121,   122,   123,   124,   119,   120,   114,
     115,   113,   117,   118,   116,     0,   100,   101,     0,    95,
       0,     0,     0,     0,     0,     0,     0,     0,    35,     0,
       0,     0,    36,    33,     0,    25,    26,    34,    28,    27,
      24,    30,    31,    32,    29,     0,     0,     0,     0,     0,
      56,   105,     0,    99,    96,    74,     0,    71,     0,    59,
       0,     0,    68,    46,    47,    45,    20,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,    50,     0,     0,
      55,   101,    73,     0,    78,     0,    54,     0,    52,     0,
       0,   102,     0,     0,     0,     0,    20,    51,     0,    58,
      72,    77,    37,    38,     0,     0,     0,    57,     0,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    16,    46,   155,   232,   157,   158,    72,   176,
     238,   255,   159,   160,   278,   287,   161,   162,   259,   163,
     164,   165,    73,    26,    27,    28,   102,   273,   166,   103,
      30,    43,    44,   144,   209,   145,   243,    92,   131,    93,
      94,   138
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -87
static const yytype_int16 yypact[] =
{
     351,   351,   -87,   367,   390,   -87,   406,   -18,    19,    32,
      71,    22,    12,    34,   -87,   -87,   -87,    12,    12,    12,
      12,    12,    12,    12,    12,    12,    46,    12,    12,    75,
     170,   -87,    39,   -87,   -87,    73,    36,   235,   235,    92,
      96,   224,   113,    63,   -87,    12,    -6,   235,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,    12,   -87,   -87,
      12,   -87,   -87,   -87,   -87,   -87,   -87,   235,   117,   -87,
     100,   127,   235,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   428,   447,   -87,   -87,    -5,     8,    11,    48,
      49,    61,    72,   105,   437,   235,   235,   235,   235,    14,
     235,   235,   115,   235,   -87,   144,   -87,   323,   466,   216,
     264,   485,   -87,   133,    41,   235,   235,   235,   235,   235,
     235,    12,   235,   235,   235,   235,   235,   235,    12,   140,
     224,   -87,   614,   614,   614,   614,   614,   614,   598,   598,
     598,   598,    17,    -3,   149,   151,   598,   505,   -87,   598,
     177,   -87,   308,   235,   308,    12,   130,   308,   308,   308,
     308,   308,   308,   308,   308,   308,   279,    12,   216,   -87,
     264,   -87,   -87,   235,   -87,   -87,   180,   598,   598,   598,
     598,   598,   598,   150,   598,   598,   598,   598,   598,   598,
     158,   -87,   105,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   189,   -87,   145,   196,   -87,
     165,   183,    -8,   235,   235,   235,   235,   235,   -87,   308,
     308,   519,   -87,   -87,   209,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   187,   539,    26,   190,   323,
     203,   -87,   225,   -87,   193,   -87,   323,   -87,   210,   -87,
     218,   323,   -87,   -87,   -87,   -87,    12,   215,   235,    -1,
     245,   -87,   219,   235,   235,   220,   222,   -87,   552,   223,
     -87,   145,   -87,   227,   559,   592,   -87,   323,   267,   429,
     169,   -87,   236,   235,   237,   248,    12,   -87,   250,   -87,
     -87,   -87,   -87,   -87,   246,   251,   323,   -87,   256,   -87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   295,   -87,   -17,    78,   -86,   124,   128,   -87,   -87,
     -87,   -87,   132,   160,   -87,   -87,   163,   176,   -87,   -87,
      10,    16,   -87,   -87,   -87,   -87,   -87,    18,    20,   269,
     -87,   -87,   195,   -87,    58,   164,    37,   -87,   118,   198,
     499,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -113
static const yytype_int16 yytable[] =
{
      48,    49,    50,    51,    52,    53,    54,    55,    56,   207,
      58,    59,    61,    24,    24,   142,    33,    36,   142,    25,
      25,   156,    34,    29,    29,   269,    35,   143,   106,   247,
     205,  -109,   107,   248,    42,    82,    83,    69,   270,  -109,
     109,   208,   174,   110,  -110,   108,    45,  -111,    70,    71,
     -94,    68,  -110,   -98,    37,  -111,    74,   253,   254,   115,
     116,   117,   118,   119,   120,   111,   218,    38,   222,    47,
     114,   225,   226,   227,   228,   229,   230,   231,   175,   233,
     234,    17,    17,    57,  -112,  -107,   122,   123,   124,   125,
     126,   127,  -112,  -107,   139,   140,   141,  -108,   146,   147,
     104,   149,    39,    40,   183,  -108,    41,   105,   129,    45,
      60,   190,    60,   177,   178,   179,   180,   181,   182,   169,
     184,   185,   186,   187,   188,   189,   171,    18,    18,    84,
      35,    19,    19,    85,   233,    20,    20,   112,   223,   113,
      95,    96,    97,    98,    95,    96,    97,    98,    99,   130,
     235,   221,   148,   257,   100,   101,   150,   -88,   100,   101,
     262,   -88,   219,    21,    21,   265,    22,    22,   220,   224,
     152,   236,     7,     8,   173,   153,     9,   191,    33,    23,
      23,    10,    32,    12,    13,   210,    34,   211,   239,   242,
      35,   285,   237,   288,   289,   -23,   240,    62,    63,    64,
      65,   207,   245,   154,   213,   214,   215,   216,   -23,   244,
     298,    66,   139,   140,   141,   146,   -60,   168,   217,   -60,
     -60,   246,   -60,   -60,   250,   251,   256,   258,   -60,    32,
     -60,   -60,    86,    87,    88,    89,    90,   208,   260,   266,
      91,   -60,   -60,    75,    76,    77,    78,    79,   263,   -60,
     -60,    80,    81,   264,   267,   -60,   268,   271,   272,   276,
     277,   274,   275,   280,   -64,   170,   282,   -64,   -64,   294,
     -64,   -64,   286,   290,   292,   295,    31,   -64,   -64,   -64,
     152,   274,     7,     8,   296,   153,     9,   293,   297,   -64,
     -64,    10,    32,    12,    13,   299,     4,   -64,   -64,    67,
     151,   291,   261,   -64,   -23,   -23,   206,     0,   281,   152,
     241,     7,     8,   154,   153,     9,    60,     0,   -23,     0,
      10,    32,    12,    13,   152,     0,     7,     8,   192,   153,
       9,     0,     0,   -23,   -23,    10,    32,    12,    13,     0,
       0,     0,   154,     0,     0,     0,     0,   -23,     0,     0,
       0,    -2,     1,     0,    -2,    -2,     0,   154,    -2,     0,
       0,     0,   -23,    -2,    -2,    -2,    -2,     5,     6,     0,
       7,     8,     0,     0,     9,     0,     0,     0,     0,    10,
      11,    12,    13,     0,     2,    -2,     0,     0,     0,     0,
      -5,     6,     0,     7,     8,     0,     0,     9,     0,     0,
      14,    15,    10,    11,    12,    13,   -60,     6,     0,   -60,
     -60,     0,     0,   -60,     0,     0,     0,     0,    31,    32,
     -60,   -60,     0,    14,    15,     0,     0,     0,     0,     0,
     152,     0,     7,     8,     0,   153,     9,     0,     0,   -60,
     -60,    10,    32,    12,    13,     0,   115,   116,   117,   118,
     119,   120,     0,     0,   -23,   132,   133,   134,   135,   136,
     137,     0,     0,   154,   121,   115,   116,   117,   118,   119,
     120,     0,     0,   122,   123,   124,   125,   126,   127,     0,
       0,     0,     0,   128,   115,   116,   117,   118,   119,   120,
       0,     0,   122,   123,   124,   125,   126,   127,     0,     0,
       0,     0,   167,   115,   116,   117,   118,   119,   120,     0,
       0,   122,   123,   124,   125,   126,   127,     0,     0,     0,
       0,     0,   172,   115,   116,   117,   118,   119,   120,     0,
     122,   123,   124,   125,   126,   127,     0,   115,   116,   117,
     118,   119,   120,     0,     0,     0,     0,     0,   212,     0,
     122,   123,   124,   125,   126,   127,   249,   115,   116,   117,
     118,   119,   120,     0,   122,   123,   124,   125,   126,   127,
     115,   116,   117,   118,   119,   120,   252,   115,   116,   117,
     118,   119,   120,     0,   122,   123,   124,   125,   126,   127,
       0,     0,   279,     0,     0,     0,     0,   122,   123,   124,
     125,   126,   127,   283,   122,   123,   124,   125,   126,   127,
     115,   116,   117,   118,   119,   120,   115,   116,   117,   118,
     119,   120,   193,   194,   195,   196,   197,     0,   284,     0,
     198,   199,   200,   201,   202,   203,   204,   122,   123,   124,
     125,   126,   127,   122,   123,   124,   125,   126,   127
};

static const yytype_int16 yycheck[] =
{
      17,    18,    19,    20,    21,    22,    23,    24,    25,    12,
      27,    28,    29,     3,     4,     1,     6,    35,     1,     3,
       4,   107,     6,     3,     4,    26,     6,    13,    45,    37,
      13,    36,    38,    41,    12,    37,    38,     1,    39,    44,
      57,    44,     1,    60,    36,    47,    34,    36,    12,    13,
      36,    12,    44,    36,    35,    44,    36,    31,    32,    18,
      19,    20,    21,    22,    23,    67,   152,    35,   154,    35,
      72,   157,   158,   159,   160,   161,   162,   163,    37,   165,
     166,     3,     4,    37,    36,    36,    45,    46,    47,    48,
      49,    50,    44,    44,    96,    97,    98,    36,   100,   101,
      37,   103,    31,    32,   121,    44,    35,    44,    36,    34,
      37,   128,    37,   115,   116,   117,   118,   119,   120,   109,
     122,   123,   124,   125,   126,   127,   110,     3,     4,    37,
     110,     3,     4,    37,   220,     3,     4,    37,   155,    12,
      27,    28,    29,    30,    27,    28,    29,    30,    35,    44,
     167,   153,    37,   239,    41,    42,    12,    44,    41,    42,
     246,    44,   152,     3,     4,   251,     3,     4,   152,    39,
       1,   173,     3,     4,    41,     6,     7,    37,   168,     3,
       4,    12,    13,    14,    15,    36,   170,    36,    38,    44,
     170,   277,    12,   279,   280,    26,    38,    27,    28,    29,
      30,    12,    37,    34,    27,    28,    29,    30,    39,    13,
     296,    41,   214,   215,   216,   217,     0,     1,    41,     3,
       4,    38,     6,     7,    15,    38,    36,    24,    12,    13,
      14,    15,     8,     9,    10,    11,    12,    44,    13,   256,
      16,    25,    26,     8,     9,    10,    11,    12,    38,    33,
      34,    16,    17,    35,    39,    39,   258,    12,    39,    39,
      38,   263,   264,    40,     0,     1,    39,     3,     4,   286,
       6,     7,     5,    37,    37,    25,    12,    13,    14,    15,
       1,   283,     3,     4,    38,     6,     7,    39,    37,    25,
      26,    12,    13,    14,    15,    39,     1,    33,    34,    30,
     105,   283,   244,    39,    25,    26,   142,    -1,   271,     1,
     192,     3,     4,    34,     6,     7,    37,    -1,    39,    -1,
      12,    13,    14,    15,     1,    -1,     3,     4,   130,     6,
       7,    -1,    -1,    25,    26,    12,    13,    14,    15,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,     0,     1,    -1,     3,     4,    -1,    34,     7,    -1,
      -1,    -1,    39,    12,    13,    14,    15,     0,     1,    -1,
       3,     4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,
      13,    14,    15,    -1,    33,    34,    -1,    -1,    -1,    -1,
       0,     1,    -1,     3,     4,    -1,    -1,     7,    -1,    -1,
      33,    34,    12,    13,    14,    15,     0,     1,    -1,     3,
       4,    -1,    -1,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    -1,     6,     7,    -1,    -1,    33,
      34,    12,    13,    14,    15,    -1,    18,    19,    20,    21,
      22,    23,    -1,    -1,    25,    18,    19,    20,    21,    22,
      23,    -1,    -1,    34,    36,    18,    19,    20,    21,    22,
      23,    -1,    -1,    45,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    36,    18,    19,    20,    21,    22,    23,
      -1,    -1,    45,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    36,    18,    19,    20,    21,    22,    23,    -1,
      -1,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    37,    18,    19,    20,    21,    22,    23,    -1,
      45,    46,    47,    48,    49,    50,    -1,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      45,    46,    47,    48,    49,    50,    37,    18,    19,    20,
      21,    22,    23,    -1,    45,    46,    47,    48,    49,    50,
      18,    19,    20,    21,    22,    23,    37,    18,    19,    20,
      21,    22,    23,    -1,    45,    46,    47,    48,    49,    50,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    44,    45,    46,    47,    48,    49,    50,
      18,    19,    20,    21,    22,    23,    18,    19,    20,    21,
      22,    23,     8,     9,    10,    11,    12,    -1,    36,    -1,
      16,   132,   133,   134,   135,   136,   137,    45,    46,    47,
      48,    49,    50,    45,    46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    33,    52,    52,     0,     1,     3,     4,     7,
      12,    13,    14,    15,    33,    34,    53,    55,    57,    58,
      63,    64,    67,    68,    71,    72,    74,    75,    76,    79,
      81,    12,    13,    71,    72,    79,    35,    35,    35,    31,
      32,    35,    12,    82,    83,    34,    54,    35,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    37,    54,    54,
      37,    54,    27,    28,    29,    30,    41,    80,    12,     1,
      12,    13,    59,    73,    79,     8,     9,    10,    11,    12,
      16,    17,    92,    92,    37,    37,     8,     9,    10,    11,
      12,    16,    88,    90,    91,    27,    28,    29,    30,    35,
      41,    42,    77,    80,    37,    44,    54,    38,    92,    54,
      54,    92,    37,    12,    92,    18,    19,    20,    21,    22,
      23,    36,    45,    46,    47,    48,    49,    50,    36,    36,
      44,    89,    18,    19,    20,    21,    22,    23,    92,    92,
      92,    92,     1,    13,    84,    86,    92,    92,    37,    92,
      12,    83,     1,     6,    34,    55,    56,    57,    58,    63,
      64,    67,    68,    70,    71,    72,    79,    36,     1,    71,
       1,    72,    37,    41,     1,    37,    60,    92,    92,    92,
      92,    92,    92,    54,    92,    92,    92,    92,    92,    92,
      54,    37,    90,     8,     9,    10,    11,    12,    16,    91,
      91,    91,    91,    91,    91,    13,    86,    12,    44,    85,
      36,    36,    43,    27,    28,    29,    30,    41,    56,    71,
      72,    92,    56,    54,    39,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    54,    92,    12,    61,    38,
      38,    89,    44,    87,    13,    37,    38,    37,    41,    37,
      15,    38,    37,    31,    32,    62,    36,    56,    24,    69,
      13,    85,    56,    38,    35,    56,    54,    39,    92,    26,
      39,    12,    39,    78,    92,    92,    39,    38,    65,    40,
      40,    87,    39,    44,    36,    56,     5,    66,    56,    56,
      37,    78,    37,    39,    54,    25,    38,    37,    56,    39
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
        case 4:

/* Line 1455 of yacc.c  */
#line 94 "../src/integrador.y"
    { agregarErrorLexico((yyvsp[(1) - (1)].s.cadena));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 95 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 98 "../src/integrador.y"
    {my_line++;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 111 "../src/integrador.y"
    { agregarErrorLexico((yyvsp[(1) - (1)].s.cadena));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 116 "../src/integrador.y"
    {my_line++;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 120 "../src/integrador.y"
    {if(verificaFuncion((yyvsp[(1) - (5)].s.cadena))){printf( "Se incovoco correcamente a la funcion %s \n",(yyvsp[(1) - (5)].s.cadena));};}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 138 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 139 "../src/integrador.y"
    {my_line++;;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 141 "../src/integrador.y"
    {printf( "Se ha declarado una sentencia do-while \n");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 144 "../src/integrador.y"
    {printf("Se ha declarado una sentencia for\n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 153 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 157 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 160 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (2)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (2)].s.cadena), "se intento incrementar/decrementar una variable no existente");}else{if(esNumerica((yyvsp[(1) - (2)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (2)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (2)].s.cadena), "se intento incrementar una varibale no operable");}};}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 168 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (3)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento incrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (3)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (3)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento incrementar una varibale no operable");}};}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 169 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (3)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento decrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (3)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (3)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento decrementar una varibale no operable");}};}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 173 "../src/integrador.y"
    {printf ("Se declaro un if \n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 178 "../src/integrador.y"
    {printf ("Se declaron un else \n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 181 "../src/integrador.y"
    {printf ("Se declaro un while \n");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 185 "../src/integrador.y"
    {printf ("Se declaro un switch \n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 190 "../src/integrador.y"
    {printf ("Se declaro un case \n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 191 "../src/integrador.y"
    {printf ("Se declaro el default \n");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 194 "../src/integrador.y"
    {printf ("Se declaro un return \n ");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 200 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 206 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 209 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (5)].s.cadena), (yyvsp[(1) - (5)].s.tipo));;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 216 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (4)].s.cadena), (yyvsp[(1) - (4)].s.tipo));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 218 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (6)].s.cadena), (yyvsp[(1) - (6)].s.tipo));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 219 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (10)].s.cadena), (yyvsp[(1) - (10)].s.tipo));;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 226 "../src/integrador.y"
    {agregarFuncion((yyvsp[(1) - (8)].s.tipo),(yyvsp[(2) - (8)].s.cadena),1);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 229 "../src/integrador.y"
    {agregarFuncion((yyvsp[(1) - (6)].s.tipo),(yyvsp[(2) - (6)].s.cadena),0);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 244 "../src/integrador.y"
    {if(!flag()){printf("se realizo una asignacion\n");}else{bajarFlag();};}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 257 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (1)].s.cadena))!=NULL){}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (1)].s.cadena),"debido a que no fue declarado");levantarFlag();};}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 265 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (1)].s.cadena),mostrarUltimoDato());;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 266 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 267 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 268 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 269 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 270 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 275 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (2)].s.tipo));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 280 "../src/integrador.y"
    {agregarParametro((yyvsp[(2) - (3)].s.tipo));;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 286 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (3)].s.tipo));agregarIdentificador((yyvsp[(2) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 287 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 291 "../src/integrador.y"
    {agregarParametro((yyvsp[(2) - (4)].s.tipo));agregarIdentificador((yyvsp[(3) - (4)].s.cadena),(yyvsp[(2) - (4)].s.tipo));}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 306 "../src/integrador.y"
    {int tipo=buscarTipo((yyvsp[(1) - (1)].s.cadena));if(tipo>=0){agregarParametro(tipo);}/* else{} */;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 307 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 308 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 309 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 310 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 311 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 312 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 313 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 314 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 315 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 316 "../src/integrador.y"
    {agregarParametro(0);;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 317 "../src/integrador.y"
    {agregarParametro(0);;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 321 "../src/integrador.y"
    {int tipo=buscarTipo((yyvsp[(1) - (1)].s.cadena));if(tipo>=0){agregarParametro(tipo);}/* else{} */;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 322 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 323 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 324 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 325 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 326 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 332 "../src/integrador.y"
    {(yyvsp[(1) - (1)].s.tipo)=4;;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 333 "../src/integrador.y"
    {(yyval.s.tipo)=buscarTipo((yyvsp[(1) - (1)].s.cadena));;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 334 "../src/integrador.y"
    {(yyval.s.tipo)=0;;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 335 "../src/integrador.y"
    {(yyvsp[(1) - (3)].s.tipo)=calcularTipo((yyvsp[(1) - (3)].s.cadena), (yyvsp[(1) - (3)].s.tipo)); (yyvsp[(3) - (3)].s.tipo)=calcularTipo((yyvsp[(3) - (3)].s.cadena), (yyvsp[(3) - (3)].s.tipo));if(sonOperables((yyvsp[(1) - (3)].s.tipo),(yyvsp[(3) - (3)].s.tipo))){printf ("Se escribio una expresion usando una suma \n");}else{agregarErrorDeTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(1) - (3)].s.tipo), '+' ,(yyvsp[(3) - (3)].s.cadena), (yyvsp[(3) - (3)].s.tipo));};}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 336 "../src/integrador.y"
    {printf ("Se escribio una expresion usando una resta \n");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 337 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 338 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 339 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de igualdad \n");;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 340 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 341 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 342 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de distinto \n");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 343 "../src/integrador.y"
    {printf ("Se escribio una expresion con la operacion logica and \n");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 344 "../src/integrador.y"
    {printf ("Se escribio una expresion con la operacion logica or \n");;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 345 "../src/integrador.y"
    {(yyval.s.tipo)=1;;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 346 "../src/integrador.y"
    {(yyval.s.tipo)=1;;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 347 "../src/integrador.y"
    {(yyval.s.tipo)=1;;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 348 "../src/integrador.y"
    {(yyval.s.tipo)=2;;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 349 "../src/integrador.y"
    {printf ("Se escribio una expresion  \n");;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 350 "../src/integrador.y"
    {printf ("Se escribio una expresion  \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2281 "integrador.tab.c"
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
#line 356 "../src/integrador.y"


int main ()
{
	yyin=fopen("entrada.c","r");
	#ifdef BISON_DEBUG
        yydebug = 1;
	#endif
	yyparse();
	generarReporte();
	fclose(yyin);
	system("pause");	
	return 0;

}


