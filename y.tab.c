/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     DOUBLE = 262,
     LONG = 263,
     SHORT = 264,
     SIGNED = 265,
     UNSIGNED = 266,
     STRUCT = 267,
     RETURN = 268,
     MAIN = 269,
     VOID = 270,
     WHILE = 271,
     FOR = 272,
     DO = 273,
     BREAK = 274,
     CONTINUE = 275,
     GOTO = 276,
     ENDIF = 277,
     SWITCH = 278,
     CASE = 279,
     DEFAULT = 280,
     identifier = 281,
     array_identifier = 282,
     integer_constant = 283,
     string_constant = 284,
     float_constant = 285,
     character_constant = 286,
     ELSE = 287,
     MOD_EQUAL = 288,
     DIVIDE_EQUAL = 289,
     MULTIPLY_EQUAL = 290,
     SUBTRACT_EQUAL = 291,
     ADD_EQUAL = 292,
     OR_OR = 293,
     AND_AND = 294,
     NOT_EQUAL = 295,
     EQUAL = 296,
     GREAT = 297,
     GREAT_EQUAL = 298,
     LESS = 299,
     LESS_EQUAL = 300,
     SIZEOF = 301,
     NOT = 302,
     DECREMENT = 303,
     INCREMENT = 304
   };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define CONTINUE 275
#define GOTO 276
#define ENDIF 277
#define SWITCH 278
#define CASE 279
#define DEFAULT 280
#define identifier 281
#define array_identifier 282
#define integer_constant 283
#define string_constant 284
#define float_constant 285
#define character_constant 286
#define ELSE 287
#define MOD_EQUAL 288
#define DIVIDE_EQUAL 289
#define MULTIPLY_EQUAL 290
#define SUBTRACT_EQUAL 291
#define ADD_EQUAL 292
#define OR_OR 293
#define AND_AND 294
#define NOT_EQUAL 295
#define EQUAL 296
#define GREAT 297
#define GREAT_EQUAL 298
#define LESS 299
#define LESS_EQUAL 300
#define SIZEOF 301
#define NOT 302
#define DECREMENT 303
#define INCREMENT 304




