
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   624

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  142
/* YYNRULES -- Number of states.  */
#define YYNSTATES  299

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
      51,    54,    60,    61,    64,    67,    70,    73,    76,    79,
      82,    85,    88,    91,    94,    97,   100,   111,   123,   125,
     128,   130,   132,   134,   136,   139,   141,   143,   147,   151,
     152,   163,   164,   170,   179,   188,   189,   196,   201,   205,
     206,   208,   213,   216,   217,   219,   224,   227,   233,   238,
     242,   249,   260,   269,   276,   277,   280,   284,   286,   291,
     293,   295,   297,   299,   301,   303,   305,   309,   311,   315,
     319,   323,   327,   331,   332,   335,   336,   340,   341,   345,
     348,   349,   354,   355,   358,   362,   363,   365,   367,   369,
     371,   373,   375,   379,   383,   387,   391,   395,   399,   401,
     403,   405,   407,   409,   411,   413,   415,   417,   421,   425,
     429,   433,   437,   441,   445,   449,   453,   457,   459,   461,
     463,   465,   469
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    -1,    52,    53,    -1,    33,    -1,     1,
      52,    -1,    34,    -1,    71,    54,    -1,    55,    54,    -1,
      76,    54,    -1,    75,    54,    -1,    68,    54,    -1,    67,
      54,    -1,    58,    54,    -1,    57,    54,    -1,    64,    54,
      -1,    79,    54,    -1,    63,    54,    -1,    72,    54,    -1,
      -1,    34,    54,    -1,    12,    35,    88,    36,    37,    -1,
      -1,    68,    56,    -1,    57,    56,    -1,    58,    56,    -1,
      67,    56,    -1,    64,    56,    -1,    79,    56,    -1,    70,
      56,    -1,    71,    56,    -1,    72,    56,    -1,    55,    54,
      -1,    63,    56,    -1,     1,    56,    -1,    34,    56,    -1,
      14,    54,    38,    56,    39,    15,    35,    92,    36,    37,
      -1,     3,    35,    59,    92,    60,    61,    36,    54,    38,
      56,    39,    -1,    73,    -1,    12,    37,    -1,    79,    -1,
       1,    -1,    37,    -1,     1,    -1,    12,    62,    -1,    31,
      -1,    32,    -1,    12,    31,    37,    -1,    12,    32,    37,
      -1,    -1,     4,    35,    92,    36,    54,    38,    56,    39,
      65,    66,    -1,    -1,     5,    54,    38,    56,    39,    -1,
      15,    35,    92,    36,    54,    38,    56,    39,    -1,     7,
      35,    92,    36,    54,    38,    69,    39,    -1,    -1,    24,
      92,    40,    56,    25,    37,    -1,    69,    26,    40,    56,
      -1,     6,    92,    37,    -1,    -1,    74,    -1,    74,    37,
      54,    71,    -1,     1,    71,    -1,    -1,    79,    -1,    79,
      37,    54,    72,    -1,     1,    72,    -1,    13,    12,    41,
      92,    37,    -1,    13,    12,    77,    37,    -1,    13,    82,
      37,    -1,    13,    12,    42,    92,    43,    37,    -1,    13,
      12,    42,    92,    43,    41,    38,    78,    39,    37,    -1,
      13,    12,    35,    86,    36,    38,    56,    39,    -1,    13,
      12,    35,    84,    36,    37,    -1,    -1,    80,    92,    -1,
      92,    44,    78,    -1,    92,    -1,    81,    80,    92,    37,
      -1,    41,    -1,    27,    -1,    28,    -1,    29,    -1,    30,
      -1,    12,    -1,    83,    -1,    82,    44,    83,    -1,    12,
      -1,    12,    41,    92,    -1,    12,    27,    92,    -1,    12,
      28,    92,    -1,    12,    29,    92,    -1,    12,    30,    92,
      -1,    -1,    13,    85,    -1,    -1,    44,    13,    85,    -1,
      -1,    13,    12,    87,    -1,     1,    86,    -1,    -1,    44,
      13,    12,    87,    -1,    -1,    90,    89,    -1,    44,    90,
      89,    -1,    -1,    12,    -1,    16,    -1,     8,    -1,     9,
      -1,    10,    -1,    11,    -1,    91,    20,    91,    -1,    91,
      18,    91,    -1,    91,    19,    91,    -1,    91,    23,    91,
      -1,    91,    21,    91,    -1,    91,    22,    91,    -1,    12,
      -1,    16,    -1,     8,    -1,     9,    -1,    10,    -1,    11,
      -1,    17,    -1,    12,    -1,    16,    -1,    92,    45,    92,
      -1,    92,    46,    92,    -1,    92,    47,    92,    -1,    92,
      48,    92,    -1,    92,    20,    92,    -1,    92,    18,    92,
      -1,    92,    19,    92,    -1,    92,    23,    92,    -1,    92,
      21,    92,    -1,    92,    22,    92,    -1,     8,    -1,     9,
      -1,    10,    -1,    11,    -1,    92,    49,    92,    -1,    92,
      50,    92,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    93,    94,    95,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   114,
     115,   119,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   140,   143,   149,   150,
     151,   152,   155,   156,   159,   163,   164,   167,   168,   172,
     172,   176,   177,   180,   184,   188,   189,   190,   193,   196,
     197,   198,   199,   203,   204,   205,   206,   209,   216,   217,
     218,   219,   226,   229,   234,   235,   240,   241,   244,   248,
     249,   250,   251,   252,   257,   261,   262,   265,   266,   267,
     268,   269,   270,   274,   275,   279,   280,   285,   286,   287,
     290,   291,   297,   298,   302,   303,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   321,   322,
     323,   324,   325,   326,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350
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
      53,    53,    53,    53,    53,    53,    53,    53,    53,    54,
      54,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    57,    58,    59,    59,
      59,    59,    60,    60,    61,    62,    62,    63,    63,    65,
      64,    66,    66,    67,    68,    69,    69,    69,    70,    71,
      71,    71,    71,    72,    72,    72,    72,    73,    74,    74,
      74,    74,    75,    76,    77,    77,    78,    78,    79,    80,
      80,    80,    80,    80,    81,    82,    82,    83,    83,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    86,    86,
      87,    87,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
       2,     5,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    10,    11,     1,     2,
       1,     1,     1,     1,     2,     1,     1,     3,     3,     0,
      10,     0,     5,     8,     8,     0,     6,     4,     3,     0,
       1,     4,     2,     0,     1,     4,     2,     5,     4,     3,
       6,    10,     8,     6,     0,     2,     3,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     3,
       3,     3,     3,     0,     2,     0,     3,     0,     3,     2,
       0,     4,     0,     2,     3,     0,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     4,     0,     0,     1,     0,     0,     0,     0,
      84,     0,    19,     0,     6,     3,    19,    19,    19,    19,
      19,    19,    19,    19,    19,    60,    19,    19,    19,     0,
      84,     0,    62,    66,    64,     0,     0,     0,     0,     0,
     102,    74,     0,    85,    19,     0,     0,     8,    14,    13,
      17,    15,    12,    11,     7,    18,    19,    10,     9,    19,
      16,    80,    81,    82,    83,    79,     0,    74,    41,    84,
       0,     0,    38,    40,   137,   138,   139,   140,   125,   126,
     124,     0,     0,    47,    48,   120,   121,   122,   123,   118,
     119,     0,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,    20,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,    19,     0,     0,
     103,     0,     0,     0,     0,     0,     0,    89,    90,    91,
      92,     0,    95,     0,     0,    88,     0,    68,    75,    87,
      86,     0,     0,     0,    19,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,     0,    61,     0,
      65,    78,     0,    43,    42,     0,   132,   133,   131,   135,
     136,   134,     0,   127,   128,   129,   130,   141,   142,     0,
      21,   105,   120,   121,   122,   123,   118,   119,   113,   114,
     112,   116,   117,   115,     0,    99,   100,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    35,    32,     0,    24,    25,    33,    27,    26,    23,
      29,    30,    31,    28,     0,     0,     0,     0,     0,    55,
     104,     0,    98,    95,    73,     0,    70,     0,    58,     0,
       0,    67,    45,    46,    44,    19,     0,     0,     0,     0,
      96,     0,     0,     0,     0,     0,    49,     0,     0,    54,
     100,    72,     0,    77,     0,    53,     0,    51,     0,     0,
     101,     0,     0,     0,     0,    19,    50,     0,    57,    71,
      76,    36,    37,     0,     0,     0,    56,     0,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    15,    45,   154,   231,   156,   157,    71,   175,
     237,   254,   158,   159,   277,   286,   160,   161,   258,   162,
     163,   164,    72,    25,    26,    27,   101,   272,   165,   102,
      29,    42,    43,   143,   208,   144,   242,    91,   130,    92,
      93,   137
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -86
static const yytype_int16 yypact[] =
{
     325,   325,   -86,   341,   364,   -86,   380,    72,    77,   102,
      71,    22,   115,   117,   -86,   -86,   115,   115,   115,   115,
     115,   115,   115,   115,   115,    46,   115,   115,    13,    28,
     -86,   146,   -86,   -86,   125,    36,   511,   511,   145,   158,
     195,   157,   -20,   -86,   115,   162,   511,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   115,   -86,   -86,   115,
     -86,   -86,   -86,   -86,   -86,   -86,   511,   236,   -86,   159,
     171,   511,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   397,   404,   -86,   -86,    -5,     2,    48,    49,    61,
      64,   172,   165,   416,   511,   511,   511,   511,    17,   511,
     511,   181,   511,   -86,   209,   -86,   297,   437,   129,   216,
     443,   -86,   183,    41,   511,   511,   511,   511,   511,   511,
     115,   511,   511,   511,   511,   511,   511,   115,   188,   195,
     -86,   224,   224,   224,   224,   224,   224,   574,   574,   574,
     574,    31,    -3,   190,   191,   574,   456,   -86,   574,   118,
     -86,   282,   511,   282,   115,   198,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   245,   115,   129,   -86,   216,
     -86,   -86,   511,   -86,   -86,   226,   574,   574,   574,   574,
     574,   574,   205,   574,   574,   574,   574,   574,   574,   206,
     -86,   165,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   233,   -86,   203,   240,   -86,   217,
     229,   -22,   511,   511,   511,   511,   511,   -86,   282,   282,
     489,   -86,   -86,   253,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   234,   495,    20,   237,   297,   250,
     -86,   262,   -86,   232,   -86,   297,   -86,   249,   -86,   255,
     297,   -86,   -86,   -86,   -86,   115,   252,   511,    -6,   280,
     -86,   254,   511,   511,   260,   264,   -86,   528,   265,   -86,
     203,   -86,   267,   535,   568,   -86,   297,   308,   396,   163,
     -86,   277,   511,   278,   279,   115,   -86,   292,   -86,   -86,
     -86,   -86,   -86,   281,   283,   297,   -86,   284,   -86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   321,   -86,   -16,    78,   -85,   106,   123,   -86,   -86,
     -86,   -86,   136,   153,   -86,   -86,   169,   177,   -86,   -86,
      23,    10,   -86,   -86,   -86,   -86,   -86,    42,    19,   298,
     -86,   -86,   230,   -86,    87,   192,    65,   -86,   152,   218,
     336,    -1
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -112
static const yytype_int16 yytable[] =
{
      47,    48,    49,    50,    51,    52,    53,    54,    55,   206,
      57,    58,    60,    24,    24,   246,    33,   103,   141,   247,
     268,   155,    28,    28,   104,    34,    23,    23,   105,    32,
     142,  -108,   141,   269,    41,    81,    82,    68,  -109,  -108,
     108,   207,   173,   109,   204,   107,  -109,    44,    69,    70,
      59,   252,   253,   -93,    73,    61,    62,    63,    64,   114,
     115,   116,   117,   118,   119,   110,   217,   -97,   221,    65,
     113,   224,   225,   226,   227,   228,   229,   230,   174,   232,
     233,    16,    16,    56,  -110,  -111,   121,   122,   123,   124,
     125,   126,  -110,  -111,   138,   139,   140,  -106,   145,   146,
    -107,   148,    38,    39,   182,  -106,    40,    35,  -107,    17,
      17,   189,    36,   176,   177,   178,   179,   180,   181,   170,
     183,   184,   185,   186,   187,   188,    18,    18,    34,   -59,
     167,   168,   -59,   -59,   232,   -59,   -59,    37,   222,    19,
      19,   -59,    31,   -59,   -59,   212,   213,   214,   215,    44,
     234,   220,    46,   256,   -59,   -59,    20,    20,    67,   216,
     261,   219,    59,   -59,   151,   264,     7,     8,   -59,   152,
       9,   235,    21,    21,   218,    10,    31,    12,    13,    33,
      22,    22,    83,   112,    94,    95,    96,    97,    34,   -22,
      32,   284,    98,   287,   288,    84,   111,   153,    99,   100,
     106,   -87,   -22,    85,    86,    87,    88,    89,   128,   129,
     297,    90,   138,   139,   140,   145,   -63,   169,   147,   -63,
     -63,   149,   -63,   -63,   172,   190,   209,   210,    30,   -63,
     -63,   -63,   192,   193,   194,   195,   196,   223,   236,   265,
     197,   -63,   -63,   238,   239,   206,   151,   241,     7,     8,
     -63,   152,     9,   243,   244,   -63,   267,    10,    31,    12,
      13,   273,   274,    94,    95,    96,    97,   245,   249,   293,
     -22,   -22,   250,   255,   257,   259,   207,    99,   100,   153,
     -87,   273,    59,   151,   -22,     7,     8,   262,   152,     9,
     263,   266,   270,   271,    10,    31,    12,    13,   151,   275,
       7,     8,   276,   152,     9,   279,   281,   -22,   -22,    10,
      31,    12,    13,   285,   289,   291,   153,   294,   292,   295,
     296,   -22,     4,   298,   290,    -2,     1,    66,    -2,    -2,
     260,   153,    -2,   205,   150,   280,   -22,    -2,    -2,    -2,
      -2,     5,     6,   240,     7,     8,     0,   191,     9,     0,
       0,     0,     0,    10,    11,    12,    13,     0,     2,    -2,
       0,     0,     0,     0,    -5,     6,     0,     7,     8,     0,
       0,     9,     0,     0,     0,    14,    10,    11,    12,    13,
     -59,     6,     0,   -59,   -59,     0,     0,   -59,     0,     0,
       0,     0,    30,    31,   -59,   -59,     0,   151,    14,     7,
       8,     0,   152,     9,     0,     0,     0,     0,    10,    31,
      12,    13,     0,     0,   -59,   114,   115,   116,   117,   118,
     119,   -22,   114,   115,   116,   117,   118,   119,     0,     0,
     153,     0,     0,   120,   131,   132,   133,   134,   135,   136,
     127,     0,   121,   122,   123,   124,   125,   126,     0,   121,
     122,   123,   124,   125,   126,   114,   115,   116,   117,   118,
     119,   114,   115,   116,   117,   118,   119,   198,   199,   200,
     201,   202,   203,   166,   114,   115,   116,   117,   118,   119,
     171,     0,   121,   122,   123,   124,   125,   126,   121,   122,
     123,   124,   125,   126,     0,     0,     0,     0,     0,   211,
       0,   121,   122,   123,   124,   125,   126,   114,   115,   116,
     117,   118,   119,   114,   115,   116,   117,   118,   119,    74,
      75,    76,    77,    78,     0,     0,   248,    79,    80,     0,
       0,     0,   251,     0,   121,   122,   123,   124,   125,   126,
     121,   122,   123,   124,   125,   126,   114,   115,   116,   117,
     118,   119,     0,   114,   115,   116,   117,   118,   119,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   278,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   282,
     121,   122,   123,   124,   125,   126,   114,   115,   116,   117,
     118,   119,   114,   115,   116,   117,   118,   119,     0,     0,
       0,     0,     0,     0,   283,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   121,
     122,   123,   124,   125,   126
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,    20,    21,    22,    23,    24,    12,
      26,    27,    28,     3,     4,    37,     6,    37,     1,    41,
      26,   106,     3,     4,    44,     6,     3,     4,    44,     6,
      13,    36,     1,    39,    12,    36,    37,     1,    36,    44,
      56,    44,     1,    59,    13,    46,    44,    34,    12,    13,
      37,    31,    32,    36,    35,    27,    28,    29,    30,    18,
      19,    20,    21,    22,    23,    66,   151,    36,   153,    41,
      71,   156,   157,   158,   159,   160,   161,   162,    37,   164,
     165,     3,     4,    37,    36,    36,    45,    46,    47,    48,
      49,    50,    44,    44,    95,    96,    97,    36,    99,   100,
      36,   102,    31,    32,   120,    44,    35,    35,    44,     3,
       4,   127,    35,   114,   115,   116,   117,   118,   119,   109,
     121,   122,   123,   124,   125,   126,     3,     4,   109,     0,
       1,   108,     3,     4,   219,     6,     7,    35,   154,     3,
       4,    12,    13,    14,    15,    27,    28,    29,    30,    34,
     166,   152,    35,   238,    25,    26,     3,     4,    12,    41,
     245,   151,    37,    34,     1,   250,     3,     4,    39,     6,
       7,   172,     3,     4,   151,    12,    13,    14,    15,   169,
       3,     4,    37,    12,    27,    28,    29,    30,   169,    26,
     167,   276,    35,   278,   279,    37,    37,    34,    41,    42,
      38,    44,    39,     8,     9,    10,    11,    12,    36,    44,
     295,    16,   213,   214,   215,   216,     0,     1,    37,     3,
       4,    12,     6,     7,    41,    37,    36,    36,    12,    13,
      14,    15,     8,     9,    10,    11,    12,    39,    12,   255,
      16,    25,    26,    38,    38,    12,     1,    44,     3,     4,
      34,     6,     7,    13,    37,    39,   257,    12,    13,    14,
      15,   262,   263,    27,    28,    29,    30,    38,    15,   285,
      25,    26,    38,    36,    24,    13,    44,    41,    42,    34,
      44,   282,    37,     1,    39,     3,     4,    38,     6,     7,
      35,    39,    12,    39,    12,    13,    14,    15,     1,    39,
       3,     4,    38,     6,     7,    40,    39,    25,    26,    12,
      13,    14,    15,     5,    37,    37,    34,    25,    39,    38,
      37,    39,     1,    39,   282,     0,     1,    29,     3,     4,
     243,    34,     7,   141,   104,   270,    39,    12,    13,    14,
      15,     0,     1,   191,     3,     4,    -1,   129,     7,    -1,
      -1,    -1,    -1,    12,    13,    14,    15,    -1,    33,    34,
      -1,    -1,    -1,    -1,     0,     1,    -1,     3,     4,    -1,
      -1,     7,    -1,    -1,    -1,    34,    12,    13,    14,    15,
       0,     1,    -1,     3,     4,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    12,    13,    14,    15,    -1,     1,    34,     3,
       4,    -1,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    -1,    -1,    34,    18,    19,    20,    21,    22,
      23,    25,    18,    19,    20,    21,    22,    23,    -1,    -1,
      34,    -1,    -1,    36,    18,    19,    20,    21,    22,    23,
      36,    -1,    45,    46,    47,    48,    49,    50,    -1,    45,
      46,    47,    48,    49,    50,    18,    19,    20,    21,    22,
      23,    18,    19,    20,    21,    22,    23,   131,   132,   133,
     134,   135,   136,    36,    18,    19,    20,    21,    22,    23,
      37,    -1,    45,    46,    47,    48,    49,    50,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    46,    47,    48,    49,    50,    18,    19,    20,
      21,    22,    23,    18,    19,    20,    21,    22,    23,     8,
       9,    10,    11,    12,    -1,    -1,    37,    16,    17,    -1,
      -1,    -1,    37,    -1,    45,    46,    47,    48,    49,    50,
      45,    46,    47,    48,    49,    50,    18,    19,    20,    21,
      22,    23,    -1,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    44,
      45,    46,    47,    48,    49,    50,    18,    19,    20,    21,
      22,    23,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    45,
      46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    33,    52,    52,     0,     1,     3,     4,     7,
      12,    13,    14,    15,    34,    53,    55,    57,    58,    63,
      64,    67,    68,    71,    72,    74,    75,    76,    79,    81,
      12,    13,    71,    72,    79,    35,    35,    35,    31,    32,
      35,    12,    82,    83,    34,    54,    35,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    37,    54,    54,    37,
      54,    27,    28,    29,    30,    41,    80,    12,     1,    12,
      13,    59,    73,    79,     8,     9,    10,    11,    12,    16,
      17,    92,    92,    37,    37,     8,     9,    10,    11,    12,
      16,    88,    90,    91,    27,    28,    29,    30,    35,    41,
      42,    77,    80,    37,    44,    54,    38,    92,    54,    54,
      92,    37,    12,    92,    18,    19,    20,    21,    22,    23,
      36,    45,    46,    47,    48,    49,    50,    36,    36,    44,
      89,    18,    19,    20,    21,    22,    23,    92,    92,    92,
      92,     1,    13,    84,    86,    92,    92,    37,    92,    12,
      83,     1,     6,    34,    55,    56,    57,    58,    63,    64,
      67,    68,    70,    71,    72,    79,    36,     1,    71,     1,
      72,    37,    41,     1,    37,    60,    92,    92,    92,    92,
      92,    92,    54,    92,    92,    92,    92,    92,    92,    54,
      37,    90,     8,     9,    10,    11,    12,    16,    91,    91,
      91,    91,    91,    91,    13,    86,    12,    44,    85,    36,
      36,    43,    27,    28,    29,    30,    41,    56,    71,    72,
      92,    56,    54,    39,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    54,    92,    12,    61,    38,    38,
      89,    44,    87,    13,    37,    38,    37,    41,    37,    15,
      38,    37,    31,    32,    62,    36,    56,    24,    69,    13,
      85,    56,    38,    35,    56,    54,    39,    92,    26,    39,
      12,    39,    78,    92,    92,    39,    38,    65,    40,    40,
      87,    39,    44,    36,    56,     5,    66,    56,    56,    37,
      78,    37,    39,    54,    25,    38,    37,    56,    39
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

  case 20:

/* Line 1455 of yacc.c  */
#line 115 "../src/integrador.y"
    {my_line++;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 119 "../src/integrador.y"
    {if(verificaFuncion((yyvsp[(1) - (5)].s.cadena))){printf( "Se incovoco correcamente a la funcion %s \n",(yyvsp[(1) - (5)].s.cadena));};}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 137 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 138 "../src/integrador.y"
    {my_line++;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 140 "../src/integrador.y"
    {printf( "Se ha declarado una sentencia do-while \n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 143 "../src/integrador.y"
    {printf("Se ha declarado una sentencia for\n");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 152 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 156 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 159 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (2)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (2)].s.cadena), "se intento incrementar/decrementar una variable no existente");}else{if(esNumerica((yyvsp[(1) - (2)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (2)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (2)].s.cadena), "se intento incrementar una varibale no operable");}};}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 167 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (3)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento incrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (3)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (3)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento incrementar una varibale no operable");}};}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 168 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (3)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento decrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (3)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (3)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento decrementar una varibale no operable");}};}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 172 "../src/integrador.y"
    {printf ("Se declaro un if \n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 177 "../src/integrador.y"
    {printf ("Se declaron un else \n");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 180 "../src/integrador.y"
    {printf ("Se declaro un while \n");;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 184 "../src/integrador.y"
    {printf ("Se declaro un switch \n");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 189 "../src/integrador.y"
    {printf ("Se declaro un case \n");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 190 "../src/integrador.y"
    {printf ("Se declaro el default \n");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 193 "../src/integrador.y"
    {printf ("Se declaro un return \n ");;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 199 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 206 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 209 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (5)].s.cadena), (yyvsp[(1) - (5)].s.tipo));;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 216 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (4)].s.cadena), (yyvsp[(1) - (4)].s.tipo));;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 218 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (6)].s.cadena), (yyvsp[(1) - (6)].s.tipo));;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 219 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (10)].s.cadena), (yyvsp[(1) - (10)].s.tipo));;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 226 "../src/integrador.y"
    {agregarFuncion((yyvsp[(1) - (8)].s.tipo),(yyvsp[(2) - (8)].s.cadena),1);}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 229 "../src/integrador.y"
    {agregarFuncion((yyvsp[(1) - (6)].s.tipo),(yyvsp[(2) - (6)].s.cadena),0);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 244 "../src/integrador.y"
    {if(!flag()){printf("se realizo una asignacion\n");}else{bajarFlag();};}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 257 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (1)].s.cadena))!=NULL){}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (1)].s.cadena),"debido a que no fue declarado");levantarFlag();};}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 265 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (1)].s.cadena),mostrarUltimoDato());;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 266 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 267 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 268 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 269 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 270 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 275 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (2)].s.tipo));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 280 "../src/integrador.y"
    {agregarParametro((yyvsp[(2) - (3)].s.tipo));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 286 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (3)].s.tipo));agregarIdentificador((yyvsp[(2) - (3)].s.cadena),(yyvsp[(1) - (3)].s.tipo));}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 287 "../src/integrador.y"
    {yyerrok;;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 291 "../src/integrador.y"
    {agregarParametro((yyvsp[(2) - (4)].s.tipo));agregarIdentificador((yyvsp[(3) - (4)].s.cadena),(yyvsp[(2) - (4)].s.tipo));}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 306 "../src/integrador.y"
    {int tipo=buscarTipo((yyvsp[(1) - (1)].s.cadena));if(tipo>=0){agregarParametro(tipo);}/* else{} */;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 307 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 308 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 309 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 310 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 311 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 312 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 313 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 314 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 315 "../src/integrador.y"
    {agregarParametro(1);;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 316 "../src/integrador.y"
    {agregarParametro(0);;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 317 "../src/integrador.y"
    {agregarParametro(0);;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 321 "../src/integrador.y"
    {int tipo=buscarTipo((yyvsp[(1) - (1)].s.cadena));if(tipo>=0){agregarParametro(tipo);}/* else{} */;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 322 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 323 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 324 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 325 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 326 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 332 "../src/integrador.y"
    {(yyvsp[(1) - (1)].s.tipo)=4;;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 333 "../src/integrador.y"
    {(yyval.s.tipo)=buscarTipo((yyvsp[(1) - (1)].s.cadena));;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 334 "../src/integrador.y"
    {(yyval.s.tipo)=0;;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 335 "../src/integrador.y"
    {(yyvsp[(1) - (3)].s.tipo)=calcularTipo((yyvsp[(1) - (3)].s.cadena), (yyvsp[(1) - (3)].s.tipo)); (yyvsp[(3) - (3)].s.tipo)=calcularTipo((yyvsp[(3) - (3)].s.cadena), (yyvsp[(3) - (3)].s.tipo));if(sonOperables((yyvsp[(1) - (3)].s.tipo),(yyvsp[(3) - (3)].s.tipo))){printf ("Se escribio una expresion usando una suma \n");}else{agregarErrorDeTipos((yyvsp[(1) - (3)].s.cadena), (yyvsp[(1) - (3)].s.tipo), '+' ,(yyvsp[(3) - (3)].s.cadena), (yyvsp[(3) - (3)].s.tipo));};}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 336 "../src/integrador.y"
    {printf ("Se escribio una expresion usando una resta \n");;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 337 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 338 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 339 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de igualdad \n");;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 340 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 341 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 342 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de distinto \n");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 343 "../src/integrador.y"
    {printf ("Se escribio una expresion con la operacion logica and \n");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 344 "../src/integrador.y"
    {printf ("Se escribio una expresion con la operacion logica or \n");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 345 "../src/integrador.y"
    {(yyval.s.tipo)=1;;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 346 "../src/integrador.y"
    {(yyval.s.tipo)=1;;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 347 "../src/integrador.y"
    {(yyval.s.tipo)=1;;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 348 "../src/integrador.y"
    {(yyval.s.tipo)=2;;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 349 "../src/integrador.y"
    {printf ("Se escribio una expresion  \n");;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 350 "../src/integrador.y"
    {printf ("Se escribio una expresion  \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2270 "integrador.tab.c"
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


