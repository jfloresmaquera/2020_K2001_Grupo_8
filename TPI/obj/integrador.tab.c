
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
<<<<<<< HEAD
#define YYLAST   353
=======
#define YYLAST   348
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  268
=======
#define YYNRULES  130
/* YYNRULES -- Number of states.  */
#define YYNSTATES  270
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c

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
      49,    43,    48,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
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
<<<<<<< HEAD
       0,     0,     3,     4,     7,     9,    11,    14,    17,    20,
      23,    26,    29,    32,    35,    38,    41,    44,    47,    48,
      51,    57,    58,    61,    64,    67,    70,    73,    76,    79,
      82,    85,    88,    91,   102,   113,   115,   117,   120,   123,
     127,   131,   132,   143,   146,   147,   153,   162,   171,   172,
     179,   184,   188,   189,   191,   195,   199,   203,   210,   221,
     226,   229,   240,   247,   251,   253,   258,   260,   262,   264,
     266,   268,   271,   273,   275,   279,   281,   285,   289,   293,
     297,   301,   302,   304,   308,   310,   311,   314,   319,   320,
     323,   327,   328,   330,   332,   334,   336,   338,   340,   344,
     348,   352,   356,   360,   364,   366,   368,   370,   372,   374,
     376,   378,   380,   382,   384,   388,   392,   396,   400,   404,
     408,   412,   416,   420,   424,   426,   428,   430,   432,   436
=======
       0,     0,     3,     6,     8,    10,    13,    16,    19,    22,
      25,    28,    31,    34,    37,    40,    43,    46,    47,    50,
      56,    57,    60,    63,    66,    69,    72,    75,    78,    81,
      84,    87,    90,   101,   114,   116,   118,   121,   124,   128,
     132,   133,   144,   147,   148,   154,   163,   164,   173,   174,
     181,   186,   187,   191,   192,   194,   198,   202,   206,   213,
     224,   229,   232,   243,   250,   254,   256,   261,   263,   265,
     267,   269,   271,   274,   276,   278,   282,   284,   288,   292,
     296,   300,   304,   305,   307,   311,   313,   314,   317,   322,
     323,   326,   330,   331,   333,   335,   337,   339,   341,   343,
     347,   351,   355,   359,   363,   367,   369,   371,   373,   375,
     377,   379,   381,   383,   385,   387,   391,   395,   399,   403,
     407,   411,   415,   419,   423,   427,   429,   431,   433,   435,
     439
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
<<<<<<< HEAD
      52,     0,    -1,    -1,    52,    53,    -1,    33,    -1,    34,
      -1,    70,    54,    -1,    55,    54,    -1,    73,    54,    -1,
      72,    54,    -1,    67,    54,    -1,    66,    54,    -1,    58,
      54,    -1,    57,    54,    -1,    63,    54,    -1,    75,    54,
      -1,    62,    54,    -1,     1,    54,    -1,    -1,    34,    54,
      -1,    12,    35,    82,    36,    37,    -1,    -1,    67,    56,
      -1,    57,    56,    -1,    58,    56,    -1,    66,    56,    -1,
      63,    56,    -1,    75,    56,    -1,    69,    56,    -1,    70,
      56,    -1,    55,    54,    -1,    62,    56,    -1,    34,    56,
      -1,    14,    54,    38,    56,    39,    15,    35,    86,    36,
      37,    -1,     3,    35,    59,    59,    60,    36,    54,    38,
      56,    39,    -1,    75,    -1,    71,    -1,    12,    61,    -1,
      31,    32,    -1,    12,    31,    37,    -1,    12,    32,    37,
      -1,    -1,     4,    35,    86,    36,    54,    38,    56,    39,
      64,    65,    -1,     1,    54,    -1,    -1,     5,    54,    38,
      56,    39,    -1,    15,    35,    86,    36,    54,    38,    56,
      39,    -1,     7,    35,    86,    36,    54,    38,    68,    39,
      -1,    -1,    24,    86,    40,    56,    25,    37,    -1,    68,
      26,    40,    56,    -1,     6,    86,    37,    -1,    -1,    71,
      -1,    71,    37,    70,    -1,    13,    12,    37,    -1,    13,
      78,    37,    -1,    13,    12,    41,    87,    42,    37,    -1,
      13,    12,    41,    87,    42,    43,    38,    74,    39,    37,
      -1,    13,    44,    12,    37,    -1,     1,    54,    -1,    13,
      12,    35,    81,    36,    54,    38,    56,    39,    37,    -1,
      13,    12,    35,    80,    36,    37,    -1,    87,    45,    74,
      -1,    87,    -1,    77,    76,    86,    37,    -1,    43,    -1,
      27,    -1,    28,    -1,    29,    -1,    30,    -1,    13,    12,
      -1,    12,    -1,    79,    -1,    78,    45,    79,    -1,    12,
      -1,    12,    43,    86,    -1,    12,    27,    86,    -1,    12,
      28,    86,    -1,    12,    29,    86,    -1,    12,    30,    86,
      -1,    -1,    13,    -1,    13,    45,    80,    -1,    81,    -1,
      -1,    13,    12,    -1,    13,    12,    45,    81,    -1,    -1,
      84,    83,    -1,    45,    84,    83,    -1,    -1,    12,    -1,
      16,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
      85,    20,    85,    -1,    85,    18,    85,    -1,    85,    19,
      85,    -1,    85,    23,    85,    -1,    85,    21,    85,    -1,
      85,    22,    85,    -1,    12,    -1,    16,    -1,     8,    -1,
       9,    -1,    10,    -1,    11,    -1,    17,    -1,    87,    -1,
      12,    -1,    16,    -1,    87,    46,    87,    -1,    87,    47,
      87,    -1,    87,    48,    87,    -1,    87,    49,    87,    -1,
      87,    20,    87,    -1,    87,    18,    87,    -1,    87,    19,
      87,    -1,    87,    23,    87,    -1,    87,    21,    87,    -1,
      87,    22,    87,    -1,     8,    -1,     9,    -1,    10,    -1,
      11,    -1,    87,    44,    87,    -1,    87,    50,    87,    -1