/* Copy the first part of user declarations.  */
#line 1 "parser1.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void insert_type();
	void insert_value();
	void insert_dimensions();
	void insert_parameters();
	void remove_scope (int );
	int check_scope(char*);
	int check_function(char *);
	void insert_SymbolTable_nest(char*, int);
	void insert_SymbolTable_paramscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int check_array(char*);
	void insert_SymbolTable_function(char*);
	char gettype(char*,int);

	extern int flag=0;
	int insert_flag = 0;

	extern char current_identifier[20];
	extern char current_type[20];
	extern char current_value[20];
    extern char current_function[20];
	extern char previous_operator[20];
	extern int current_nested_val;
	char currfunctype[100];
	char currfunccall[100];
	extern int params_count;
	int call_params_count;



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 245 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNRULES -- Number of states.  */
#define YYNSTATES  237

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    52,     2,     2,
      63,    64,    50,    48,    60,    49,     2,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
      35,    36,    37,    39,    40,    42,    43,    44,    45,    46,
      47,    53,    54,    55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    16,
      24,    27,    28,    32,    34,    38,    41,    44,    45,    46,
      50,    51,    55,    57,    58,    62,    65,    66,    67,    72,
      75,    77,    79,    80,    81,    85,    86,    92,    95,    98,
      99,   101,   103,   105,   107,   110,   113,   116,   119,   121,
     123,   126,   129,   130,   132,   135,   138,   139,   141,   142,
     144,   145,   148,   152,   156,   157,   161,   162,   165,   168,
     169,   170,   174,   177,   178,   180,   182,   184,   186,   188,
     190,   192,   193,   198,   201,   202,   205,   207,   208,   216,
     219,   220,   221,   228,   229,   238,   239,   248,   250,   253,
     255,   258,   262,   265,   269,   273,   277,   281,   285,   289,
     292,   295,   297,   301,   303,   307,   309,   312,   314,   318,
     320,   322,   324,   326,   328,   330,   332,   336,   338,   340,
     342,   346,   348,   350,   352,   354,   356,   358,   360,   361,
     367,   371,   373,   375,   376,   382,   384,   385,   386,   390,
     391,   396,   397,   399,   401,   403
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      66,     0,    -1,    67,    -1,    68,    67,    -1,    -1,    72,
      -1,    96,    -1,    69,    -1,    -1,    12,    26,    70,    57,
      71,    58,    59,    -1,    72,    71,    -1,    -1,    91,    74,
      59,    -1,    73,    -1,    12,    26,    74,    -1,    76,    75,
      -1,    60,    74,    -1,    -1,    -1,    26,    77,    79,    -1,
      -1,    27,    78,    79,    -1,    81,    -1,    -1,    38,    80,
     122,    -1,    61,    82,    -1,    -1,    -1,    28,    83,    62,
      84,    -1,    62,    85,    -1,    85,    -1,    87,    -1,    -1,
      -1,    38,    86,    29,    -1,    -1,    38,    88,    57,    89,
      58,    -1,    28,    90,    -1,    60,    89,    -1,    -1,     4,
      -1,     5,    -1,     6,    -1,     7,    -1,     8,    94,    -1,
       9,    95,    -1,    11,    92,    -1,    10,    93,    -1,    15,
      -1,     4,    -1,     8,    94,    -1,     9,    95,    -1,    -1,
       4,    -1,     8,    94,    -1,     9,    95,    -1,    -1,     4,
      -1,    -1,     4,    -1,    -1,    97,    98,    -1,    91,    26,
      63,    -1,    99,    64,   106,    -1,    -1,    91,   100,   101,
      -1,    -1,   103,   102,    -1,    60,    99,    -1,    -1,    -1,
      26,   104,   105,    -1,    61,    62,    -1,    -1,   110,    -1,
     107,    -1,   111,    -1,   114,    -1,   119,    -1,   120,    -1,
      72,    -1,    -1,   108,    57,   109,    58,    -1,   106,   109,
      -1,    -1,   121,    59,    -1,    59,    -1,    -1,     3,    63,
     122,    64,   112,   106,   113,    -1,    32,   106,    -1,    -1,
      -1,    16,    63,   122,    64,   115,   106,    -1,    -1,    17,
      63,   118,   122,    59,   116,   121,    64,    -1,    -1,    18,
     106,    16,    63,   122,    64,   117,    59,    -1,    72,    -1,
     121,    59,    -1,    59,    -1,    13,    59,    -1,    13,   121,
      59,    -1,    19,    59,    -1,   132,    38,   121,    -1,   132,
      37,   121,    -1,   132,    36,   121,    -1,   132,    35,   121,
      -1,   132,    34,   121,    -1,   132,    33,   121,    -1,   132,
      56,    -1,   132,    55,    -1,   122,    -1,   122,    39,   123,
      -1,   123,    -1,   123,    40,   124,    -1,   124,    -1,    54,
     124,    -1,   125,    -1,   125,   126,   127,    -1,   127,    -1,
      45,    -1,    47,    -1,    44,    -1,    46,    -1,    43,    -1,
      42,    -1,   127,   128,   129,    -1,   129,    -1,    48,    -1,
      49,    -1,   129,   130,   131,    -1,   131,    -1,    50,    -1,
      51,    -1,    52,    -1,   134,    -1,   132,    -1,    26,    -1,
      -1,    27,   133,    61,   121,    62,    -1,    63,   121,    64,
      -1,   135,    -1,   142,    -1,    -1,    26,    63,   136,   137,
      64,    -1,   138,    -1,    -1,    -1,   121,   139,   140,    -1,
      -1,    60,   121,   141,   140,    -1,    -1,    28,    -1,    29,
      -1,    30,    -1,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    82,    83,    87,    88,    89,    92,    92,
      94,    94,    97,    98,   101,   104,   107,   108,   111,   111,
     114,   114,   116,   116,   116,   119,   120,   123,   123,   124,
     127,   128,   129,   132,   132,   135,   135,   138,   141,   142,
     146,   146,   146,   146,   147,   148,   149,   150,   151,   154,
     154,   154,   154,   157,   157,   157,   157,   160,   160,   163,
     163,   166,   169,   172,   175,   175,   175,   178,   181,   182,
     185,   185,   188,   189,   192,   192,   193,   193,   194,   194,
     195,   198,   198,   201,   202,   205,   206,   209,   209,   212,
     213,   216,   216,   217,   217,   218,   218,   221,   222,   223,
     226,   227,   240,   244,   252,   258,   265,   271,   277,   284,
     285,   286,   290,   291,   294,   295,   298,   299,   302,   303,
     306,   307,   308,   309,   310,   311,   314,   315,   318,   319,
     322,   323,   326,   326,   326,   329,   330,   333,   343,   343,
     351,   352,   353,   356,   356,   374,   374,   377,   377,   380,
     380,   381,   384,   385,   386,   387
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "RETURN", "MAIN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "CONTINUE", "GOTO", "ENDIF",
  "SWITCH", "CASE", "DEFAULT", "identifier", "array_identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "MOD_EQUAL", "DIVIDE_EQUAL",
  "MULTIPLY_EQUAL", "SUBTRACT_EQUAL", "ADD_EQUAL", "'='", "OR_OR",
  "AND_AND", "'^'", "NOT_EQUAL", "EQUAL", "GREAT", "GREAT_EQUAL", "LESS",
  "LESS_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "SIZEOF", "NOT",
  "DECREMENT", "INCREMENT", "'{'", "'}'", "';'", "','", "'['", "']'",
  "'('", "')'", "$accept", "begin_parse", "declarations", "declaration",
  "structure_dec", "@1", "structure_content", "variable_dec",
  "structure_initialize", "variables", "multiple_variables",
  "identifier_name", "@2", "@3", "extended_identifier", "@4", "array_iden",
  "array_dims", "@5", "initilization", "string_initilization", "@6",
  "array_initialization", "@7", "array_values", "multiple_array_values",
  "datatype", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_dec", "function_datatype",
  "function_parameters", "parameters", "@8", "all_parameter_identifiers",
  "multiple_parameters", "parameter_identifier", "@9",
  "extended_parameter", "statement", "multiple_statement", "@10",
  "statments", "expression_statment", "conditional_statements", "@11",
  "extended_conditional_statements", "iterative_statements", "@12", "@13",
  "@14", "for_initialization", "return_statement", "break_statement",
  "expression", "simple_expression", "and_expression",
  "unary_relation_expression", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "@15", "immutable", "call", "@16",
  "arguments", "arguments_list", "@17", "A", "@18", "constant", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,    61,   293,
     294,    94,   295,   296,   297,   298,   299,   300,    43,    45,
      42,    47,    37,   301,   302,   303,   304,   123,   125,    59,
      44,    91,    93,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    70,    69,
      71,    71,    72,    72,    73,    74,    75,    75,    77,    76,
      78,    76,    79,    80,    79,    81,    81,    83,    82,    82,
      84,    84,    84,    86,    85,    88,    87,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    93,    93,    93,    93,    94,    94,    95,
      95,    96,    97,    98,   100,    99,    99,   101,   102,   102,
     104,   103,   105,   105,   106,   106,   106,   106,   106,   106,
     106,   108,   107,   109,   109,   110,   110,   112,   111,   113,
     113,   115,   114,   116,   114,   117,   114,   118,   118,   118,
     119,   119,   120,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   126,   126,   126,   126,   127,   127,   128,   128,
     129,   129,   130,   130,   130,   131,   131,   132,   133,   132,
     134,   134,   134,   136,   135,   137,   137,   139,   138,   141,
     140,   140,   142,   142,   142,   142
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     7,
       2,     0,     3,     1,     3,     2,     2,     0,     0,     3,
       0,     3,     1,     0,     3,     2,     0,     0,     4,     2,
       1,     1,     0,     0,     3,     0,     5,     2,     2,     0,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       2,     2,     0,     1,     2,     2,     0,     1,     0,     1,
       0,     2,     3,     3,     0,     3,     0,     2,     2,     0,
       0,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     2,     0,     2,     1,     0,     7,     2,
       0,     0,     6,     0,     8,     0,     8,     1,     2,     1,
       2,     3,     2,     3,     3,     3,     3,     3,     3,     2,
       2,     1,     3,     1,     3,     1,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       3,     1,     1,     0,     5,     1,     0,     0,     3,     0,
       4,     0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    40,    41,    42,    43,    58,    60,    56,    52,     0,
      48,     0,     2,     4,     7,     5,    13,     0,     6,    66,
      57,    44,    59,    45,    53,    58,    60,    47,    49,    58,
      60,    46,     8,     1,     3,    18,    20,     0,    17,    64,
      61,     0,    54,    55,    50,    51,    18,     0,    14,    62,
      26,    26,    12,     0,    15,     0,    81,    11,    23,     0,
      19,    22,    21,    16,    70,    65,    69,     0,     0,     0,
       0,     0,    81,     0,   137,   138,   152,   153,   154,   155,
       0,    86,     0,    80,     0,    63,    75,     0,    74,    76,
      77,    78,    79,     0,   111,   113,   115,   117,   119,   127,
     131,   136,   135,   141,   142,     0,    11,     0,    27,     0,
      25,    73,    66,    67,     0,     0,   100,     0,     0,     0,
       0,   102,   143,     0,   116,   136,     0,    81,    85,     0,
       0,   125,   124,   122,   120,   123,   121,     0,   128,   129,
       0,   132,   133,   134,     0,     0,     0,     0,     0,     0,
       0,   110,   109,     0,    10,    24,     0,    33,    29,     0,
      71,    68,     0,   101,     0,    99,    97,     0,     0,     0,
     146,     0,   140,    81,     0,   112,   114,   118,   126,   130,
     108,   107,   106,   105,   104,   103,     9,    32,     0,    72,
      87,    91,     0,    98,     0,   147,     0,   145,     0,    83,
      82,    33,    28,    30,    31,    34,    81,    81,    93,     0,
     151,   144,   139,     0,    90,    92,     0,    95,     0,   148,
       0,    81,    88,     0,     0,   149,    39,     0,    89,    94,
      96,   151,     0,    37,    36,   150,    38
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    47,   105,    83,    16,    37,
      54,    38,    50,    51,    60,   107,    61,   110,   156,   202,
     158,   188,   204,   213,   227,   233,    84,    31,    27,    21,
      23,    18,    19,    40,    41,    55,    65,   113,    66,   111,
     160,   173,    86,    87,   174,    88,    89,   206,   222,    90,
     207,   216,   224,   167,    91,    92,    93,    94,    95,    96,
      97,   137,    98,   140,    99,   144,   100,   101,   123,   102,
     103,   170,   196,   197,   210,   219,   231,   104
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -105
static const yytype_int16 yypact[] =
{
     162,  -105,  -105,  -105,  -105,    15,    18,    39,    45,    12,
    -105,    60,  -105,   162,  -105,  -105,  -105,    -2,  -105,   256,
    -105,  -105,  -105,  -105,  -105,    15,    18,  -105,  -105,    15,
      18,  -105,    14,  -105,  -105,    -1,  -105,     5,    27,  -105,
    -105,    46,  -105,  -105,  -105,  -105,  -105,    21,  -105,  -105,
     -17,   -17,  -105,    14,  -105,    53,   190,   224,  -105,   -20,
    -105,  -105,  -105,  -105,  -105,  -105,    49,    48,    86,   184,
      50,    51,   190,    58,    55,  -105,  -105,  -105,  -105,  -105,
     196,  -105,   196,  -105,    14,  -105,  -105,    63,  -105,  -105,
    -105,  -105,  -105,    66,    87,    89,  -105,   230,    19,    47,
    -105,    67,  -105,  -105,  -105,    69,   224,   196,  -105,    92,
    -105,    70,   256,  -105,   196,    14,  -105,    84,   196,    65,
     133,  -105,  -105,   100,  -105,  -105,    98,   129,  -105,   196,
     196,  -105,  -105,  -105,  -105,  -105,  -105,     3,  -105,  -105,
       3,  -105,  -105,  -105,     3,   196,   196,   196,   196,   196,
     196,  -105,  -105,    94,  -105,    87,   101,  -105,  -105,   102,
    -105,  -105,   -28,  -105,   -27,  -105,  -105,   196,   116,   113,
     196,   196,  -105,   129,   120,    89,  -105,    19,    47,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,   141,   151,  -105,
    -105,  -105,   -13,  -105,   196,  -105,   117,  -105,   122,  -105,
    -105,   125,  -105,  -105,  -105,  -105,   190,   190,  -105,   -19,
     126,  -105,  -105,   128,   157,  -105,   196,  -105,   196,  -105,
     163,   190,  -105,   140,   131,  -105,   177,   182,  -105,  -105,
    -105,   126,   163,  -105,  -105,  -105,  -105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,   228,  -105,  -105,  -105,   136,     2,  -105,   -26,
    -105,  -105,  -105,  -105,   194,  -105,  -105,  -105,  -105,  -105,
      59,  -105,  -105,  -105,    16,  -105,     4,  -105,  -105,   -16,
      26,  -105,  -105,  -105,   139,  -105,  -105,  -105,  -105,  -105,
    -105,   -56,  -105,  -105,    79,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,   -64,  -104,   127,   -73,
    -105,  -105,   118,  -105,   114,  -105,   124,   -79,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,    38,  -105,  -105
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -85
static const yytype_int16 yytable[] =
{
      85,   125,    15,   155,    17,   117,    48,   124,   108,    42,
     162,   129,   129,    44,   164,    15,   120,    17,   126,    20,
     129,    58,    22,    39,    35,    36,   129,    63,   125,    74,
      75,    76,    77,    78,    79,   125,   190,   191,    32,   125,
      46,    36,   109,    24,    59,   217,   208,    25,    26,    28,
     125,   125,    43,    29,    30,   168,    45,   176,   125,   106,
      33,   125,    49,   192,    52,   125,    82,   138,   139,     1,
       2,     3,     4,     5,     6,     7,     8,    68,    57,    64,
      10,   180,   181,   182,   183,   184,   185,    53,   125,    48,
     209,    74,    75,    76,    77,    78,    79,   141,   142,   143,
     145,   146,   147,   148,   149,   150,   195,   198,   106,   112,
      56,   114,   115,   118,   119,   125,    39,   121,   122,    80,
     127,   166,   151,   152,   165,   128,   129,   153,    82,   130,
     157,   159,    67,     1,     2,     3,     4,     5,     6,     7,
       8,    68,    69,   163,    10,    70,    71,    72,    73,   169,
     214,   215,   223,   186,   225,    74,    75,    76,    77,    78,
      79,   171,   172,   187,   189,   228,     1,     2,     3,     4,
       5,     6,     7,     8,     9,   193,   194,    10,   200,   201,
     205,   211,   -35,    80,   212,   220,   218,   -84,    81,   221,
     230,   226,    82,    67,     1,     2,     3,     4,     5,     6,
       7,     8,    68,    69,   229,    10,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    74,    75,    76,    77,
      78,    79,    74,    75,    76,    77,    78,    79,     1,     2,
       3,     4,     5,     6,     7,     8,    68,   232,    80,    10,
     234,    34,   154,   116,    80,    62,   203,    82,   236,    81,
      80,   161,   199,    82,   178,   177,   175,     0,     0,    82,
       1,     2,     3,     4,     5,     6,     7,     8,   179,   235,
       0,    10,   131,   132,   133,   134,   135,   136
};

static const yytype_int16 yycheck[] =
{
      56,    80,     0,   107,     0,    69,    32,    80,    28,    25,
     114,    39,    39,    29,   118,    13,    72,    13,    82,     4,
      39,    38,     4,    19,    26,    27,    39,    53,   107,    26,
      27,    28,    29,    30,    31,   114,    64,    64,    26,   118,
      26,    27,    62,     4,    61,    64,    59,     8,     9,     4,
     129,   130,    26,     8,     9,   119,    30,   130,   137,    57,
       0,   140,    63,   167,    59,   144,    63,    48,    49,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    57,    26,
      15,   145,   146,   147,   148,   149,   150,    60,   167,   115,
     194,    26,    27,    28,    29,    30,    31,    50,    51,    52,
      33,    34,    35,    36,    37,    38,   170,   171,   106,    60,
      64,    63,    26,    63,    63,   194,   112,    59,    63,    54,
      57,   119,    55,    56,    59,    59,    39,    58,    63,    40,
      38,    61,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    59,    15,    16,    17,    18,    19,    16,
     206,   207,   216,    59,   218,    26,    27,    28,    29,    30,
      31,    61,    64,    62,    62,   221,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    59,    63,    15,    58,    38,
      29,    64,    57,    54,    62,    57,    60,    58,    59,    32,
      59,    28,    63,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    64,    15,    16,    17,    18,    19,
      26,    27,    28,    29,    30,    31,    26,    27,    28,    29,
      30,    31,    26,    27,    28,    29,    30,    31,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    60,    54,    15,
      58,    13,   106,    59,    54,    51,   187,    63,   232,    59,
      54,   112,   173,    63,   140,   137,   129,    -1,    -1,    63,
       4,     5,     6,     7,     8,     9,    10,    11,   144,   231,
      -1,    15,    42,    43,    44,    45,    46,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    66,    67,    68,    69,    72,    73,    91,    96,    97,
       4,    94,     4,    95,     4,     8,     9,    93,     4,     8,
       9,    92,    26,     0,    67,    26,    27,    74,    76,    91,
      98,    99,    94,    95,    94,    95,    26,    70,    74,    63,
      77,    78,    59,    60,    75,   100,    64,    57,    38,    61,
      79,    81,    79,    74,    26,   101,   103,     3,    12,    13,
      16,    17,    18,    19,    26,    27,    28,    29,    30,    31,
      54,    59,    63,    72,    91,   106,   107,   108,   110,   111,
     114,   119,   120,   121,   122,   123,   124,   125,   127,   129,
     131,   132,   134,   135,   142,    71,    72,    80,    28,    62,
      82,   104,    60,   102,    63,    26,    59,   121,    63,    63,
     106,    59,    63,   133,   124,   132,   121,    57,    59,    39,
      40,    42,    43,    44,    45,    46,    47,   126,    48,    49,
     128,    50,    51,    52,   130,    33,    34,    35,    36,    37,
      38,    55,    56,    58,    71,   122,    83,    38,    85,    61,
     105,    99,   122,    59,   122,    59,    72,   118,   121,    16,
     136,    61,    64,   106,   109,   123,   124,   127,   129,   131,
     121,   121,   121,   121,   121,   121,    59,    62,    86,    62,
      64,    64,   122,    59,    63,   121,   137,   138,   121,   109,
      58,    38,    84,    85,    87,    29,   112,   115,    59,   122,
     139,    64,    62,    88,   106,   106,   116,    64,    60,   140,
      57,    32,   113,   121,   117,   121,    28,    89,   106,    64,
      59,   141,    60,    90,    58,   140,    89
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 8:
#line 92 "parser1.y"
    { insert_type(); }
    break;

  case 18:
#line 111 "parser1.y"
    { if(check_function(current_identifier))
						  {yyerror("ERROR: Identifier cannot be same as function name!\n"); exit(8);}
						  if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type(); }
    break;

  case 20:
#line 114 "parser1.y"
    {if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type();  }
    break;

  case 23:
#line 116 "parser1.y"
    {strcpy(previous_operator,"=");}
    break;

  case 27:
#line 123 "parser1.y"
    {insert_dimensions();}
    break;

  case 28:
#line 123 "parser1.y"
    {if((yyval) < 1) {yyerror("Array must have size greater than 1!\n"); exit(0);} }
    break;

  case 33:
#line 132 "parser1.y"
    {strcpy(previous_operator,"=");}
    break;

  case 34:
#line 132 "parser1.y"
    { insert_value(); }
    break;

  case 35:
#line 135 "parser1.y"
    {strcpy(previous_operator,"=");}
    break;

  case 62:
#line 169 "parser1.y"
    {strcpy(currfunctype, current_type); check_duplicate(current_identifier); insert_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();}
    break;

  case 64:
#line 175 "parser1.y"
    { check_params(current_type); }
    break;

  case 65:
#line 175 "parser1.y"
    {insert_SymbolTable_paramscount(current_function, params_count);}
    break;

  case 70:
#line 185 "parser1.y"
    {insert_parameters(); insert_type(); insert_SymbolTable_nest(current_identifier,1); params_count++;}
    break;

  case 81:
#line 198 "parser1.y"
    {current_nested_val++;}
    break;

  case 82:
#line 198 "parser1.y"
    {remove_scope(current_nested_val);current_nested_val--;}
    break;

  case 87:
#line 209 "parser1.y"
    {if((yyvsp[(3) - (4)])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
    break;

  case 91:
#line 216 "parser1.y"
    {if((yyvsp[(3) - (4)])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
    break;

  case 93:
#line 217 "parser1.y"
    {if((yyvsp[(4) - (5)])!=1){yyerror("Here, condition must have integer value!\n");exit(0);}}
    break;

  case 95:
#line 218 "parser1.y"
    {if((yyvsp[(5) - (6)])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
    break;

  case 100:
#line 226 "parser1.y"
    {if(strcmp(currfunctype,"void")) {yyerror("ERROR: Cannot have void return for non-void function!\n"); exit(0);}}
    break;

  case 101:
#line 227 "parser1.y"
    { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("Non-void return for void function!"); exit(0);
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && (yyvsp[(2) - (3)])!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); exit(0);
										}

			                     	}
    break;

  case 103:
#line 244 "parser1.y"
    {					strcpy(previous_operator,"=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
																	  {
			                                                          (yyval)=1;
			                                                          }
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
    break;

  case 104:
#line 252 "parser1.y"
    {					strcpy(previous_operator,"+=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
    break;

  case 105:
#line 258 "parser1.y"
    {					strcpy(previous_operator,"-=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
    break;

  case 106:
#line 265 "parser1.y"
    {					strcpy(previous_operator,"*=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
    break;

  case 107:
#line 271 "parser1.y"
    {				strcpy(previous_operator,"/=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
    break;

  case 108:
#line 277 "parser1.y"
    {					strcpy(previous_operator,"%=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
    break;

  case 109:
#line 284 "parser1.y"
    {if((yyvsp[(1) - (2)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 110:
#line 285 "parser1.y"
    {if((yyvsp[(1) - (2)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 111:
#line 286 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 112:
#line 290 "parser1.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 113:
#line 291 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 114:
#line 294 "parser1.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 115:
#line 295 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 116:
#line 298 "parser1.y"
    {if((yyvsp[(2) - (2)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 117:
#line 299 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 118:
#line 302 "parser1.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 119:
#line 303 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 120:
#line 306 "parser1.y"
    {strcpy(previous_operator,">=");}
    break;

  case 121:
#line 307 "parser1.y"
    {strcpy(previous_operator,"<=");}
    break;

  case 122:
#line 308 "parser1.y"
    {strcpy(previous_operator,">");}
    break;

  case 123:
#line 309 "parser1.y"
    {strcpy(previous_operator,"<");}
    break;

  case 124:
#line 310 "parser1.y"
    {strcpy(previous_operator,"==");}
    break;

  case 125:
#line 311 "parser1.y"
    {strcpy(previous_operator,"!=");}
    break;

  case 126:
#line 314 "parser1.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 127:
#line 315 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 130:
#line 322 "parser1.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 131:
#line 323 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 135:
#line 329 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 136:
#line 330 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 137:
#line 333 "parser1.y"
    {
			              if(!check_scope(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}
			              if(!check_array(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Array Identifier has No Subscript\n");exit(0);}
			              if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              (yyval) = 1;
			              else
			              (yyval) = -1;
			              }
    break;

  case 138:
#line 343 "parser1.y"
    {if(!check_scope(current_identifier)){printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}}
    break;

  case 139:
#line 344 "parser1.y"
    {if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              		(yyval) = 1;
			              		else
			              		(yyval) = -1;
			              		}
    break;

  case 140:
#line 351 "parser1.y"
    {if((yyvsp[(2) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 142:
#line 353 "parser1.y"
    {if((yyvsp[(1) - (1)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 143:
#line 356 "parser1.y"
    { strcpy(previous_operator,"(");
			             if(!check_declaration(current_identifier, "Function"))
			             { yyerror("Function not declared"); exit(0);}
			             insert_SymbolTable_function(current_identifier);
						 strcpy(currfunccall,current_identifier);
			             }
    break;

  case 144:
#line 362 "parser1.y"
    { if(strcmp(currfunccall,"printf"))
							{
								if(getSTparamscount(currfunccall)!=call_params_count)
								{
									yyerror("Number of parameters not same as number of arguments during function call!");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							}
						 }
    break;

  case 147:
#line 377 "parser1.y"
    { call_params_count++; }
    break;

  case 149:
#line 380 "parser1.y"
    { call_params_count++; }
    break;

  case 152:
#line 384 "parser1.y"
    {  insert_type(); (yyval)=1; }
    break;

  case 153:
#line 385 "parser1.y"
    {  insert_type(); (yyval)=-1;}
    break;

  case 154:
#line 386 "parser1.y"
    {  insert_type(); }
    break;

  case 155:
#line 387 "parser1.y"
    {  insert_type();(yyval)=1; }
    break;


/* Line 1267 of yacc.c.  */
#line 2085 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 390 "parser1.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insert_SymbolTable_type(char *,char *);
void insert_SymbolTable_value(char *, char *);
void insert_ConstantTable(char *, char *);
void insert_SymbolTable_arraydim(char *, char *);
void insert_SymbolTable_funcparam(char *, char *);
void printSymbolTable();
void printConstantTable();


int main()
{
	yyin = fopen("test2.c", "r");
	yyparse();

	if(flag == 0)
	{
		printf("VALID PARSE\n");
		printf("%30s SYMBOL TABLE \n", " ");
		printf("%30s %s\n", " ", "------------");
		printSymbolTable();

		printf("\n\n%30s CONSTANT TABLE \n", " ");
		printf("%30s %s\n", " ", "--------------");
		printConstantTable();
	}
}

void yyerror(char *s)
{
	printf("Line No. : %d %s %s\n",yylineno, s, yytext);
	flag=1;
	printf("\nUNSUCCESSFUL: INVALID PARSE\n");
}

void insert_type()
{
	insert_SymbolTable_type(current_identifier,current_type);
}

void insert_value()
{
	if(strcmp(previous_operator, "=") == 0)
	{	insert_SymbolTable_value(current_identifier,current_value);
	}
}

void insert_dimensions()
{
    insert_SymbolTable_arraydim(current_identifier, current_value);
}

void insert_parameters()
{
    insert_SymbolTable_funcparam(current_function, current_identifier);
}

int yywrap()
{
	return 1;
}

