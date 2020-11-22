
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
		agregarErrorSintactico(s,my_line);
		//fprintf(stderr, "hay un error \n", s); 
	}



/* Line 189 of yacc.c  */
#line 100 "integrador.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   378

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNRULES -- Number of states.  */
#define YYNSTATES  287

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
      35,    36,    44,    46,    45,    47,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    37,
      49,    41,    48,     2,     2,     2,     2,     2,     2,     2,
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
       0,     0,     3,     4,     7,     9,    11,    14,    17,    20,
      23,    26,    29,    32,    35,    38,    41,    44,    47,    50,
      51,    54,    60,    61,    64,    67,    70,    73,    76,    79,
      82,    85,    88,    91,    94,   105,   117,   119,   122,   124,
     127,   129,   131,   135,   139,   140,   151,   154,   155,   161,
     170,   179,   180,   187,   192,   196,   197,   199,   203,   204,
     206,   210,   216,   221,   225,   232,   243,   248,   251,   262,
     269,   270,   273,   277,   279,   284,   286,   288,   290,   292,
     294,   296,   298,   302,   304,   308,   312,   316,   320,   324,
     325,   327,   331,   333,   334,   337,   342,   343,   346,   350,
     351,   353,   355,   357,   359,   361,   363,   367,   371,   375,
     379,   383,   387,   389,   391,   393,   395,   397,   399,   401,
     403,   405,   407,   411,   415,   419,   423,   427,   431,   435,
     439,   443,   447,   449,   451,   453,   455,   459
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    -1,    52,    53,    -1,    33,    -1,    34,
      -1,    70,    54,    -1,    55,    54,    -1,    75,    54,    -1,
      74,    54,    -1,    67,    54,    -1,    66,    54,    -1,    58,
      54,    -1,    57,    54,    -1,    63,    54,    -1,    78,    54,
      -1,    62,    54,    -1,    71,    54,    -1,     1,    54,    -1,
      -1,    34,    54,    -1,    12,    35,    85,    36,    37,    -1,
      -1,    67,    56,    -1,    57,    56,    -1,    58,    56,    -1,
      66,    56,    -1,    63,    56,    -1,    78,    56,    -1,    69,
      56,    -1,    70,    56,    -1,    55,    54,    -1,    62,    56,
      -1,    34,    56,    -1,    14,    54,    38,    56,    39,    15,
      35,    89,    36,    37,    -1,     3,    35,    59,    90,    37,
      60,    36,    54,    38,    56,    39,    -1,    72,    -1,    12,
      37,    -1,    78,    -1,    12,    61,    -1,    31,    -1,    32,
      -1,    12,    31,    37,    -1,    12,    32,    37,    -1,    -1,
       4,    35,    89,    36,    54,    38,    56,    39,    64,    65,
      -1,     1,    54,    -1,    -1,     5,    54,    38,    56,    39,
      -1,    15,    35,    89,    36,    54,    38,    56,    39,    -1,
       7,    35,    89,    36,    54,    38,    68,    39,    -1,    -1,
      24,    89,    40,    56,    25,    37,    -1,    68,    26,    40,
      56,    -1,     6,    89,    37,    -1,    -1,    73,    -1,    73,
      37,    70,    -1,    -1,    78,    -1,    78,    37,    71,    -1,
      13,    12,    41,    89,    37,    -1,    13,    12,    76,    37,
      -1,    13,    81,    37,    -1,    13,    12,    42,    90,    43,
      37,    -1,    13,    12,    42,    90,    43,    41,    38,    77,
      39,    37,    -1,    13,    44,    12,    37,    -1,     1,    54,
      -1,    13,    12,    35,    84,    36,    54,    38,    56,    39,
      37,    -1,    13,    12,    35,    83,    36,    37,    -1,    -1,
      79,    89,    -1,    90,    45,    77,    -1,    90,    -1,    80,
      79,    89,    37,    -1,    41,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,    12,    -1,    82,    -1,    81,    45,
      82,    -1,    12,    -1,    12,    41,    89,    -1,    12,    27,
      89,    -1,    12,    28,    89,    -1,    12,    29,    89,    -1,
      12,    30,    89,    -1,    -1,    13,    -1,    13,    45,    83,
      -1,    84,    -1,    -1,    13,    12,    -1,    13,    12,    45,
      84,    -1,    -1,    87,    86,    -1,    45,    87,    86,    -1,
      -1,    12,    -1,    16,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,    88,    20,    88,    -1,    88,    18,    88,
      -1,    88,    19,    88,    -1,    88,    23,    88,    -1,    88,
      21,    88,    -1,    88,    22,    88,    -1,    12,    -1,    16,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    17,
      -1,    90,    -1,    12,    -1,    16,    -1,    90,    46,    90,
      -1,    90,    47,    90,    -1,    90,    48,    90,    -1,    90,
      49,    90,    -1,    90,    20,    90,    -1,    90,    18,    90,
      -1,    90,    19,    90,    -1,    90,    23,    90,    -1,    90,
      21,    90,    -1,    90,    22,    90,    -1,     8,    -1,     9,
      -1,    10,    -1,    11,    -1,    90,    44,    90,    -1,    90,
      50,    90,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    89,    90,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   110,
     111,   115,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   133,   136,   141,   142,   143,   148,
     152,   153,   156,   157,   161,   161,   162,   165,   166,   169,
     173,   177,   178,   179,   182,   185,   186,   187,   190,   191,
     192,   196,   203,   204,   205,   206,   207,   208,   212,   215,
     218,   219,   224,   225,   228,   232,   233,   234,   235,   236,
     241,   245,   246,   249,   250,   251,   252,   253,   254,   258,
     259,   260,   261,   266,   267,   268,   272,   273,   276,   277,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   295,   296,   297,   298,   299,   300,   303,   304,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326
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
  "'}'", "':'", "'='", "'['", "']'", "'*'", "','", "'+'", "'-'", "'>'",
  "'<'", "'/'", "$accept", "input", "line", "saltoOpcional",
  "invocacionFuncion", "listadoDeSentencias", "sentenciaDoWhile",
  "sentenciaFor", "sentenciaDecOAsig", "incrementoParaFor",
  "incrementoParaForAuxiliar", "incrementoDecremento", "sentenciaIfElse",
  "$@1", "sentenciaElse", "sentenciaWhile", "sentenciaSwitch",
  "sentenciaCase", "sentenciaReturn", "listadoDeSentenciasDeDeclaracion",
  "listadoDeSentenciasDeAsignacion", "sentenciaDeclaracionParaFor",
  "sentenciaDeclaracion", "desarrolloFuncion", "prototipoFuncion",
  "opcional1", "auxi", "sentenciaAsignacion",
  "sentenciaAsignacionAuxiliar", "parametro", "listaIdentificadores",
  "identificadorA", "listaParametrosPrototipo", "listaParametrosFuncion",
  "listaParametrosInvocacion", "listaParametrosInvocacionAuxiliar",
  "noTerminal", "noTerminalFinal", "exp", "expC", 0
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
      58,    61,    91,    93,    42,    44,    43,    45,    62,    60,
      47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      54,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    57,    58,    59,    59,    59,    60,
      61,    61,    62,    62,    64,    63,    63,    65,    65,    66,
      67,    68,    68,    68,    69,    70,    70,    70,    71,    71,
      71,    72,    73,    73,    73,    73,    73,    73,    74,    75,
      76,    76,    77,    77,    78,    79,    79,    79,    79,    79,
      80,    81,    81,    82,    82,    82,    82,    82,    82,    83,
      83,    83,    83,    84,    84,    84,    85,    85,    86,    86,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       2,     5,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    10,    11,     1,     2,     1,     2,
       1,     1,     3,     3,     0,    10,     2,     0,     5,     8,
       8,     0,     6,     4,     3,     0,     1,     3,     0,     1,
       3,     5,     4,     3,     6,    10,     4,     2,    10,     6,
       0,     2,     3,     1,     4,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     3,     3,     3,     3,     0,
       1,     3,     1,     0,     2,     4,     0,     2,     3,     0,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     4,     0,     1,    19,     0,     0,     0,    80,     0,
      19,     0,     5,     3,    19,    19,    19,    19,    19,    19,
      19,    19,    19,    56,    19,    19,    19,     0,    19,    18,
       0,     0,     0,     0,     0,    96,    70,     0,     0,    81,
       0,     0,     7,    13,    12,    16,    14,    11,    10,     6,
      17,     0,     9,     8,    58,    15,    76,    77,    78,    79,
      75,     0,    20,    80,     0,     0,    36,    38,   132,   133,
     134,   135,   120,   121,   118,     0,   119,     0,    42,    43,
     114,   115,   116,   117,   112,   113,     0,    99,     0,     0,
       0,     0,     0,    89,     0,     0,     0,     0,     0,    63,
       0,     0,     0,    19,     0,    57,    80,    60,    59,     0,
      37,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,     0,    97,
       0,     0,     0,     0,     0,     0,    85,    86,    87,    88,
      90,     0,     0,    84,     0,    62,    71,    66,    83,    82,
      19,     0,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,    67,    70,    74,     0,     0,
       0,   127,   128,   126,   130,   131,   129,   136,   122,   123,
     124,   125,   137,     0,    21,    99,   114,   115,   116,   117,
     112,   113,   107,   108,   106,   110,   111,   109,    94,    89,
       0,    19,     0,     0,     0,     0,     0,     0,    46,     0,
      33,    31,     0,    24,    25,    32,    27,    26,    23,    29,
      30,    28,     0,     0,     0,     0,     0,    51,    98,    93,
      91,    92,    69,     0,    64,     0,    54,     0,     0,    61,
      40,    41,    39,    19,     0,     0,     0,     0,    95,     0,
       0,     0,     0,     0,    44,     0,     0,    50,     0,     0,
      73,     0,    49,     0,    47,     0,     0,     0,     0,     0,
       0,     0,    19,    45,     0,    53,    68,    65,    72,    34,
      35,     0,     0,     0,    52,     0,    48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    13,    29,   153,   154,   155,   156,    65,   225,
     242,   157,   158,   264,   273,   159,   160,   246,   161,   162,
      22,    66,    23,    24,    25,    96,   259,   163,    97,    27,
      38,    39,   141,   142,    86,   129,    87,    88,   136,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -181