=======
      52,     0,    -1,    52,    53,    -1,    33,    -1,    34,    -1,
      70,    54,    -1,    55,    54,    -1,    73,    54,    -1,    72,
      54,    -1,    67,    54,    -1,    66,    54,    -1,    58,    54,
      -1,    57,    54,    -1,    63,    54,    -1,    75,    54,    -1,
      62,    54,    -1,     1,    54,    -1,    -1,    34,    54,    -1,
      12,    35,    82,    36,    37,    -1,    -1,    67,    56,    -1,
      57,    56,    -1,    58,    56,    -1,    66,    56,    -1,    63,
      56,    -1,    75,    56,    -1,    69,    56,    -1,    70,    56,
      -1,    55,    54,    -1,    62,    56,    -1,    34,    56,    -1,
      14,    54,    38,    56,    39,    15,    35,    86,    36,    37,
      -1,     3,    35,    59,    37,    12,    37,    60,    36,    54,
      38,    56,    39,    -1,    75,    -1,    71,    -1,    12,    61,
      -1,    31,    32,    -1,    12,    31,    37,    -1,    12,    32,
      37,    -1,    -1,     4,    35,    86,    36,    54,    38,    56,
      39,    64,    65,    -1,     1,    54,    -1,    -1,     5,    54,
      38,    56,    39,    -1,    15,    35,    86,    36,    54,    38,
      56,    39,    -1,    -1,     7,    35,    86,    36,    54,    38,
      68,    39,    -1,    -1,    24,    86,    40,    56,    25,    37,
      -1,    68,    26,    40,    56,    -1,    -1,     6,    86,    37,
      -1,    -1,    71,    -1,    71,    37,    70,    -1,    13,    12,
      37,    -1,    13,    78,    37,    -1,    13,    12,    41,    87,
      42,    37,    -1,    13,    12,    41,    87,    42,    43,    38,
      74,    39,    37,    -1,    13,    44,    12,    37,    -1,     1,
      54,    -1,    13,    12,    35,    81,    36,    54,    38,    56,
      39,    37,    -1,    13,    12,    35,    80,    36,    37,    -1,
      87,    45,    74,    -1,    87,    -1,    77,    76,    86,    37,
      -1,    43,    -1,    27,    -1,    28,    -1,    29,    -1,    30,
      -1,    13,    12,    -1,    12,    -1,    79,    -1,    78,    45,
      79,    -1,    12,    -1,    12,    43,    86,    -1,    12,    27,
      86,    -1,    12,    28,    86,    -1,    12,    29,    86,    -1,
      12,    30,    86,    -1,    -1,    13,    -1,    13,    45,    80,
      -1,    81,    -1,    -1,    13,    12,    -1,    13,    12,    45,
      81,    -1,    -1,    84,    83,    -1,    45,    84,    83,    -1,
      -1,    12,    -1,    16,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,    85,    20,    85,    -1,    85,    18,    85,
      -1,    85,    19,    85,    -1,    85,    23,    85,    -1,    85,
      21,    85,    -1,    85,    22,    85,    -1,    12,    -1,    16,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    17,
      -1,    87,    -1,    12,    -1,    16,    -1,    87,    46,    87,
      -1,    87,    47,    87,    -1,    87,    48,    87,    -1,    87,
      49,    87,    -1,    87,    20,    87,    -1,    87,    18,    87,
      -1,    87,    19,    87,    -1,    87,    23,    87,    -1,    87,
      21,    87,    -1,    87,    22,    87,    -1,     8,    -1,     9,
      -1,    10,    -1,    11,    -1,    87,    44,    87,    -1,    87,
      50,    87,    -1
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
<<<<<<< HEAD
       0,    87,    87,    88,    89,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   108,   109,
     113,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   131,   134,   139,   140,   144,   147,   151,
     152,   156,   156,   157,   160,   161,   164,   168,   172,   173,
     174,   177,   180,   181,   182,   185,   186,   187,   188,   189,
     190,   194,   197,   201,   202,   205,   209,   210,   211,   212,
     213,   218,   219,   223,   224,   227,   228,   229,   230,   231,
     232,   236,   237,   238,   239,   244,   245,   246,   250,   251,
     254,   255,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   273,   274,   275,   276,   277,   278,
     281,   282,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
=======
       0,    85,    85,    86,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   105,   106,   110,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   128,   131,   136,   137,   141,   144,   148,   149,
     153,   153,   154,   157,   158,   161,   165,   166,   170,   171,
     172,   175,   176,   179,   180,   181,   184,   185,   186,   187,
     188,   189,   193,   196,   200,   201,   204,   208,   209,   210,
     211,   212,   215,   216,   222,   223,   226,   227,   228,   229,
     230,   231,   235,   236,   237,   238,   243,   244,   245,   249,
     250,   253,   254,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   272,   273,   274,   275,   276,
     277,   280,   281,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
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
  "'}'", "':'", "'['", "']'", "'='", "'*'", "','", "'+'", "'-'", "'>'",
  "'<'", "'/'", "$accept", "input", "line", "saltoOpcional",
  "invocacionFuncion", "listadoDeSentencias", "sentenciaDoWhile",
  "sentenciaFor", "sentenciaDecOAsig", "incrementoParaFor",
  "incrementoParaForAuxiliar", "incrementoDecremento", "sentenciaIfElse",
  "$@1", "sentenciaElse", "sentenciaWhile", "sentenciaSwitch",
  "sentenciaCase", "sentenciaReturn", "listadoDeSentenciasDeDeclaracion",
  "sentenciaDeclaracion", "desarrolloFuncion", "prototipoFuncion", "auxi",
  "sentenciaAsignacion", "sentenciaAsignacionAuxiliar", "parametro",
  "listaIdentificadores", "identificadorA", "listaParametrosPrototipo",
  "listaParametrosFuncion", "listaParametrosInvocacion",
  "listaParametrosInvocacionAuxiliar", "noTerminal", "noTerminalFinal",
  "exp", "expC", 0
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
      58,    91,    93,    61,    42,    44,    43,    45,    62,    60,
      47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
