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
     UNION = 268,
     POINTER = 269,
     RETURN = 270,
     MAIN = 271,
     VOID = 272,
     WHILE = 273,
     FOR = 274,
     DO = 275,
     BREAK = 276,
     CONTINUE = 277,
     GOTO = 278,
     ENDIF = 279,
     SWITCH = 280,
     CASE = 281,
     DEFAULT = 282,
     identifier = 283,
     array_identifier = 284,
     integer_constant = 285,
     string_constant = 286,
     float_constant = 287,
     character_constant = 288,
     ELSE = 289,
     MOD_EQUAL = 290,
     DIVIDE_EQUAL = 291,
     MULTIPLY_EQUAL = 292,
     SUBTRACT_EQUAL = 293,
     ADD_EQUAL = 294,
     OR_OR = 295,
     AND_AND = 296,
     NOT_EQUAL = 297,
     EQUAL = 298,
     GREAT = 299,
     GREAT_EQUAL = 300,
     LESS = 301,
     LESS_EQUAL = 302,
     SIZEOF = 303,
     NOT = 304,
     DECREMENT = 305,
     INCREMENT = 306
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
#define UNION 268
#define POINTER 269
#define RETURN 270
#define MAIN 271
#define VOID 272
#define WHILE 273
#define FOR 274
#define DO 275
#define BREAK 276
#define CONTINUE 277
#define GOTO 278
#define ENDIF 279
#define SWITCH 280
#define CASE 281
#define DEFAULT 282
#define identifier 283
#define array_identifier 284
#define integer_constant 285
#define string_constant 286
#define float_constant 287
#define character_constant 288
#define ELSE 289
#define MOD_EQUAL 290
#define DIVIDE_EQUAL 291
#define MULTIPLY_EQUAL 292
#define SUBTRACT_EQUAL 293
#define ADD_EQUAL 294
#define OR_OR 295
#define AND_AND 296
#define NOT_EQUAL 297
#define EQUAL 298
#define GREAT 299
#define GREAT_EQUAL 300
#define LESS 301
#define LESS_EQUAL 302
#define SIZEOF 303
#define NOT 304
#define DECREMENT 305
#define INCREMENT 306




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
	void insert_pointer_type();
	void insert_pointer_value();
	void insert_pointer_parameters();
	void insert_SymbolTable_nest(char*, int);
	void insert_SymbolTable_paramscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_pointer_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int check_array(char*);
	void insert_pointer_parameters();
	char* find_pointer_name(char* );
	void insert_pointer_SymbolTable_function(char*);
	void insert_SymbolTable_function(char*);
	char gettype(char*,int);
    int search_pointer_SymbolTable(char*);
	extern int flag;
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
	int cur_dim_count=0;
	int cur_arr_dim[20]={0};
	int check_dim_count=0;
	int check_arr_dim[20]={0}; 
	int nested_loop=0;

	int switch_default_cnt=0;

	


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
#line 264 "parser1.tab.c"

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
#define YYLAST   324

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  186
/* YYNRULES -- Number of states.  */
#define YYNSTATES  288

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    54,     2,     2,
      65,    66,    52,    50,    62,    51,     2,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,    61,
       2,    40,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    41,    42,    44,    45,    46,
      47,    48,    49,    55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    16,
      24,    27,    28,    32,    34,    38,    41,    44,    45,    46,
      50,    51,    55,    56,    60,    62,    63,    67,    70,    71,
      74,    77,    80,    81,    87,    89,    91,    92,    93,    97,
      98,    99,   106,   107,   111,   112,   113,   119,   122,   124,
     126,   128,   130,   132,   135,   138,   141,   144,   146,   148,
     151,   154,   155,   157,   160,   163,   164,   166,   167,   169,
     170,   173,   177,   181,   185,   186,   190,   191,   194,   197,
     198,   199,   203,   204,   208,   211,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   229,   234,   237,   238,   241,
     243,   244,   252,   254,   255,   264,   270,   271,   277,   278,
     281,   282,   283,   284,   292,   293,   294,   305,   306,   307,
     317,   319,   322,   324,   326,   327,   329,   330,   333,   337,
     340,   343,   347,   351,   355,   359,   363,   367,   370,   373,
     375,   379,   381,   385,   387,   390,   392,   396,   398,   400,
     402,   404,   406,   408,   410,   414,   416,   418,   420,   424,
     426,   428,   430,   432,   434,   436,   438,   439,   445,   447,
     451,   453,   455,   456,   462,   463,   469,   471,   472,   473,
     477,   478,   483,   484,   486,   488,   490
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      69,     0,    -1,    70,    -1,    71,    70,    -1,    -1,    75,
      -1,   105,    -1,    72,    -1,    -1,    12,    28,    73,    59,
      74,    60,    61,    -1,    75,    74,    -1,    -1,   100,    77,
      61,    -1,    76,    -1,    12,    28,    77,    -1,    79,    78,
      -1,    62,    77,    -1,    -1,    -1,    28,    80,    83,    -1,
      -1,    29,    81,    83,    -1,    -1,    14,    82,    83,    -1,
      85,    -1,    -1,    40,    84,   142,    -1,    63,    86,    -1,
      -1,    87,    89,    -1,    64,    90,    -1,    30,    64,    -1,
      -1,    30,    64,    88,    63,    87,    -1,    90,    -1,    92,
      -1,    -1,    -1,    40,    91,    31,    -1,    -1,    -1,    40,
      93,    59,    94,    97,    60,    -1,    -1,    62,    96,    97,
      -1,    -1,    -1,    59,    98,    97,    99,    60,    -1,    97,
      95,    -1,   163,    -1,     4,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,   103,    -1,     9,   104,    -1,    11,   101,
      -1,    10,   102,    -1,    17,    -1,     4,    -1,     8,   103,
      -1,     9,   104,    -1,    -1,     4,    -1,     8,   103,    -1,
       9,   104,    -1,    -1,     4,    -1,    -1,     4,    -1,    -1,
     106,   107,    -1,   100,    28,    65,    -1,   100,    14,    65,
      -1,   108,    66,   116,    -1,    -1,   100,   109,   110,    -1,
      -1,   112,   111,    -1,    62,   108,    -1,    -1,    -1,    28,
     113,   115,    -1,    -1,    14,   114,   115,    -1,    63,    64,
      -1,    -1,   120,    -1,   117,    -1,   121,    -1,   128,    -1,
     138,    -1,   139,    -1,   140,    -1,    75,    -1,    -1,   118,
      59,   119,    60,    -1,   116,   119,    -1,    -1,   141,    61,
      -1,    61,    -1,    -1,     3,    65,   142,    66,   122,   116,
     127,    -1,   123,    -1,    -1,    25,   124,    65,   141,    66,
      59,   125,    60,    -1,    26,    30,    67,   116,   125,    -1,
      -1,    27,   126,    67,   116,   125,    -1,    -1,    34,   116,
      -1,    -1,    -1,    -1,    18,   129,    65,   142,    66,   130,
     116,    -1,    -1,    -1,    19,   131,    65,   135,   136,    61,
     132,   137,    66,   116,    -1,    -1,    -1,    20,   133,   116,
      18,    65,   142,    66,   134,    61,    -1,    75,    -1,   141,
      61,    -1,    61,    -1,   142,    -1,    -1,   141,    -1,    -1,
      15,    61,    -1,    15,   141,    61,    -1,    21,    61,    -1,
      22,    61,    -1,   152,    40,   141,    -1,   152,    39,   141,
      -1,   152,    38,   141,    -1,   152,    37,   141,    -1,   152,
      36,   141,    -1,   152,    35,   141,    -1,   152,    58,    -1,
     152,    57,    -1,   142,    -1,   142,    41,   143,    -1,   143,
      -1,   143,    42,   144,    -1,   144,    -1,    56,   144,    -1,
     145,    -1,   145,   146,   147,    -1,   147,    -1,    47,    -1,
      49,    -1,    46,    -1,    48,    -1,    45,    -1,    44,    -1,
     147,   148,   149,    -1,   149,    -1,    50,    -1,    51,    -1,
     149,   150,   151,    -1,   151,    -1,    52,    -1,    53,    -1,
      54,    -1,   154,    -1,   152,    -1,    28,    -1,    -1,    29,
     153,    63,   141,    64,    -1,    14,    -1,    65,   141,    66,
      -1,   155,    -1,   163,    -1,    -1,    28,    65,   156,   158,
      66,    -1,    -1,    14,    65,   157,   158,    66,    -1,   159,
      -1,    -1,    -1,   141,   160,   161,    -1,    -1,    62,   141,
     162,   161,    -1,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    97,    98,   102,   103,   104,   107,   107,
     109,   109,   113,   114,   117,   120,   123,   124,   127,   127,
     130,   130,   131,   131,   132,   132,   132,   135,   136,   139,
     140,   143,   144,   144,   148,   149,   150,   153,   153,   157,
     157,   157,   161,   161,   163,   163,   163,   164,   165,   169,
     169,   169,   169,   170,   171,   172,   173,   174,   177,   177,
     177,   177,   180,   180,   180,   180,   183,   183,   186,   186,
     189,   192,   193,   195,   198,   198,   198,   200,   203,   204,
     207,   207,   208,   208,   210,   211,   214,   214,   215,   215,
     216,   216,   216,   217,   220,   220,   223,   224,   227,   228,
     231,   231,   232,   235,   235,   238,   239,   239,   241,   245,
     246,   249,   249,   249,   250,   250,   250,   251,   251,   251,
     254,   255,   256,   259,   260,   263,   264,   266,   267,   280,
     283,   286,   294,   300,   307,   313,   319,   326,   327,   328,
     332,   333,   337,   338,   341,   342,   345,   346,   350,   351,
     352,   353,   354,   355,   358,   359,   362,   363,   366,   367,
     370,   370,   370,   373,   374,   377,   387,   387,   393,   403,
     404,   405,   408,   408,   424,   424,   442,   442,   445,   445,
     448,   448,   449,   452,   453,   454,   455
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "UNION", "POINTER",
  "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK", "CONTINUE",
  "GOTO", "ENDIF", "SWITCH", "CASE", "DEFAULT", "identifier",
  "array_identifier", "integer_constant", "string_constant",
  "float_constant", "character_constant", "ELSE", "MOD_EQUAL",
  "DIVIDE_EQUAL", "MULTIPLY_EQUAL", "SUBTRACT_EQUAL", "ADD_EQUAL", "'='",
  "OR_OR", "AND_AND", "'^'", "NOT_EQUAL", "EQUAL", "GREAT", "GREAT_EQUAL",
  "LESS", "LESS_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "SIZEOF", "NOT",
  "DECREMENT", "INCREMENT", "'{'", "'}'", "';'", "','", "'['", "']'",
  "'('", "')'", "':'", "$accept", "begin_parse", "declarations",
  "declaration", "structure_dec", "@1", "structure_content",
  "variable_dec", "structure_initialize", "variables",
  "multiple_variables", "identifier_name", "@2", "@3", "@4",
  "extended_identifier", "@5", "array_iden", "array_dims", "dims", "@6",
  "initilization", "string_initilization", "@7", "array_initialization",
  "@8", "@9", "multiple_array_values", "@10", "array_values", "@11", "@12",
  "datatype", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_dec", "function_datatype",
  "function_parameters", "parameters", "@13", "all_parameter_identifiers",
  "multiple_parameters", "parameter_identifier", "@14", "@15",
  "extended_parameter", "statement", "multiple_statement", "@16",
  "statments", "expression_statment", "conditional_statements", "@17",
  "switch_statement", "@18", "case_list", "@19",
  "extended_conditional_statements", "iterative_statements", "@20", "@21",
  "@22", "@23", "@24", "@25", "for_initialization",
  "for_simple_expression", "for_expression", "return_statement",
  "break_statement", "continue_statement", "expression",
  "simple_expression", "and_expression", "unary_relation_expression",
  "regular_expression", "relational_operators", "sum_expression",
  "sum_operators", "term", "MULOP", "factor", "mutable", "@26",
  "immutable", "call", "@27", "@28", "arguments", "arguments_list", "@29",
  "A", "@30", "constant", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      61,   295,   296,    94,   297,   298,   299,   300,   301,   302,
      43,    45,    42,    47,    37,   303,   304,   305,   306,   123,
     125,    59,    44,    91,    93,    40,    41,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    70,    71,    71,    71,    73,    72,
      74,    74,    75,    75,    76,    77,    78,    78,    80,    79,
      81,    79,    82,    79,    83,    84,    83,    85,    85,    86,
      86,    87,    88,    87,    89,    89,    89,    91,    90,    93,
      94,    92,    96,    95,    98,    99,    97,    97,    97,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   102,   102,   102,   102,   103,   103,   104,   104,
     105,   106,   106,   107,   109,   108,   108,   110,   111,   111,
     113,   112,   114,   112,   115,   115,   116,   116,   116,   116,
     116,   116,   116,   116,   118,   117,   119,   119,   120,   120,
     122,   121,   121,   124,   123,   125,   126,   125,   125,   127,
     127,   129,   130,   128,   131,   132,   128,   133,   134,   128,
     135,   135,   135,   136,   136,   137,   137,   138,   138,   139,
     140,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     146,   146,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   150,   151,   151,   152,   153,   152,   152,   154,
     154,   154,   156,   155,   157,   155,   158,   158,   160,   159,
     162,   161,   161,   163,   163,   163,   163
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     7,
       2,     0,     3,     1,     3,     2,     2,     0,     0,     3,
       0,     3,     0,     3,     1,     0,     3,     2,     0,     2,
       2,     2,     0,     5,     1,     1,     0,     0,     3,     0,
       0,     6,     0,     3,     0,     0,     5,     2,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     2,
       2,     0,     1,     2,     2,     0,     1,     0,     1,     0,
       2,     3,     3,     3,     0,     3,     0,     2,     2,     0,
       0,     3,     0,     3,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     4,     2,     0,     2,     1,
       0,     7,     1,     0,     8,     5,     0,     5,     0,     2,
       0,     0,     0,     7,     0,     0,    10,     0,     0,     9,
       1,     2,     1,     1,     0,     1,     0,     2,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     1,
       3,     1,     3,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     1,     3,
       1,     1,     0,     5,     0,     5,     1,     0,     0,     3,
       0,     4,     0,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    49,    50,    51,    52,    67,    69,    65,    61,     0,
      57,     0,     2,     4,     7,     5,    13,     0,     6,    76,
      66,    53,    68,    54,    62,    67,    69,    56,    58,    67,
      69,    55,     8,     1,     3,    22,    18,    20,     0,    17,
      74,    70,     0,    63,    64,    59,    60,    22,    18,     0,
      14,    72,    28,    71,    28,    28,    12,     0,    15,     0,
      94,    11,    25,     0,    23,    24,    19,    21,    16,    82,
      80,    75,    79,     0,     0,   168,     0,   111,   114,   117,
       0,     0,   103,   165,   166,   183,   184,   185,   186,     0,
      99,     0,    93,     0,    73,    87,     0,    86,    88,   102,
      89,    90,    91,    92,     0,   139,   141,   143,   145,   147,
     155,   159,   164,   163,   170,   171,     0,    11,     0,     0,
       0,    27,    36,    85,    85,    76,    77,     0,     0,   174,
     127,     0,     0,     0,    94,   129,   130,     0,   172,     0,
     144,   164,     0,    94,    98,     0,     0,   153,   152,   150,
     148,   151,   149,     0,   156,   157,     0,   160,   161,   162,
       0,     0,     0,     0,     0,     0,     0,   138,   137,     0,
      10,    26,    31,    37,    30,    37,    29,    34,    35,     0,
      83,    81,    78,     0,   177,   128,     0,     0,     0,     0,
     177,     0,   169,    94,     0,   140,   142,   146,   154,   158,
     136,   135,   134,   133,   132,   131,     9,     0,     0,     0,
      84,   100,   178,     0,   176,     0,   122,   120,   124,     0,
       0,     0,     0,     0,    96,    95,     0,    38,    40,    94,
     182,   175,   112,     0,   123,   121,     0,     0,   173,   167,
      33,     0,   110,     0,   179,    94,   115,     0,   108,    44,
       0,    48,    94,   101,   180,   113,   126,   118,     0,   106,
       0,     0,    41,    42,    47,   109,   182,     0,   125,     0,
       0,     0,   104,    45,     0,   181,    94,   119,    94,    94,
       0,    43,   116,   108,   108,    46,   105,   107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,   116,    92,    16,    38,
      58,    39,    54,    55,    52,    64,   118,    65,   121,   122,
     207,   176,   174,   208,   178,   209,   241,   264,   274,   250,
     261,   280,    93,    31,    27,    21,    23,    18,    19,    41,
      42,    59,    71,   126,    72,   124,   123,   180,   193,    95,
      96,   194,    97,    98,   229,    99,   137,   260,   271,   253,
     100,   132,   245,   133,   256,   134,   269,   218,   233,   267,
     101,   102,   103,   104,   105,   106,   107,   108,   153,   109,
     156,   110,   160,   111,   112,   139,   113,   114,   190,   184,
     213,   214,   230,   244,   266,   115
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -210
static const yytype_int16 yypact[] =
{
     170,  -210,  -210,  -210,  -210,    37,    45,    94,   163,    -8,
    -210,    81,  -210,   170,  -210,  -210,  -210,    25,  -210,   285,
    -210,  -210,  -210,  -210,  -210,    37,    45,  -210,  -210,    37,
      45,  -210,    57,  -210,  -210,    19,    24,  -210,    26,    38,
    -210,  -210,    40,  -210,  -210,  -210,  -210,  -210,  -210,    54,
    -210,  -210,    27,  -210,    27,    27,  -210,    57,  -210,    69,
     217,   195,  -210,   -22,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,    64,    95,   107,   103,    -5,  -210,  -210,  -210,
      85,    98,  -210,   105,  -210,  -210,  -210,  -210,  -210,     5,
    -210,     5,  -210,    57,  -210,  -210,   124,  -210,  -210,  -210,
    -210,  -210,  -210,  -210,   123,   149,   153,  -210,   207,   -33,
      80,  -210,    72,  -210,  -210,  -210,   131,   195,     5,   132,
     157,  -210,   168,   146,   146,   285,  -210,     5,    57,  -210,
    -210,   150,   145,   148,   217,  -210,  -210,   152,  -210,   151,
    -210,  -210,   164,   133,  -210,     5,     5,  -210,  -210,  -210,
    -210,  -210,  -210,    15,  -210,  -210,    15,  -210,  -210,  -210,
      15,     5,     5,     5,     5,     5,     5,  -210,  -210,   154,
    -210,   149,   177,  -210,  -210,   174,  -210,  -210,  -210,   179,
    -210,  -210,  -210,     9,     5,  -210,     5,   255,   223,     5,
       5,     5,  -210,   133,   184,   153,  -210,   -33,    80,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,   194,   227,   209,
    -210,  -210,  -210,   204,  -210,    16,  -210,  -210,     5,   210,
     211,   208,   213,   216,  -210,  -210,   245,  -210,  -210,   217,
     215,  -210,  -210,   220,   149,  -210,     5,   238,  -210,  -210,
    -210,    46,   264,     5,  -210,   217,  -210,    22,    89,  -210,
     -50,  -210,   217,  -210,  -210,  -210,     5,  -210,   269,  -210,
     240,    46,  -210,  -210,  -210,  -210,   215,   235,  -210,   242,
     237,   239,  -210,   243,    46,  -210,   217,  -210,   217,   217,
     247,   243,  -210,    89,    89,  -210,  -210,  -210
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -210,  -210,   295,  -210,  -210,  -210,   192,     1,  -210,   -27,
    -210,  -210,  -210,  -210,  -210,    70,  -210,  -210,  -210,    84,
    -210,  -210,   190,  -210,  -210,  -210,  -210,  -210,  -210,  -206,
    -210,  -210,     3,  -210,  -210,   -14,    97,  -210,  -210,  -210,
     188,  -210,  -210,  -210,  -210,  -210,  -210,   191,   -60,  -210,
    -210,   121,  -210,  -210,  -210,  -210,  -210,  -127,  -210,  -210,
    -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,  -210,
    -210,  -210,  -210,   -70,  -114,   172,   -82,  -210,  -210,   165,
    -210,   166,  -210,   159,   -87,  -210,  -210,  -210,  -210,  -210,
     134,  -210,  -210,    55,  -210,  -209
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -98
static const yytype_int16 yytable[] =
{
      94,    15,   141,    17,   171,    50,   131,   140,   119,    75,
     262,    43,   263,   183,    15,    45,    17,   154,   155,    75,
      32,   142,    40,    83,    84,    85,    86,    87,    88,    75,
      68,   141,   251,    83,    84,    85,    86,    87,    88,    35,
     141,    20,   120,    83,    84,    85,    86,    87,    88,    22,
     145,    89,   251,    36,    37,   273,   130,   145,   141,   141,
      91,    89,   117,   145,   196,   251,   141,    62,   281,   141,
      91,    47,   215,   141,   188,   211,    85,    86,    87,    88,
      91,    33,   232,    69,    51,    48,    37,    56,   257,    53,
      63,   200,   201,   202,   203,   204,   205,    70,    24,   141,
      57,    50,    25,    26,   234,   249,    60,   161,   162,   163,
     164,   165,   166,    61,   212,   258,   259,   219,   117,   221,
     212,   223,   247,    44,    66,    67,   125,    46,    40,   167,
     168,   141,   157,   158,   159,   128,    73,     1,     2,     3,
       4,     5,     6,     7,     8,    74,   135,    75,    76,   141,
      10,    77,    78,    79,    80,    81,   286,   287,    82,   136,
     127,    83,    84,    85,    86,    87,    88,    28,   129,   242,
     138,    29,    30,   254,     1,     2,     3,     4,     5,     6,
       7,     8,     9,   143,   144,   255,   268,    10,   217,    89,
     145,   169,   265,   -97,    90,   146,   172,   173,    91,     1,
       2,     3,     4,     5,     6,     7,     8,    74,   175,   179,
     186,   185,    10,   187,   191,   206,   282,   189,   283,   284,
      73,     1,     2,     3,     4,     5,     6,     7,     8,    74,
     192,    75,    76,   -39,    10,    77,    78,    79,    80,    81,
     -32,   220,    82,   210,   225,    83,    84,    85,    86,    87,
      88,   147,   148,   149,   150,   151,   152,   226,   227,     1,
       2,     3,     4,     5,     6,     7,     8,    74,   228,    75,
     231,   235,    10,    89,   237,   119,   236,   243,    90,   238,
     239,   246,    91,    83,    84,    85,    86,    87,    88,     1,
       2,     3,     4,     5,     6,     7,     8,   248,   252,   270,
     272,   276,    10,   277,   278,   263,   279,   285,    34,   170,
     240,    89,   177,   182,   224,   181,   216,   195,   197,   199,
      91,   275,   198,     0,   222
};

static const yytype_int16 yycheck[] =
{
      60,     0,    89,     0,   118,    32,    76,    89,    30,    14,
      60,    25,    62,   127,    13,    29,    13,    50,    51,    14,
      28,    91,    19,    28,    29,    30,    31,    32,    33,    14,
      57,   118,   241,    28,    29,    30,    31,    32,    33,    14,
     127,     4,    64,    28,    29,    30,    31,    32,    33,     4,
      41,    56,   261,    28,    29,   261,    61,    41,   145,   146,
      65,    56,    61,    41,   146,   274,   153,    40,   274,   156,
      65,    14,   186,   160,   134,    66,    30,    31,    32,    33,
      65,     0,    66,    14,    65,    28,    29,    61,    66,    65,
      63,   161,   162,   163,   164,   165,   166,    28,     4,   186,
      62,   128,     8,     9,   218,    59,    66,    35,    36,    37,
      38,    39,    40,    59,   184,    26,    27,   187,   117,   189,
     190,   191,   236,    26,    54,    55,    62,    30,   125,    57,
      58,   218,    52,    53,    54,    28,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    61,    14,    15,   236,
      17,    18,    19,    20,    21,    22,   283,   284,    25,    61,
      65,    28,    29,    30,    31,    32,    33,     4,    65,   229,
      65,     8,     9,   243,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    59,    61,   245,   256,    17,   187,    56,
      41,    60,   252,    60,    61,    42,    64,    40,    65,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    40,    63,
      65,    61,    17,    65,    63,    61,   276,    65,   278,   279,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      66,    14,    15,    59,    17,    18,    19,    20,    21,    22,
      63,    18,    25,    64,    60,    28,    29,    30,    31,    32,
      33,    44,    45,    46,    47,    48,    49,    63,    31,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    59,    14,
      66,    61,    17,    56,    66,    30,    65,    62,    61,    66,
      64,    61,    65,    28,    29,    30,    31,    32,    33,     4,
       5,     6,     7,     8,     9,    10,    11,    59,    34,    30,
      60,    66,    17,    61,    67,    62,    67,    60,    13,   117,
     226,    56,   122,   125,   193,   124,    61,   145,   153,   160,
      65,   266,   156,    -1,   190
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      17,    69,    70,    71,    72,    75,    76,   100,   105,   106,
       4,   103,     4,   104,     4,     8,     9,   102,     4,     8,
       9,   101,    28,     0,    70,    14,    28,    29,    77,    79,
     100,   107,   108,   103,   104,   103,   104,    14,    28,    73,
      77,    65,    82,    65,    80,    81,    61,    62,    78,   109,
      66,    59,    40,    63,    83,    85,    83,    83,    77,    14,
      28,   110,   112,     3,    12,    14,    15,    18,    19,    20,
      21,    22,    25,    28,    29,    30,    31,    32,    33,    56,
      61,    65,    75,   100,   116,   117,   118,   120,   121,   123,
     128,   138,   139,   140,   141,   142,   143,   144,   145,   147,
     149,   151,   152,   154,   155,   163,    74,    75,    84,    30,
      64,    86,    87,   114,   113,    62,   111,    65,    28,    65,
      61,   141,   129,   131,   133,    61,    61,   124,    65,   153,
     144,   152,   141,    59,    61,    41,    42,    44,    45,    46,
      47,    48,    49,   146,    50,    51,   148,    52,    53,    54,
     150,    35,    36,    37,    38,    39,    40,    57,    58,    60,
      74,   142,    64,    40,    90,    40,    89,    90,    92,    63,
     115,   115,   108,   142,   157,    61,    65,    65,   116,    65,
     156,    63,    66,   116,   119,   143,   144,   147,   149,   151,
     141,   141,   141,   141,   141,   141,    61,    88,    91,    93,
      64,    66,   141,   158,   159,   142,    61,    75,   135,   141,
      18,   141,   158,   141,   119,    60,    63,    31,    59,   122,
     160,    66,    66,   136,   142,    61,    65,    66,    66,    64,
      87,    94,   116,    62,   161,   130,    61,   142,    59,    59,
      97,   163,    34,   127,   141,   116,   132,    66,    26,    27,
     125,    98,    60,    62,    95,   116,   162,   137,   141,   134,
      30,   126,    60,    97,    96,   161,    66,    61,    67,    67,
      99,    97,   116,   116,   116,    60,   125,   125
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
#line 107 "parser1.y"
    { insert_type(); ;}
    break;

  case 18:
#line 127 "parser1.y"
    { if(check_function(current_identifier))
						  {yyerror("ERROR: Identifier cannot be same as function name!\n"); exit(8);}
						  if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type(); ;}
    break;

  case 20:
#line 130 "parser1.y"
    {if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type();  ;}
    break;

  case 22:
#line 131 "parser1.y"
    {if(duplicate(find_pointer_name(current_identifier))){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(find_pointer_name(current_identifier),current_nested_val); insert_pointer_type();;}
    break;

  case 25:
#line 132 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 27:
#line 135 "parser1.y"
    {cur_dim_count=0;;}
    break;

  case 31:
#line 143 "parser1.y"
    {cur_arr_dim[cur_dim_count]=(yyvsp[(1) - (2)]);/*printf("%d %d %d %d",cur_dim_count,cur_arr_dim[0],cur_arr_dim[1],cur_arr_dim[2]);*/;}
    break;

  case 32:
#line 144 "parser1.y"
    {cur_arr_dim[cur_dim_count]=(yyvsp[(1) - (2)]);cur_dim_count++;;}
    break;

  case 37:
#line 153 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 38:
#line 153 "parser1.y"
    { insert_value(); ;}
    break;

  case 39:
#line 157 "parser1.y"
    {strcpy(previous_operator,"=");;}
    break;

  case 40:
#line 157 "parser1.y"
    {check_dim_count=0; check_arr_dim[check_dim_count]++;;}
    break;

  case 41:
#line 157 "parser1.y"
    { if (cur_arr_dim[check_dim_count]!= check_arr_dim[check_dim_count]){printf("Error in dimension of array\n");exit(0);}for(int _ = 0; _ <= cur_dim_count; _++){cur_arr_dim[_]=0;}cur_dim_count=0; for(int _ = 0; _ <= check_dim_count; _++){check_arr_dim[_]=0;}check_arr_dim[check_dim_count]=0;check_dim_count=0;;}
    break;

  case 42:
#line 161 "parser1.y"
    {check_arr_dim[check_dim_count]++;;}
    break;

  case 44:
#line 163 "parser1.y"
    {check_dim_count++; check_arr_dim[check_dim_count]++;;}
    break;

  case 45:
#line 163 "parser1.y"
    { if (cur_arr_dim[check_dim_count]!= check_arr_dim[check_dim_count]){printf("Error in dimension of array\n");exit(0);}check_arr_dim[check_dim_count]=0;check_dim_count--;;}
    break;

  case 48:
#line 165 "parser1.y"
    {;}
    break;

  case 71:
#line 192 "parser1.y"
    {strcpy(currfunctype, current_type); check_duplicate(current_identifier); insert_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();;}
    break;

  case 72:
#line 193 "parser1.y"
    {strcpy(currfunctype, current_type); check_pointer_duplicate(current_identifier); insert_pointer_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();;}
    break;

  case 74:
#line 198 "parser1.y"
    { check_params(current_type); ;}
    break;

  case 75:
#line 198 "parser1.y"
    {insert_SymbolTable_paramscount(current_function, params_count);;}
    break;

  case 80:
#line 207 "parser1.y"
    {insert_parameters(); insert_type(); insert_SymbolTable_nest(current_identifier,1); params_count++;;}
    break;

  case 82:
#line 208 "parser1.y"
    {insert_pointer_parameters(); insert_pointer_type(); insert_SymbolTable_nest(find_pointer_name(current_identifier),1); params_count++;;}
    break;

  case 94:
#line 220 "parser1.y"
    {current_nested_val++;;}
    break;

  case 95:
#line 220 "parser1.y"
    {remove_scope(current_nested_val);current_nested_val--;;}
    break;

  case 100:
#line 231 "parser1.y"
    {if((yyvsp[(3) - (4)])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);};}
    break;

  case 103:
#line 235 "parser1.y"
    {nested_loop++; switch_default_cnt=0;;}
    break;

  case 104:
#line 235 "parser1.y"
    {nested_loop--; switch_default_cnt=0;;}
    break;

  case 106:
#line 239 "parser1.y"
    { if(switch_default_cnt>0) 
						{yyerror("multiple default case in swtich statement\n");}  ;}
    break;

  case 111:
#line 249 "parser1.y"
    {nested_loop++; printf("loop value: %d", nested_loop);;}
    break;

  case 112:
#line 249 "parser1.y"
    {if((yyvsp[(4) - (5)])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);};}
    break;

  case 113:
#line 249 "parser1.y"
    {nested_loop--;;}
    break;

  case 114:
#line 250 "parser1.y"
    {nested_loop++; printf("loop value: %d", nested_loop);;}
    break;

  case 115:
#line 250 "parser1.y"
    {if((yyvsp[(5) - (6)])!=1){yyerror("Here, condition must have integer value!\n");exit(0);};}
    break;

  case 116:
#line 250 "parser1.y"
    {nested_loop--;;}
    break;

  case 117:
#line 251 "parser1.y"
    {nested_loop++;printf("loop value: %d", nested_loop);;}
    break;

  case 118:
#line 251 "parser1.y"
    {if((yyvsp[(6) - (7)])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);};}
    break;

  case 119:
#line 251 "parser1.y"
    {nested_loop--;;}
    break;

  case 127:
#line 266 "parser1.y"
    {if(strcmp(currfunctype,"void")) {yyerror("ERROR: Cannot have void return for non-void function!\n"); exit(0);};}
    break;

  case 128:
#line 267 "parser1.y"
    { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("Non-void return for void function!"); exit(0);
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && (yyvsp[(2) - (3)])!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); exit(0);
										}

			                     	;}
    break;

  case 129:
#line 280 "parser1.y"
    {if(nested_loop==0) {yyerror("can't use break statement outside loop\n");};}
    break;

  case 130:
#line 283 "parser1.y"
    {if(nested_loop==0) {yyerror("can't use continue statement outside loop\n");};}
    break;

  case 131:
#line 286 "parser1.y"
    {					strcpy(previous_operator,"=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
																	  {
			                                                          (yyval)=1;
			                                                          }
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       ;}
    break;

  case 132:
#line 294 "parser1.y"
    {					strcpy(previous_operator,"+=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       ;}
    break;

  case 133:
#line 300 "parser1.y"
    {					strcpy(previous_operator,"-=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       ;}
    break;

  case 134:
#line 307 "parser1.y"
    {					strcpy(previous_operator,"*=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       ;}
    break;

  case 135:
#line 313 "parser1.y"
    {				strcpy(previous_operator,"/=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       ;}
    break;

  case 136:
#line 319 "parser1.y"
    {					strcpy(previous_operator,"%=");
																	  if((yyvsp[(1) - (3)])==1 && (yyvsp[(3) - (3)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       ;}
    break;

  case 137:
#line 326 "parser1.y"
    {if((yyvsp[(1) - (2)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 138:
#line 327 "parser1.y"
    {if((yyvsp[(1) - (2)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 139:
#line 328 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 140:
#line 332 "parser1.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 141:
#line 333 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 142:
#line 337 "parser1.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 143:
#line 338 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 144:
#line 341 "parser1.y"
    {if((yyvsp[(2) - (2)])==1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 145:
#line 342 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 146:
#line 345 "parser1.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 147:
#line 346 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 148:
#line 350 "parser1.y"
    {strcpy(previous_operator,">=");;}
    break;

  case 149:
#line 351 "parser1.y"
    {strcpy(previous_operator,"<=");;}
    break;

  case 150:
#line 352 "parser1.y"
    {strcpy(previous_operator,">");;}
    break;

  case 151:
#line 353 "parser1.y"
    {strcpy(previous_operator,"<");;}
    break;

  case 152:
#line 354 "parser1.y"
    {strcpy(previous_operator,"==");;}
    break;

  case 153:
#line 355 "parser1.y"
    {strcpy(previous_operator,"!=");;}
    break;

  case 154:
#line 358 "parser1.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 155:
#line 359 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 158:
#line 366 "parser1.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 159:
#line 367 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 163:
#line 373 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 164:
#line 374 "parser1.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 165:
#line 377 "parser1.y"
    {
			              if(!check_scope(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}
			              if(!check_array(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Array Identifier has No Subscript\n");exit(0);}
			              if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              (yyval) = 1;
			              else
			              (yyval) = -1;
			              ;}
    break;

  case 166:
#line 387 "parser1.y"
    {if(!check_scope(current_identifier)){printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);};}
    break;

  case 167:
#line 388 "parser1.y"
    {if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              		(yyval) = 1;
			              		else
			              		(yyval) = -1;
			              		;}
    break;

  case 168:
#line 393 "parser1.y"
    {
			              if(!check_scope(find_pointer_name(current_identifier)))
			              {printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}
			              if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              (yyval) = 1;
			              else
			              (yyval) = -1;
			              printf("%d",(yyval));;}
    break;

  case 169:
#line 403 "parser1.y"
    {if((yyvsp[(2) - (3)])==1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 171:
#line 405 "parser1.y"
    {if((yyvsp[(1) - (1)])==1) (yyval)=1; else (yyval)=-1;;}
    break;

  case 172:
#line 408 "parser1.y"
    { strcpy(previous_operator,"(");
			             if(!check_declaration(current_identifier, "Function"))
			             { yyerror("Function not declared"); exit(0);}
			             insert_SymbolTable_function(current_identifier);
						 strcpy(currfunccall,current_identifier);
			             ;}
    break;

  case 173:
#line 414 "parser1.y"
    { if(strcmp(currfunccall,"printf"))
							{
								if(getSTparamscount(currfunccall)!=call_params_count)
								{
									yyerror("Number of parameters not same as number of arguments during function call!");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							}
						 ;}
    break;

  case 174:
#line 424 "parser1.y"
    { strcpy(previous_operator,"(");
			             if(!check_declaration(find_pointer_name(current_identifier), "Function"))
			             { yyerror("Function not declared"); exit(0);}
			             insert_SymbolTable_function(find_pointer_name(current_identifier));
						 strcpy(currfunccall,find_pointer_name(current_identifier));
			             ;}
    break;

  case 175:
#line 430 "parser1.y"
    { if(strcmp(currfunccall,"printf"))
							{
								if(getSTparamscount(currfunccall)!=call_params_count)
								{
									yyerror("Number of parameters not same as number of arguments during function call!");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							}
						 ;}
    break;

  case 178:
#line 445 "parser1.y"
    { call_params_count++; ;}
    break;

  case 180:
#line 448 "parser1.y"
    { call_params_count++; ;}
    break;

  case 183:
#line 452 "parser1.y"
    {  insert_type(); (yyval)=1; ;}
    break;

  case 184:
#line 453 "parser1.y"
    {  insert_type(); (yyval)=-1;;}
    break;

  case 185:
#line 454 "parser1.y"
    {  insert_type(); ;}
    break;

  case 186:
#line 455 "parser1.y"
    {  insert_type();(yyval)=1; ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2300 "parser1.tab.c"
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


#line 458 "parser1.y"


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
	exit(1);
}

void insert_type()
{
	insert_SymbolTable_type(current_identifier,current_type);
}
void insert_pointer_type()
{
	insert_SymbolTable_type(find_pointer_name(current_identifier),current_type);
}

void insert_value()
{
	if(strcmp(previous_operator, "=") == 0)
	{	insert_SymbolTable_value(current_identifier,current_value);
	}
}

void insert_pointer_value()
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
void insert_pointer_parameters()
{
    insert_SymbolTable_funcparam(current_function, find_pointer_name(current_identifier));
}
int yywrap()
{
	return 1;
}