static const yytype_int16 yypact[] =
{
     -30,  -181,   171,  -181,    -7,    -4,    23,    49,    30,    12,
      -7,    51,  -181,  -181,    -7,    -7,    -7,    -7,    -7,    -7,
      -7,    -7,    -7,    -2,    -7,    -7,    26,    67,    -7,    11,
     121,   326,   326,    53,    69,   304,   276,    80,   -17,  -181,
      41,   326,  -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,    98,  -181,  -181,    97,  -181,  -181,  -181,  -181,  -181,
    -181,   326,  -181,    77,   110,   341,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,    89,   279,    95,  -181,  -181,
       9,    14,    19,    42,    44,    55,   102,    94,   349,   326,
     326,   326,   326,   128,   326,   341,   108,   326,   119,  -181,
     150,   114,   129,    -7,    13,  -181,  -181,  -181,   133,   136,
    -181,   135,   226,    -7,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,    -7,   140,   304,  -181,
     350,   350,   350,   350,   350,   350,  -181,  -181,  -181,  -181,
       1,   145,   146,  -181,   234,  -181,  -181,  -181,   122,  -181,
      -7,   326,   154,    -7,   148,   154,   154,   154,   154,   154,
     154,   154,   154,   154,    -7,  -181,   303,  -181,   326,   177,
     152,   279,   279,   279,   279,   279,   279,   279,   279,   279,
     279,   279,   279,   156,  -181,    94,  -181,  -181,  -181,  -181,
    -181,  -181,  -181,  -181,  -181,  -181,  -181,  -181,   147,   128,
     162,    -7,   -11,   326,   326,   326,   326,   326,    11,   163,
    -181,  -181,   193,  -181,  -181,  -181,  -181,  -181,  -181,  -181,
    -181,  -181,   172,   174,   104,   173,   114,   192,  -181,   205,
    -181,  -181,  -181,   186,  -181,   187,  -181,   197,   114,  -181,
    -181,  -181,  -181,    -7,   188,   326,    -5,   223,  -181,   114,
     341,   326,   198,   202,  -181,   203,   211,  -181,   199,   219,
     246,   224,  -181,   114,   254,   216,   200,   242,   248,   341,
     249,   222,    -7,  -181,   262,  -181,  -181,  -181,  -181,  -181,
    -181,   233,   251,   114,  -181,   250,  -181
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -181,  -181,  -181,   -10,   305,  -119,   306,   307,  -181,  -181,
    -181,   308,   317,  -181,  -181,   320,   322,  -181,  -181,     0,
     285,  -181,  -181,  -181,  -181,  -181,    71,    -1,   314,  -181,
    -181,   247,   155,  -180,  -181,   161,   227,   243,    -9,   -48
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -106
static const yytype_int16 yytable[] =
{
      40,    26,    21,     1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   198,    52,    53,    55,   112,    62,   231,
      99,   256,    75,    77,    36,   166,   234,    28,   100,    67,
     235,    30,   102,   210,   257,    51,   213,   214,   215,   216,
     217,   218,   219,   220,   221,  -102,   199,   144,   -67,   248,
    -103,   105,   109,   108,  -102,  -104,    37,    37,    31,  -103,
      28,    33,    34,    54,  -104,    35,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,  -105,   101,
    -100,   137,   138,   139,    32,   143,    41,  -105,   146,  -100,
      78,  -101,    98,   165,    56,    57,    58,    59,   -55,   103,
    -101,   -55,   -55,   170,   -55,   -55,    79,   244,    60,   106,
     -55,   104,   -55,   -55,   110,   150,   183,     5,     6,   252,
     151,     7,   111,   -55,   -55,   113,     8,   104,    10,    11,
     258,   126,   -55,    63,    64,   240,   241,   -55,   127,   128,
     208,   140,   209,   211,   271,   145,   274,   275,   152,   203,
     204,   205,   206,   -22,   222,   150,   147,     5,     6,   223,
     151,     7,   148,   207,   285,   164,     8,   104,    10,    11,
      54,     3,     4,   167,     5,     6,   168,   184,     7,   -22,
     -22,   200,   201,     8,     9,    10,    11,   212,   152,   224,
     226,   233,   229,   -22,   227,   137,   138,   139,   143,   232,
     236,   150,   260,     5,     6,    12,   151,     7,   237,   243,
     238,   239,     8,   104,    10,    11,   245,   150,   247,     5,
       6,   260,   151,     7,   249,   250,   -22,   254,     8,   104,
      10,    11,   251,   253,   152,   198,   255,   262,   267,   -22,
     263,   -22,   261,   265,   114,   115,   116,   117,   118,   119,
     152,   266,   114,   115,   116,   117,   118,   119,   268,   272,
     270,   280,   281,   169,   114,   115,   116,   117,   118,   119,
     120,   283,   121,   122,   123,   124,   125,   202,   120,   276,
     121,   122,   123,   124,   125,   277,   279,   282,   284,   286,
     120,   269,   121,   122,   123,   124,   125,   114,   115,   116,
     117,   118,   119,    89,    90,    91,    92,    14,    15,    16,
      17,    93,    80,    81,    82,    83,    84,    94,    95,    18,
      85,   -83,    19,   120,    20,   121,   122,   123,   124,   125,
      89,    90,    91,    92,    68,    69,    70,    71,    72,   107,
     278,    61,    73,    74,    94,    95,   228,   149,   -83,    68,
      69,    70,    71,    72,   230,   185,     0,    73,   186,   187,
     188,   189,   190,     0,     0,     0,   191,   130,   131,   132,
     133,   134,   135,   192,   193,   194,   195,   196,   197
};

static const yytype_int16 yycheck[] =
{
      10,     2,     2,    33,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    12,    24,    25,    26,    65,    28,   199,
      37,    26,    31,    32,    12,    12,    37,    34,    45,    30,
      41,    35,    41,   152,    39,    37,   155,   156,   157,   158,
     159,   160,   161,   162,   163,    36,    45,    95,    37,   229,
      36,    51,    61,    54,    45,    36,    44,    44,    35,    45,
      34,    31,    32,    37,    45,    35,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,    36,    38,
      36,    90,    91,    92,    35,    94,    35,    45,    97,    45,
      37,    36,    12,   103,    27,    28,    29,    30,     0,     1,
      45,     3,     4,   113,     6,     7,    37,   226,    41,    12,
      12,    13,    14,    15,    37,     1,   126,     3,     4,   238,
       6,     7,    12,    25,    26,    36,    12,    13,    14,    15,
     249,    36,    34,    12,    13,    31,    32,    39,    36,    45,
     150,    13,   151,   153,   263,    37,   265,   266,    34,    27,
      28,    29,    30,    39,   164,     1,    37,     3,     4,   168,
       6,     7,    12,    41,   283,    36,    12,    13,    14,    15,
      37,     0,     1,    37,     3,     4,    41,    37,     7,    25,
      26,    36,    36,    12,    13,    14,    15,    39,    34,    12,
      38,   201,    45,    39,    38,   204,   205,   206,   207,    37,
      37,     1,   250,     3,     4,    34,     6,     7,    15,    36,
      38,    37,    12,    13,    14,    15,    24,     1,    13,     3,
       4,   269,     6,     7,    38,    38,    26,    39,    12,    13,
      14,    15,    35,   243,    34,    12,   245,    39,    39,    39,
      38,    25,   251,    40,    18,    19,    20,    21,    22,    23,
      34,    40,    18,    19,    20,    21,    22,    23,    39,     5,
      36,    39,   272,    37,    18,    19,    20,    21,    22,    23,
      44,    38,    46,    47,    48,    49,    50,    43,    44,    37,
      46,    47,    48,    49,    50,    37,    37,    25,    37,    39,
      44,    45,    46,    47,    48,    49,    50,    18,    19,    20,
      21,    22,    23,    27,    28,    29,    30,     2,     2,     2,
       2,    35,     8,     9,    10,    11,    12,    41,    42,     2,
      16,    45,     2,    44,     2,    46,    47,    48,    49,    50,
      27,    28,    29,    30,     8,     9,    10,    11,    12,    54,
     269,    27,    16,    17,    41,    42,   185,   100,    45,     8,
       9,    10,    11,    12,   199,   128,    -1,    16,     8,     9,
      10,    11,    12,    -1,    -1,    -1,    16,    18,    19,    20,
      21,    22,    23,   130,   131,   132,   133,   134,   135
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    52,     0,     1,     3,     4,     7,    12,    13,
      14,    15,    34,    53,    55,    57,    58,    62,    63,    66,
      67,    70,    71,    73,    74,    75,    78,    80,    34,    54,
      35,    35,    35,    31,    32,    35,    12,    44,    81,    82,
      54,    35,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    37,    54,    54,    37,    54,    27,    28,    29,    30,
      41,    79,    54,    12,    13,    59,    72,    78,     8,     9,
      10,    11,    12,    16,    17,    89,    90,    89,    37,    37,
       8,     9,    10,    11,    12,    16,    85,    87,    88,    27,
      28,    29,    30,    35,    41,    42,    76,    79,    12,    37,
      45,    38,    89,     1,    13,    70,    12,    71,    78,    89,
      37,    12,    90,    36,    18,    19,    20,    21,    22,    23,
      44,    46,    47,    48,    49,    50,    36,    36,    45,    86,
      18,    19,    20,    21,    22,    23,    89,    89,    89,    89,
      13,    83,    84,    89,    90,    37,    89,    37,    12,    82,
       1,     6,    34,    55,    56,    57,    58,    62,    63,    66,
      67,    69,    70,    78,    36,    54,    12,    37,    41,    37,
      54,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    54,    37,    87,     8,     9,    10,    11,
      12,    16,    88,    88,    88,    88,    88,    88,    12,    45,
      36,    36,    43,    27,    28,    29,    30,    41,    54,    89,
      56,    54,    39,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    54,    89,    12,    60,    38,    38,    86,    45,
      83,    84,    37,    54,    37,    41,    37,    15,    38,    37,
      31,    32,    61,    36,    56,    24,    68,    13,    84,    38,
      38,    35,    56,    54,    39,    89,    26,    39,    56,    77,
      90,    89,    39,    38,    64,    40,    40,    39,    39,    45,
      36,    56,     5,    65,    56,    56,    37,    37,    77,    37,
      39,    54,    25,    38,    37,    56,    39
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
#line 90 "../src/integrador.y"
    { agregarErrorLexico((yyvsp[(1) - (1)].s.cadena));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 93 "../src/integrador.y"
    {my_line++;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 106 "../src/integrador.y"
    { yyerrok;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 111 "../src/integrador.y"
    {my_line++;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 115 "../src/integrador.y"
    {if(verificaFuncion((yyvsp[(1) - (5)].s.cadena))){printf( "Se incovoco correcamente a la funcion %s \n",(yyvsp[(1) - (5)].s.cadena));};}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 131 "../src/integrador.y"
    {my_line++;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 133 "../src/integrador.y"
    {printf( "Se ha declarado una sentencia do-while \n");;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 136 "../src/integrador.y"
    {printf("Se ha declarado una sentencia for\n");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 148 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (2)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (2)].s.cadena), "se intento incrementar/decrementar una variable no existente");}else{if(esNumerica((yyvsp[(1) - (2)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (2)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (2)].s.cadena), "se intento incrementar una varibale no operable");}};}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 156 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (3)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento incrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (3)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (3)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento incrementar una varibale no operable");}};}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 157 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (3)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento decrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (3)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (3)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento decrementar una varibale no operable");}};}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 161 "../src/integrador.y"
    {printf ("Se declaro un if \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 162 "../src/integrador.y"
    { yyerrok; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 166 "../src/integrador.y"
    {printf ("Se declaron un else \n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 169 "../src/integrador.y"
    {printf ("Se declaro un while \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 173 "../src/integrador.y"
    {printf ("Se declaro un switch \n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 178 "../src/integrador.y"
    {printf ("Se declaro un case \n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 179 "../src/integrador.y"
    {printf ("Se declaro el default \n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 182 "../src/integrador.y"
    {printf ("Se declaro un return \n ");;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 196 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (5)].s.cadena), (yyvsp[(1) - (5)].s.tipo));;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 203 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (4)].s.cadena), (yyvsp[(1) - (4)].s.tipo));;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 205 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (6)].s.cadena), (yyvsp[(1) - (6)].s.tipo));;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 206 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (10)].s.cadena), (yyvsp[(1) - (10)].s.tipo));;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 207 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (4)].s.cadena), (yyvsp[(1) - (4)].s.tipo));;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 208 "../src/integrador.y"
    {yyerrok; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 212 "../src/integrador.y"
    {agregarFuncion((yyvsp[(1) - (10)].s.tipo),(yyvsp[(2) - (10)].s.cadena),1);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 215 "../src/integrador.y"
    {agregarFuncion((yyvsp[(1) - (6)].s.tipo),(yyvsp[(2) - (6)].s.cadena),0);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 228 "../src/integrador.y"
    {if(!flag()){printf("se realizo una asignacion");}else{bajarFlag();};}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 241 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (1)].s.cadena))!=NULL){}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (1)].s.cadena),"debido a que no fue declarado");levantarFlag();};}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 249 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (1)].s.cadena),mostrarUltimoDato());;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 250 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 251 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 252 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 253 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 254 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 259 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 260 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (3)].s.tipo));;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 267 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (2)].s.tipo));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 268 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (4)].s.tipo));;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 280 "../src/integrador.y"
    {int tipo=buscarTipo((yyvsp[(1) - (1)].s.cadena));if(tipo>=0){agregarParametro(tipo);}/* else{} */;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 281 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 282 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 283 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 284 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 285 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 286 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 287 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 288 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 289 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 290 "../src/integrador.y"
    {agregarParametro(0);;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 291 "../src/integrador.y"
    {agregarParametro(0);;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 295 "../src/integrador.y"
    {int tipo=buscarTipo((yyvsp[(1) - (1)].s.cadena));if(tipo>=0){agregarParametro(tipo);}/* else{} */;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 296 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 297 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 298 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 299 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 300 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 309 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (1)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (1)].s.cadena),"se intento incrementar una variable ");};}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 311 "../src/integrador.y"
    {int tipo1=calcularTipo((yyvsp[(1) - (3)].s.cadena), (yyvsp[(1) - (3)].s.tipo)); int tipo2=calcularTipo((yyvsp[(3) - (3)].s.cadena), (yyvsp[(3) - (3)].s.tipo)); if(sonOperablesODelMismoTipo(tipo1,tipo2)){printf ("Se escribio una expresion usando una suma \n");}else{agregarErrorDeTipos((yyvsp[(1) - (3)].s.cadena), tipo1, '+' ,(yyvsp[(3) - (3)].s.cadena), tipo2);};}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 312 "../src/integrador.y"
    {printf ("Se escribio una expresion usando una resta \n");;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 313 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 314 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 315 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de igualdad \n");;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 316 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 317 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 318 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de distinto \n");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 319 "../src/integrador.y"
    {printf ("Se escribio una expresion con la operacion logica and \n");;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 320 "../src/integrador.y"
    {printf ("Se escribio una expresion con la operacion logica or \n");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 325 "../src/integrador.y"
    {printf ("Se escribio una expresion  \n");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 326 "../src/integrador.y"
    {printf ("Se escribio una expresion  \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2146 "integrador.tab.c"
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
#line 332 "../src/integrador.y"


int main ()
{
	yyin=fopen("entrada.c","r");
	yyparse();
 	#ifdef BISON_DEBUG
        yydebug = 1;
	#endif

	generarReporte();
	fclose(yyin);
	system("pause");	
	return 0;

}