<<<<<<< HEAD
       0,    51,    52,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    54,    54,
      55,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    57,    58,    59,    59,    60,    61,    62,
      62,    64,    63,    63,    65,    65,    66,    67,    68,    68,
      68,    69,    70,    70,    70,    71,    71,    71,    71,    71,
      71,    72,    73,    74,    74,    75,    76,    76,    76,    76,
      76,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    80,    81,    81,    81,    82,    82,
      83,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87
=======
       0,    51,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    54,    54,    55,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    58,    59,    59,    60,    61,    62,    62,
      64,    63,    63,    65,    65,    66,    67,    67,    68,    68,
      68,    69,    69,    70,    70,    70,    71,    71,    71,    71,
      71,    71,    72,    73,    74,    74,    75,    76,    76,    76,
      76,    76,    77,    77,    78,    78,    79,    79,    79,    79,
      79,    79,    80,    80,    80,    80,    81,    81,    81,    82,
      82,    83,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
<<<<<<< HEAD
       0,     2,     0,     2,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     2,
       5,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    10,    10,     1,     1,     2,     2,     3,
       3,     0,    10,     2,     0,     5,     8,     8,     0,     6,
       4,     3,     0,     1,     3,     3,     3,     6,    10,     4,
       2,    10,     6,     3,     1,     4,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     3,     3,     3,     3,
       3,     0,     1,     3,     1,     0,     2,     4,     0,     2,
       3,     0,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     3,     3
=======
       0,     2,     2,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     0,     2,     5,
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    10,    12,     1,     1,     2,     2,     3,     3,
       0,    10,     2,     0,     5,     8,     0,     8,     0,     6,
       4,     0,     3,     0,     1,     3,     3,     3,     6,    10,
       4,     2,    10,     6,     3,     1,     4,     1,     1,     1,
       1,     1,     2,     1,     1,     3,     1,     3,     3,     3,
       3,     3,     0,     1,     3,     1,     0,     2,     4,     0,
       2,     3,     0,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     3,
       3
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       2,     4,     0,     1,    18,     0,     0,     0,    72,     0,
      18,     0,     5,     3,    18,    18,    18,    18,    18,    18,
      18,    18,    53,    18,    18,    18,     0,    18,    17,     0,
       0,     0,     0,     0,    88,    75,     0,     0,    73,     0,
       0,     7,    13,    12,    16,    14,    11,    10,     6,     0,
       9,     8,    15,    67,    68,    69,    70,    66,     0,    19,
      18,    72,     0,     0,    36,    35,   124,   125,   126,   127,
     112,   113,   110,     0,   111,     0,    39,    40,   106,   107,
     108,   109,   104,   105,     0,    91,     0,     0,     0,     0,
       0,    81,    55,     0,     0,     0,    56,     0,     0,     0,
       0,    54,     0,    60,    75,     0,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
       0,     0,    89,     0,     0,     0,     0,     0,     0,    77,
      78,    79,    80,    82,     0,     0,     0,    76,    59,    75,
      74,    18,     0,     0,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,    75,    65,     0,     0,
       0,   119,   120,   118,   122,   123,   121,   128,   114,   115,
     116,   117,   129,     0,    20,    91,   106,   107,   108,   109,
     104,   105,    99,   100,    98,   102,   103,   101,    86,    81,
       0,    18,     0,    43,     0,    32,    30,     0,    23,    24,
      31,    26,    25,    22,    28,    29,    27,     0,     0,    37,
      18,     0,    48,    90,    85,    83,    84,    62,     0,    57,
       0,    51,     0,     0,    38,     0,     0,     0,     0,     0,
      87,     0,     0,     0,     0,     0,    41,     0,     0,    47,
       0,     0,    64,     0,    46,     0,    44,     0,     0,     0,
       0,     0,     0,    34,    18,    42,     0,    50,    61,    58,
      63,    33,     0,     0,     0,    49,     0,    45
=======
       0,     3,     0,     1,    17,     0,     0,     0,    73,     0,
      17,     0,     4,     2,    17,    17,    17,    17,    17,    17,
      17,    17,    54,    17,    17,    17,     0,    17,    16,     0,
       0,     0,     0,     0,    89,    76,     0,     0,    74,     0,
       0,     6,    12,    11,    15,    13,    10,     9,     5,     0,
       8,     7,    14,    68,    69,    70,    71,    67,     0,    18,
      17,    73,     0,     0,    35,    34,   125,   126,   127,   128,
     113,   114,   111,     0,   112,     0,    38,    39,   107,   108,
     109,   110,   105,   106,     0,    92,     0,     0,     0,     0,
       0,    82,    56,     0,     0,     0,    57,     0,     0,     0,
       0,    55,     0,    61,    76,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
       0,     0,    90,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    83,     0,     0,     0,    77,    60,    76,
      75,    17,     0,     0,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    76,    66,     0,     0,
     120,   121,   119,   123,   124,   122,   129,   115,   116,   117,
     118,   130,     0,    19,    92,   107,   108,   109,   110,   105,
     106,   100,   101,    99,   103,   104,   102,    87,    82,     0,
      17,     0,    42,     0,    31,    29,     0,    22,    23,    30,
      25,    24,    21,    27,    28,    26,     0,     0,     0,    48,
      91,    86,    84,    85,    63,     0,    58,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,    36,    17,    40,     0,     0,    47,     0,
       0,    65,     0,    45,    37,     0,    43,     0,     0,     0,
       0,     0,     0,     0,    17,    41,     0,    50,    62,    59,
      64,    32,     0,     0,     0,    33,     0,    49,     0,    44
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
<<<<<<< HEAD
      -1,     2,    13,    28,   144,   145,   146,   147,    63,   159,
     209,   148,   149,   246,   255,   150,   151,   228,   152,   153,
      22,    23,    24,   241,   154,    58,    26,    37,    38,   134,
=======
      -1,     2,    13,    28,   144,   145,   146,   147,    63,   222,
     233,   148,   149,   246,   255,   150,   151,   225,   152,   153,
      22,    23,    24,   240,   154,    58,    26,    37,    38,   134,
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
     135,    84,   122,    85,    86,    73,    74
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
<<<<<<< HEAD
#define YYPACT_NINF -168
static const yytype_int16 yypact[] =
{
      -6,  -168,   194,  -168,    -8,    30,    43,    46,    -7,     7,
      -8,    58,  -168,  -168,    -8,    -8,    -8,    -8,    -8,    -8,
      -8,    -8,    70,    -8,    -8,    -8,    57,    -8,    74,    44,
     155,   155,    75,    86,   244,    92,    34,    81,  -168,    90,
     155,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,    76,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,   155,  -168,
      -8,  -168,     9,    44,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,    77,   260,    88,  -168,  -168,    63,   102,
     110,   142,   148,   166,   100,    96,   302,   155,   155,   155,
     155,   140,  -168,   280,   155,   117,  -168,   161,   176,   150,
      11,  -168,   159,  -168,   257,   180,    -8,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,    -8,
     167,   244,  -168,   303,   303,   303,   303,   303,   303,  -168,
    -168,  -168,  -168,     4,   177,   178,   215,  -168,  -168,   131,
    -168,    -8,   155,    91,    -8,   164,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    -8,   257,  -168,   181,   183,
     179,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   184,  -168,    96,  -168,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,   171,   140,
     188,    -8,    15,    74,   189,  -168,  -168,   212,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,  -168,   201,   208,  -168,
      -8,   176,   219,  -168,   228,  -168,  -168,  -168,   220,  -168,
     229,  -168,   231,   176,  -168,   230,   254,   155,     5,   258,
    -168,   176,   280,   155,   256,   176,  -168,   259,   261,  -168,
     263,   264,   227,   233,  -168,   266,   292,   217,   136,   279,
     281,   280,   295,  -168,    -8,  -168,   308,  -168,  -168,  -168,
    -168,  -168,   296,   298,   176,  -168,   278,  -168
=======
#define YYPACT_NINF -143
static const yytype_int16 yypact[] =
{
      -5,  -143,   186,  -143,    21,    52,    57,    67,   105,    19,
      21,    78,  -143,  -143,    21,    21,    21,    21,    21,    21,
      21,    21,    16,    21,    21,    21,   183,    21,    62,   111,
     291,   291,    90,    95,   301,   251,    44,    88,  -143,    77,
     291,  -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,    64,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,  -143,   291,  -143,
      21,  -143,    39,    98,  -143,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,   106,   227,   112,  -143,  -143,     9,    13,
      49,    55,    59,    61,   115,    96,   318,   291,   291,   291,
     291,   139,  -143,   310,   291,   116,  -143,   148,   158,   127,
      40,  -143,   129,  -143,    45,   155,    21,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,    21,
     131,   301,  -143,   319,   319,   319,   319,   319,   319,  -143,
    -143,  -143,  -143,    35,   138,   142,   210,  -143,  -143,   255,
    -143,    21,   291,   104,    21,   136,   104,   104,   104,   104,
     104,   104,   104,   104,   104,    21,    45,  -143,   144,   141,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   145,  -143,    96,  -143,  -143,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,  -143,   140,   139,   147,
      21,    85,    62,   151,  -143,  -143,   176,  -143,  -143,  -143,
    -143,  -143,  -143,  -143,  -143,  -143,   156,   192,   158,   171,
    -143,   194,  -143,  -143,  -143,   180,  -143,   181,  -143,   187,
     158,   190,   189,   184,   291,    18,   222,  -143,   158,   310,
     291,   196,   211,  -143,    21,  -143,   213,   215,  -143,   212,
     223,   219,   225,  -143,  -143,   232,   267,   202,   143,   250,
     252,   310,   253,   158,    21,  -143,   266,  -143,  -143,  -143,
    -143,  -143,   254,   257,   259,  -143,   158,  -143,   258,  -143
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -168,  -168,  -168,   -10,   334,   -79,   335,   336,   276,  -168,
    -168,   338,   339,  -168,  -168,   340,   341,  -168,  -168,    -1,
      -9,  -168,  -168,    93,     0,  -168,  -168,  -168,   248,   157,
    -167,  -168,   172,   232,   203,   -28,   -75
=======
    -143,  -143,  -143,   -10,   302,  -127,   303,   304,  -143,  -143,
    -143,   312,   313,  -143,  -143,   314,   321,  -143,  -143,    -1,
     295,  -143,  -143,    74,     0,  -143,  -143,  -143,   235,   146,
    -142,  -143,   159,   221,   220,   -28,   -75
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
<<<<<<< HEAD
#define YYTABLE_NINF -98
static const yytype_int16 yytable[] =
{
      39,    21,    25,    75,    41,    42,    43,    44,    45,    46,
      47,    48,    99,    50,    51,    52,   188,    59,   136,    35,
      64,   104,   216,   156,    32,    33,    27,     1,    34,    65,
     102,   238,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   239,    60,    95,   230,   101,   189,
     103,    36,   219,    36,    64,    36,    61,    62,   220,   129,
     130,   131,   132,    65,   195,    29,   137,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   -52,    60,    30,   -52,
     -52,    31,   -52,   -52,    53,    54,    55,    56,   -52,   100,
     -52,   -52,   141,    40,     5,     6,   160,   142,     7,   -94,
      57,   -52,   -52,     8,    62,    10,    11,    49,   -94,   173,
     -52,   -60,    76,   106,   194,   -52,   -21,   -21,    96,    87,
      88,    89,    90,    77,   119,   143,    97,    91,    98,    92,
     -21,   193,   226,    93,   196,    94,   120,   141,   -95,     5,
       6,   121,   142,     7,   234,   207,   -96,   -95,     8,    62,
      10,    11,   240,   133,   138,   -96,   245,   242,    87,    88,
      89,    90,   -21,    66,    67,    68,    69,    70,   256,   257,
     143,    71,    72,   139,    94,   -21,   242,   141,   -97,     5,
       6,   218,   142,     7,   -92,   266,   155,   -97,     8,    62,
      10,    11,   158,   -92,     3,     4,   157,     5,     6,   237,
     225,     7,   -93,   197,   174,   243,     8,     9,    10,    11,
     143,   -93,   208,   190,   191,   -21,   214,   211,   141,   210,
       5,     6,   212,   142,     7,   217,   221,   222,    12,     8,
      62,    10,    11,   107,   108,   109,   110,   111,   112,   223,
     224,   229,   -21,   227,   262,   107,   108,   109,   110,   111,
     112,   143,    78,    79,    80,    81,    82,   192,   231,   113,
      83,   114,   115,   116,   117,   118,   233,   232,   235,   252,
     188,   113,   251,   114,   115,   116,   117,   118,   107,   108,
     109,   110,   111,   112,    87,    88,    89,    90,    66,    67,
      68,    69,    70,   236,    92,   244,    71,   254,    93,   247,
      94,   248,   249,   250,   113,   253,   114,   115,   116,   117,
     118,   176,   177,   178,   179,   180,   258,   267,   259,   181,
     123,   124,   125,   126,   127,   128,   182,   183,   184,   185,
     186,   187,   261,   263,   264,   265,    14,    15,    16,   105,
      17,    18,    19,    20,   260,   140,   215,   213,     0,     0,
       0,     0,     0,   175
=======
#define YYTABLE_NINF -99
static const yytype_int16 yytable[] =
{
      39,    21,    25,    75,    41,    42,    43,    44,    45,    46,
      47,    48,    99,    50,    51,    52,   194,    59,   136,   197,
     198,   199,   200,   201,   202,   203,   204,   205,     1,    65,
     102,    35,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   237,   -95,   213,   187,   101,   -96,
     103,   104,   156,    49,   -95,    27,    95,   238,   -96,   129,
     130,   131,   132,    36,   -53,    60,   137,   -53,   -53,   227,
     -53,   -53,    87,    88,    89,    90,   -53,   100,   -53,   -53,
     188,   223,    92,    36,    36,   -97,    93,    29,    94,   -53,
     -53,   -98,    30,   231,   -97,   -93,   159,   -94,   -53,   -61,
     -98,   239,    31,   -53,   -93,   141,   -94,     5,     6,   172,
     142,     7,    60,    40,   193,    98,     8,    62,    10,    11,
     256,   257,   216,    61,    62,    96,   262,    76,   217,   -20,
     -20,   192,    77,    97,   195,   105,    32,    33,   143,   268,
      34,   121,   106,   -20,   141,   206,     5,     6,   119,   142,
       7,   120,   133,   138,   241,     8,    62,    10,    11,   141,
     139,     5,     6,   155,   142,     7,   157,   158,   173,   -20,
       8,    62,    10,    11,   189,   196,   241,   143,   190,   208,
     215,   207,   -20,   209,   214,   211,     3,     4,   218,     5,
       6,   219,   143,     7,   220,   224,   236,   -20,     8,     9,
      10,    11,   242,   141,   221,     5,     6,   226,   142,     7,
      53,    54,    55,    56,     8,    62,    10,    11,   228,   229,
      12,   232,   230,   235,   245,   234,    57,   -20,   107,   108,
     109,   110,   111,   112,   187,   243,   143,   107,   108,   109,
     110,   111,   112,   244,   263,   107,   108,   109,   110,   111,
     112,   249,   191,   247,   113,   248,   114,   115,   116,   117,
     118,   252,   250,   113,   251,   114,   115,   116,   117,   118,
     253,   113,   254,   114,   115,   116,   117,   118,    87,    88,
      89,    90,    87,    88,    89,    90,    91,   258,    92,   259,
     261,   264,    93,   265,    94,   266,   267,   269,    94,    66,
      67,    68,    69,    70,    14,    15,    16,    71,    72,    78,
      79,    80,    81,    82,    17,    18,    19,    83,    66,    67,
      68,    69,    70,    20,    64,   260,    71,   175,   176,   177,
     178,   179,   140,   210,   212,   180,   123,   124,   125,   126,
     127,   128,   174,   181,   182,   183,   184,   185,   186
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
};

static const yytype_uint16 yycheck[] =
{
      10,     2,     2,    31,    14,    15,    16,    17,    18,    19,
<<<<<<< HEAD
      20,    21,    40,    23,    24,    25,    12,    27,    93,    12,
      29,    12,   189,    12,    31,    32,    34,    33,    35,    29,
      58,    26,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    39,     1,    12,   214,    49,    45,
      60,    44,    37,    44,    63,    44,    12,    13,    43,    87,
      88,    89,    90,    63,   143,    35,    94,   146,   147,   148,
     149,   150,   151,   152,   153,   154,     0,     1,    35,     3,
       4,    35,     6,     7,    27,    28,    29,    30,    12,    13,
      14,    15,     1,    35,     3,     4,   106,     6,     7,    36,
      43,    25,    26,    12,    13,    14,    15,    37,    45,   119,
      34,    37,    37,    36,   142,    39,    25,    26,    37,    27,
      28,    29,    30,    37,    36,    34,    45,    35,    38,    37,
      39,   141,   211,    41,   144,    43,    36,     1,    36,     3,
       4,    45,     6,     7,   223,   155,    36,    45,    12,    13,
      14,    15,   231,    13,    37,    45,   235,   232,    27,    28,
      29,    30,    26,     8,     9,    10,    11,    12,   247,   248,
      34,    16,    17,    12,    43,    39,   251,     1,    36,     3,
       4,   191,     6,     7,    36,   264,    36,    45,    12,    13,
      14,    15,    12,    45,     0,     1,    37,     3,     4,   227,
     210,     7,    36,    39,    37,   233,    12,    13,    14,    15,
      34,    45,    31,    36,    36,    39,    45,    38,     1,    36,
       3,     4,    38,     6,     7,    37,    37,    15,    34,    12,
      13,    14,    15,    18,    19,    20,    21,    22,    23,    38,
      32,    13,    25,    24,   254,    18,    19,    20,    21,    22,
      23,    34,     8,     9,    10,    11,    12,    42,    38,    44,
      16,    46,    47,    48,    49,    50,    35,    38,    38,    36,
      12,    44,    45,    46,    47,    48,    49,    50,    18,    19,
      20,    21,    22,    23,    27,    28,    29,    30,     8,     9,
      10,    11,    12,    39,    37,    39,    16,     5,    41,    40,
      43,    40,    39,    39,    44,    39,    46,    47,    48,    49,
      50,     8,     9,    10,    11,    12,    37,    39,    37,    16,
      18,    19,    20,    21,    22,    23,   123,   124,   125,   126,
     127,   128,    37,    25,    38,    37,     2,     2,     2,    63,
       2,     2,     2,     2,   251,    97,   189,   175,    -1,    -1,
      -1,    -1,    -1,   121
=======
      20,    21,    40,    23,    24,    25,   143,    27,    93,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    33,    29,
      58,    12,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,    26,    36,   188,    12,    49,    36,
      60,    12,    12,    37,    45,    34,    12,    39,    45,    87,
      88,    89,    90,    44,     0,     1,    94,     3,     4,   211,
       6,     7,    27,    28,    29,    30,    12,    13,    14,    15,
      45,   208,    37,    44,    44,    36,    41,    35,    43,    25,
      26,    36,    35,   220,    45,    36,   106,    36,    34,    37,
      45,   228,    35,    39,    45,     1,    45,     3,     4,   119,
       6,     7,     1,    35,   142,    38,    12,    13,    14,    15,
     247,   248,    37,    12,    13,    37,   253,    37,    43,    25,
      26,   141,    37,    45,   144,    37,    31,    32,    34,   266,
      35,    45,    36,    39,     1,   155,     3,     4,    36,     6,
       7,    36,    13,    37,   229,    12,    13,    14,    15,     1,
      12,     3,     4,    36,     6,     7,    37,    12,    37,    26,
      12,    13,    14,    15,    36,    39,   251,    34,    36,    38,
     190,    37,    39,    38,    37,    45,     0,     1,    37,     3,
       4,    15,    34,     7,    38,    24,   224,    39,    12,    13,
      14,    15,   230,     1,    12,     3,     4,    13,     6,     7,
      27,    28,    29,    30,    12,    13,    14,    15,    38,    38,
      34,    31,    35,    39,   234,    36,    43,    25,    18,    19,
      20,    21,    22,    23,    12,    39,    34,    18,    19,    20,
      21,    22,    23,    32,   254,    18,    19,    20,    21,    22,
      23,    39,    42,    40,    44,    40,    46,    47,    48,    49,
      50,    36,    39,    44,    45,    46,    47,    48,    49,    50,
      38,    44,     5,    46,    47,    48,    49,    50,    27,    28,
      29,    30,    27,    28,    29,    30,    35,    37,    37,    37,
      37,    25,    41,    39,    43,    38,    37,    39,    43,     8,
       9,    10,    11,    12,     2,     2,     2,    16,    17,     8,
       9,    10,    11,    12,     2,     2,     2,    16,     8,     9,
      10,    11,    12,     2,    29,   251,    16,     8,     9,    10,
      11,    12,    97,   174,   188,    16,    18,    19,    20,    21,
      22,    23,   121,   123,   124,   125,   126,   127,   128
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    52,     0,     1,     3,     4,     7,    12,    13,
      14,    15,    34,    53,    55,    57,    58,    62,    63,    66,
      67,    70,    71,    72,    73,    75,    77,    34,    54,    35,
      35,    35,    31,    32,    35,    12,    44,    78,    79,    54,
      35,    54,    54,    54,    54,    54,    54,    54,    54,    37,
      54,    54,    54,    27,    28,    29,    30,    43,    76,    54,
       1,    12,    13,    59,    71,    75,     8,     9,    10,    11,
      12,    16,    17,    86,    87,    86,    37,    37,     8,     9,
      10,    11,    12,    16,    82,    84,    85,    27,    28,    29,
      30,    35,    37,    41,    43,    12,    37,    45,    38,    86,
<<<<<<< HEAD
      13,    70,    86,    54,    12,    59,    36,    18,    19,    20,
=======
      13,    70,    86,    54,    12,    37,    36,    18,    19,    20,
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
      21,    22,    23,    44,    46,    47,    48,    49,    50,    36,
      36,    45,    83,    18,    19,    20,    21,    22,    23,    86,
      86,    86,    86,    13,    80,    81,    87,    86,    37,    12,
      79,     1,     6,    34,    55,    56,    57,    58,    62,    63,
<<<<<<< HEAD
      66,    67,    69,    70,    75,    36,    12,    37,    12,    60,
      54,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    54,    37,    84,     8,     9,    10,    11,
      12,    16,    85,    85,    85,    85,    85,    85,    12,    45,
      36,    36,    42,    54,    86,    56,    54,    39,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    54,    31,    61,
      36,    38,    38,    83,    45,    80,    81,    37,    54,    37,
      43,    37,    15,    38,    32,    54,    56,    24,    68,    13,
      81,    38,    38,    35,    56,    38,    39,    86,    26,    39,
      56,    74,    87,    86,    39,    56,    64,    40,    40,    39,
      39,    45,    36,    39,     5,    65,    56,    56,    37,    37,
      74,    37,    54,    25,    38,    37,    56,    39
=======
      66,    67,    69,    70,    75,    36,    12,    37,    12,    54,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    54,    37,    84,     8,     9,    10,    11,    12,
      16,    85,    85,    85,    85,    85,    85,    12,    45,    36,
      36,    42,    54,    86,    56,    54,    39,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    54,    37,    38,    38,
      83,    45,    80,    81,    37,    54,    37,    43,    37,    15,
      38,    12,    60,    56,    24,    68,    13,    81,    38,    38,
      35,    56,    31,    61,    36,    39,    86,    26,    39,    56,
      74,    87,    86,    39,    32,    54,    64,    40,    40,    39,
      39,    45,    36,    38,     5,    65,    56,    56,    37,    37,
      74,    37,    56,    54,    25,    39,    38,    37,    56,    39
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
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
        case 3:

/* Line 1455 of yacc.c  */
#line 89 "../src/integrador.y"
    { agregarErrorLexico((yyvsp[(1) - (1)].s.cadena));;}
    break;

<<<<<<< HEAD
  case 5:

/* Line 1455 of yacc.c  */
#line 92 "../src/integrador.y"
    {my_line++;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 104 "../src/integrador.y"
    { yyerrok;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 109 "../src/integrador.y"
    {my_line++;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 113 "../src/integrador.y"
    {if(verificaFuncion((yyvsp[(1) - (5)].s.cadena))){printf( "Se incovoco correcamente a la funcion %s \n",(yyvsp[(1) - (5)].s.cadena));};}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 129 "../src/integrador.y"
    {my_line++;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 131 "../src/integrador.y"
    {printf( "Se ha declarado una sentencia do-while \n");;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 134 "../src/integrador.y"
    {printf("Se ha declarado una sentencia for\n");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 144 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (2)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (2)].s.cadena), "se intento incrementar/decrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (2)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (2)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (2)].s.cadena), "se intento incrementar una varibale no operable");}};}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 151 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (3)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento incrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (3)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (3)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento incrementar una varibale no operable");}};}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 152 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (3)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento decrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (3)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (3)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento decrementar una varibale no operable");}};}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 156 "../src/integrador.y"
    {printf ("Se declaro un if \n");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 157 "../src/integrador.y"
    { yyerrok; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 161 "../src/integrador.y"
    {printf ("Se declaron un else \n");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 164 "../src/integrador.y"
=======
  case 4:

/* Line 1455 of yacc.c  */
#line 89 "../src/integrador.y"
    {my_line++;;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 101 "../src/integrador.y"
    { yyerrok;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 106 "../src/integrador.y"
    {my_line++;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 110 "../src/integrador.y"
    {if(verificaFuncion((yyvsp[(1) - (5)].s.cadena))){printf( "Se incovoco correcamente a la funcion %s \n",(yyvsp[(1) - (5)].s.cadena));};}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 126 "../src/integrador.y"
    {my_line++;;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 128 "../src/integrador.y"
    {printf( "Se ha declarado una sentencia do-while \n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 131 "../src/integrador.y"
    {printf("Se ha declarado una sentencia for\n");;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 141 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (2)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (2)].s.cadena), "se intento incrementar/decrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (2)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (2)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (2)].s.cadena), "se intento incrementar una varibale no operable");}};}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 148 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (3)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento incrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (3)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (3)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento incrementar una varibale no operable");}};}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 149 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (3)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento decrementar una variable no existente");}else{if (esNumerica((yyvsp[(1) - (3)].s.cadena))){printf("Se ha incrementado la variable %s \n", (yyvsp[(1) - (3)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (3)].s.cadena), "se intento decrementar una varibale no operable");}};}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 153 "../src/integrador.y"
    {printf ("Se declaro un if \n");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 154 "../src/integrador.y"
    { yyerrok; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 158 "../src/integrador.y"
    {printf ("Se declaron un else \n");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 161 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {printf ("Se declaro un while \n");;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 168 "../src/integrador.y"
=======
#line 166 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {printf ("Se declaro un switch \n");;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 173 "../src/integrador.y"
=======
#line 171 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {printf ("Se declaro un case \n");;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 174 "../src/integrador.y"
    {printf ("Se declaro el default \n");;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 177 "../src/integrador.y"
    {printf ("Se declaro un return \n ");;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 185 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (3)].s.cadena), (yyvsp[(1) - (3)].s.tipo));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 187 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (6)].s.cadena), (yyvsp[(1) - (6)].s.tipo));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 188 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (10)].s.cadena), (yyvsp[(1) - (10)].s.tipo));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 189 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (4)].s.cadena), (yyvsp[(1) - (4)].s.tipo));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 190 "../src/integrador.y"
    { yyerrok; ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 194 "../src/integrador.y"
    {agregarFuncion((yyvsp[(1) - (10)].s.tipo),(yyvsp[(2) - (10)].s.cadena),1);}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 197 "../src/integrador.y"
    {agregarFuncion((yyvsp[(1) - (6)].s.tipo),(yyvsp[(2) - (6)].s.cadena),0);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 205 "../src/integrador.y"
    {if(!flag()){printf("y se le asigno (podria cambiarse a algo mas general) %s \n ",(yyvsp[(3) - (4)].s.cadena));}else{bajarFlag();};}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 218 "../src/integrador.y"
    {printf("aber ci yega");agregarIdentificador((yyvsp[(2) - (2)].s.cadena),(yyvsp[(1) - (2)].s.tipo));printf("Se declaro  %s del tipo %s  ",(yyvsp[(2) - (2)].s.cadena),(yyvsp[(1) - (2)].s.cadena));;}
=======
#line 172 "../src/integrador.y"
    {printf ("Se declaro el default \n");;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 176 "../src/integrador.y"
    {printf ("Se declaro un return \n ");;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 184 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (3)].s.cadena), (yyvsp[(1) - (3)].s.tipo));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 186 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (6)].s.cadena), (yyvsp[(1) - (6)].s.tipo));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 187 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (10)].s.cadena), (yyvsp[(1) - (10)].s.tipo));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 188 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(2) - (4)].s.cadena), (yyvsp[(1) - (4)].s.tipo));;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 189 "../src/integrador.y"
    { yyerrok; ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 193 "../src/integrador.y"
    {agregarFuncion((yyvsp[(1) - (10)].s.tipo),(yyvsp[(2) - (10)].s.cadena),1);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 196 "../src/integrador.y"
    {agregarFuncion((yyvsp[(1) - (6)].s.tipo),(yyvsp[(2) - (6)].s.cadena),0);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 204 "../src/integrador.y"
    {if(!flag()){printf("y se le asigno (podria cambiarse a algo mas general) %s \n ",(yyvsp[(3) - (4)].s.cadena));}else{bajarFlag();};}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 72:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 219 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (1)].s.cadena))!=NULL){printf ("Se declaro %s o ",(yyvsp[(1) - (1)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (1)].s.cadena),"debido a que no fue declarado");levantarFlag();};}
=======
#line 215 "../src/integrador.y"
    {printf("aber ci yega");agregarIdentificador((yyvsp[(2) - (2)].s.cadena),(yyvsp[(1) - (2)].s.tipo));printf("Se declaro  %s del tipo %s  ",(yyvsp[(2) - (2)].s.cadena),(yyvsp[(1) - (2)].s.cadena));;}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 75:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 227 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (1)].s.cadena),mostrarUltimoDato());;}
=======
#line 216 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (1)].s.cadena))!=NULL){printf ("Se declaro %s o ",(yyvsp[(1) - (1)].s.cadena));}else{agregarErrorSemanticoIdentificadores((yyvsp[(1) - (1)].s.cadena),"debido a que no fue declarado");levantarFlag();};}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 76:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 228 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
=======
#line 226 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (1)].s.cadena),mostrarUltimoDato());;}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 77:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 229 "../src/integrador.y"
=======
#line 227 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 230 "../src/integrador.y"
=======
#line 228 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 231 "../src/integrador.y"
=======
#line 229 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 232 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 237 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
=======
#line 230 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 231 "../src/integrador.y"
    {agregarIdentificador((yyvsp[(1) - (3)].s.cadena),mostrarUltimoDato());;}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 83:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 238 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (3)].s.tipo));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 245 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (2)].s.tipo));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 246 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (4)].s.tipo));;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 258 "../src/integrador.y"
    {int tipo=buscarTipo((yyvsp[(1) - (1)].s.cadena));if(tipo>=0){agregarParametro(tipo);}/* else{} */;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 259 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
=======
#line 236 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 237 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (3)].s.tipo));;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 244 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (2)].s.tipo));;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 245 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (4)].s.tipo));;}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 93:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 260 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
=======
#line 257 "../src/integrador.y"
    {int tipo=buscarTipo((yyvsp[(1) - (1)].s.cadena));if(tipo>=0){agregarParametro(tipo);}/* else{} */;}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 258 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 261 "../src/integrador.y"
=======
#line 259 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 262 "../src/integrador.y"
=======
#line 260 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 263 "../src/integrador.y"
=======
#line 261 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 264 "../src/integrador.y"
    {agregarParametro(1);;}
=======
#line 262 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 99:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 265 "../src/integrador.y"
=======
#line 263 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarParametro(1);;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 266 "../src/integrador.y"
=======
#line 264 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarParametro(1);;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 267 "../src/integrador.y"
=======
#line 265 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarParametro(1);;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 268 "../src/integrador.y"
    {agregarParametro(0);;}
=======
#line 266 "../src/integrador.y"
    {agregarParametro(1);;}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 103:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 269 "../src/integrador.y"
=======
#line 267 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarParametro(0);;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 273 "../src/integrador.y"
    {int tipo=buscarTipo((yyvsp[(1) - (1)].s.cadena));if(tipo>=0){agregarParametro(tipo);}/* else{} */;}
=======
#line 268 "../src/integrador.y"
    {agregarParametro(0);;}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 105:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 274 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
=======
#line 272 "../src/integrador.y"
    {int tipo=buscarTipo((yyvsp[(1) - (1)].s.cadena));if(tipo>=0){agregarParametro(tipo);}/* else{} */;}
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    break;

  case 106:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 275 "../src/integrador.y"
=======
#line 273 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 276 "../src/integrador.y"
=======
#line 274 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 277 "../src/integrador.y"
=======
#line 275 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 276 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
<<<<<<< HEAD
#line 278 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 287 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (1)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (1)].s.cadena),"se intento incrementar una variable ");};}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 289 "../src/integrador.y"
    {int tipo1=calcularTipo((yyvsp[(1) - (3)].s.cadena), (yyvsp[(1) - (3)].s.tipo)); int tipo2=calcularTipo((yyvsp[(3) - (3)].s.cadena), (yyvsp[(3) - (3)].s.tipo)); if(sonOperablesODelMismoTipo(tipo1,tipo2)){printf ("Se escribio una expresion usando una suma \n");}else{agregarErrorDeTipos((yyvsp[(1) - (3)].s.cadena), tipo1, '+' ,(yyvsp[(3) - (3)].s.cadena), tipo2);};}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 290 "../src/integrador.y"
    {printf ("Se escribio una expresion usando una resta \n");;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 291 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 292 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 293 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de igualdad \n");;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 294 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 295 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 296 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de distinto \n");;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 297 "../src/integrador.y"
    {printf ("Se escribio una expresion con la operacion logica and \n");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 298 "../src/integrador.y"
    {printf ("Se escribio una expresion con la operacion logica or \n");;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 303 "../src/integrador.y"
    {printf ("Se escribio una expresion  \n");;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 304 "../src/integrador.y"
=======
#line 277 "../src/integrador.y"
    {agregarParametro((yyvsp[(1) - (1)].s.tipo));;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 286 "../src/integrador.y"
    {if(idYaSeDeclaro((yyvsp[(1) - (1)].s.cadena))==NULL){agregarErrorSemanticoIdentificadores((yyvsp[(1) - (1)].s.cadena),"se intento incrementar una variable ");};}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 288 "../src/integrador.y"
    {int tipo1=calcularTipo((yyvsp[(1) - (3)].s.cadena), (yyvsp[(1) - (3)].s.tipo)); int tipo2=calcularTipo((yyvsp[(3) - (3)].s.cadena), (yyvsp[(3) - (3)].s.tipo)); if(sonOperablesODelMismoTipo(tipo1,tipo2)){printf ("Se escribio una expresion usando una suma \n");}else{agregarErrorDeTipos((yyvsp[(1) - (3)].s.cadena), tipo1, '+' ,(yyvsp[(3) - (3)].s.cadena), tipo2);};}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 289 "../src/integrador.y"
    {printf ("Se escribio una expresion usando una resta \n");;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 290 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 291 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 292 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de igualdad \n");;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 293 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 294 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de desigualdad \n");;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 295 "../src/integrador.y"
    {printf ("Se escribio una expresion con signo de distinto \n");;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 296 "../src/integrador.y"
    {printf ("Se escribio una expresion con la operacion logica and \n");;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 297 "../src/integrador.y"
    {printf ("Se escribio una expresion con la operacion logica or \n");;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 302 "../src/integrador.y"
    {printf ("Se escribio una expresion  \n");;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 303 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c
    {printf ("Se escribio una expresion  \n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2128 "integrador.tab.c"
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
<<<<<<< HEAD
#line 310 "../src/integrador.y"
=======
#line 309 "../src/integrador.y"
>>>>>>> 555de7aac7bac6b5c03a851661cbe9bb78abc05c


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


