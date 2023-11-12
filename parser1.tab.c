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
	int nested_loop=0;
	

#line 113 "parser1.tab.c"

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

#include "parser1.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_CHAR = 5,                       /* CHAR  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_DOUBLE = 7,                     /* DOUBLE  */
  YYSYMBOL_LONG = 8,                       /* LONG  */
  YYSYMBOL_SHORT = 9,                      /* SHORT  */
  YYSYMBOL_SIGNED = 10,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 11,                  /* UNSIGNED  */
  YYSYMBOL_STRUCT = 12,                    /* STRUCT  */
  YYSYMBOL_UNION = 13,                     /* UNION  */
  YYSYMBOL_RETURN = 14,                    /* RETURN  */
  YYSYMBOL_MAIN = 15,                      /* MAIN  */
  YYSYMBOL_VOID = 16,                      /* VOID  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_DO = 19,                        /* DO  */
  YYSYMBOL_BREAK = 20,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 21,                  /* CONTINUE  */
  YYSYMBOL_GOTO = 22,                      /* GOTO  */
  YYSYMBOL_ENDIF = 23,                     /* ENDIF  */
  YYSYMBOL_SWITCH = 24,                    /* SWITCH  */
  YYSYMBOL_CASE = 25,                      /* CASE  */
  YYSYMBOL_DEFAULT = 26,                   /* DEFAULT  */
  YYSYMBOL_identifier = 27,                /* identifier  */
  YYSYMBOL_array_identifier = 28,          /* array_identifier  */
  YYSYMBOL_integer_constant = 29,          /* integer_constant  */
  YYSYMBOL_string_constant = 30,           /* string_constant  */
  YYSYMBOL_float_constant = 31,            /* float_constant  */
  YYSYMBOL_character_constant = 32,        /* character_constant  */
  YYSYMBOL_ELSE = 33,                      /* ELSE  */
  YYSYMBOL_MOD_EQUAL = 34,                 /* MOD_EQUAL  */
  YYSYMBOL_MULTIPLY_EQUAL = 35,            /* MULTIPLY_EQUAL  */
  YYSYMBOL_DIVIDE_EQUAL = 36,              /* DIVIDE_EQUAL  */
  YYSYMBOL_ADD_EQUAL = 37,                 /* ADD_EQUAL  */
  YYSYMBOL_SUBTRACT_EQUAL = 38,            /* SUBTRACT_EQUAL  */
  YYSYMBOL_39_ = 39,                       /* '='  */
  YYSYMBOL_OR_OR = 40,                     /* OR_OR  */
  YYSYMBOL_AND_AND = 41,                   /* AND_AND  */
  YYSYMBOL_42_ = 42,                       /* '^'  */
  YYSYMBOL_EQUAL = 43,                     /* EQUAL  */
  YYSYMBOL_NOT_EQUAL = 44,                 /* NOT_EQUAL  */
  YYSYMBOL_LESS_EQUAL = 45,                /* LESS_EQUAL  */
  YYSYMBOL_LESS = 46,                      /* LESS  */
  YYSYMBOL_GREAT_EQUAL = 47,               /* GREAT_EQUAL  */
  YYSYMBOL_GREAT = 48,                     /* GREAT  */
  YYSYMBOL_49_ = 49,                       /* '+'  */
  YYSYMBOL_50_ = 50,                       /* '-'  */
  YYSYMBOL_51_ = 51,                       /* '*'  */
  YYSYMBOL_52_ = 52,                       /* '/'  */
  YYSYMBOL_53_ = 53,                       /* '%'  */
  YYSYMBOL_SIZEOF = 54,                    /* SIZEOF  */
  YYSYMBOL_NOT = 55,                       /* NOT  */
  YYSYMBOL_INCREMENT = 56,                 /* INCREMENT  */
  YYSYMBOL_DECREMENT = 57,                 /* DECREMENT  */
  YYSYMBOL_58_ = 58,                       /* '{'  */
  YYSYMBOL_59_ = 59,                       /* '}'  */
  YYSYMBOL_60_ = 60,                       /* ';'  */
  YYSYMBOL_61_ = 61,                       /* ','  */
  YYSYMBOL_62_ = 62,                       /* '['  */
  YYSYMBOL_63_ = 63,                       /* ']'  */
  YYSYMBOL_64_ = 64,                       /* '('  */
  YYSYMBOL_65_ = 65,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_begin_parse = 67,               /* begin_parse  */
  YYSYMBOL_declarations = 68,              /* declarations  */
  YYSYMBOL_declaration = 69,               /* declaration  */
  YYSYMBOL_structure_dec = 70,             /* structure_dec  */
  YYSYMBOL_71_1 = 71,                      /* $@1  */
  YYSYMBOL_structure_content = 72,         /* structure_content  */
  YYSYMBOL_variable_dec = 73,              /* variable_dec  */
  YYSYMBOL_structure_initialize = 74,      /* structure_initialize  */
  YYSYMBOL_variables = 75,                 /* variables  */
  YYSYMBOL_multiple_variables = 76,        /* multiple_variables  */
  YYSYMBOL_identifier_name = 77,           /* identifier_name  */
  YYSYMBOL_78_2 = 78,                      /* $@2  */
  YYSYMBOL_79_3 = 79,                      /* $@3  */
  YYSYMBOL_extended_identifier = 80,       /* extended_identifier  */
  YYSYMBOL_81_4 = 81,                      /* $@4  */
  YYSYMBOL_array_iden = 82,                /* array_iden  */
  YYSYMBOL_array_dims = 83,                /* array_dims  */
  YYSYMBOL_84_5 = 84,                      /* $@5  */
  YYSYMBOL_initilization = 85,             /* initilization  */
  YYSYMBOL_string_initilization = 86,      /* string_initilization  */
  YYSYMBOL_87_6 = 87,                      /* $@6  */
  YYSYMBOL_array_initialization = 88,      /* array_initialization  */
  YYSYMBOL_89_7 = 89,                      /* $@7  */
  YYSYMBOL_array_values = 90,              /* array_values  */
  YYSYMBOL_multiple_array_values = 91,     /* multiple_array_values  */
  YYSYMBOL_datatype = 92,                  /* datatype  */
  YYSYMBOL_unsigned_grammar = 93,          /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 94,            /* signed_grammar  */
  YYSYMBOL_long_grammar = 95,              /* long_grammar  */
  YYSYMBOL_short_grammar = 96,             /* short_grammar  */
  YYSYMBOL_function_dec = 97,              /* function_dec  */
  YYSYMBOL_function_datatype = 98,         /* function_datatype  */
  YYSYMBOL_function_parameters = 99,       /* function_parameters  */
  YYSYMBOL_parameters = 100,               /* parameters  */
  YYSYMBOL_101_8 = 101,                    /* $@8  */
  YYSYMBOL_all_parameter_identifiers = 102, /* all_parameter_identifiers  */
  YYSYMBOL_multiple_parameters = 103,      /* multiple_parameters  */
  YYSYMBOL_parameter_identifier = 104,     /* parameter_identifier  */
  YYSYMBOL_105_9 = 105,                    /* $@9  */
  YYSYMBOL_extended_parameter = 106,       /* extended_parameter  */
  YYSYMBOL_statement = 107,                /* statement  */
  YYSYMBOL_multiple_statement = 108,       /* multiple_statement  */
  YYSYMBOL_109_10 = 109,                   /* $@10  */
  YYSYMBOL_statments = 110,                /* statments  */
  YYSYMBOL_expression_statment = 111,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 112,   /* conditional_statements  */
  YYSYMBOL_113_11 = 113,                   /* $@11  */
  YYSYMBOL_extended_conditional_statements = 114, /* extended_conditional_statements  */
  YYSYMBOL_iterative_statements = 115,     /* iterative_statements  */
  YYSYMBOL_116_12 = 116,                   /* $@12  */
  YYSYMBOL_117_13 = 117,                   /* $@13  */
  YYSYMBOL_118_14 = 118,                   /* $@14  */
  YYSYMBOL_119_15 = 119,                   /* $@15  */
  YYSYMBOL_120_16 = 120,                   /* $@16  */
  YYSYMBOL_121_17 = 121,                   /* $@17  */
  YYSYMBOL_for_initialization = 122,       /* for_initialization  */
  YYSYMBOL_return_statement = 123,         /* return_statement  */
  YYSYMBOL_break_statement = 124,          /* break_statement  */
  YYSYMBOL_continue_statement = 125,       /* continue_statement  */
  YYSYMBOL_expression = 126,               /* expression  */
  YYSYMBOL_simple_expression = 127,        /* simple_expression  */
  YYSYMBOL_and_expression = 128,           /* and_expression  */
  YYSYMBOL_unary_relation_expression = 129, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 130,       /* regular_expression  */
  YYSYMBOL_relational_operators = 131,     /* relational_operators  */
  YYSYMBOL_sum_expression = 132,           /* sum_expression  */
  YYSYMBOL_sum_operators = 133,            /* sum_operators  */
  YYSYMBOL_term = 134,                     /* term  */
  YYSYMBOL_MULOP = 135,                    /* MULOP  */
  YYSYMBOL_factor = 136,                   /* factor  */
  YYSYMBOL_mutable = 137,                  /* mutable  */
  YYSYMBOL_138_18 = 138,                   /* $@18  */
  YYSYMBOL_immutable = 139,                /* immutable  */
  YYSYMBOL_call = 140,                     /* call  */
  YYSYMBOL_141_19 = 141,                   /* $@19  */
  YYSYMBOL_arguments = 142,                /* arguments  */
  YYSYMBOL_arguments_list = 143,           /* arguments_list  */
  YYSYMBOL_144_20 = 144,                   /* $@20  */
  YYSYMBOL_A = 145,                        /* A  */
  YYSYMBOL_146_21 = 146,                   /* $@21  */
  YYSYMBOL_constant = 147                  /* constant  */
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
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   332

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
       2,     2,     2,     2,     2,     2,     2,    53,     2,     2,
      64,    65,    51,    49,    61,    50,     2,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    60,
       2,    39,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    62,     2,    63,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    58,     2,    59,     2,     2,     2,     2,
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
      35,    36,    37,    38,    40,    41,    43,    44,    45,    46,
      47,    48,    54,    55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    80,    80,    83,    84,    88,    89,    90,    93,    93,
      95,    95,    98,    99,   102,   105,   108,   109,   112,   112,
     115,   115,   117,   117,   117,   120,   121,   124,   124,   125,
     128,   129,   130,   133,   133,   136,   136,   139,   142,   143,
     147,   147,   147,   147,   148,   149,   150,   151,   152,   155,
     155,   155,   155,   158,   158,   158,   158,   161,   161,   164,
     164,   167,   170,   173,   176,   176,   176,   179,   182,   183,
     186,   186,   189,   190,   193,   193,   194,   194,   195,   195,
     195,   196,   199,   199,   202,   203,   206,   207,   210,   210,
     213,   214,   217,   217,   217,   218,   218,   218,   219,   219,
     219,   222,   223,   224,   227,   228,   241,   244,   247,   255,
     261,   268,   274,   280,   287,   288,   289,   293,   294,   297,
     298,   301,   302,   305,   306,   309,   310,   311,   312,   313,
     314,   317,   318,   321,   322,   325,   326,   329,   329,   329,
     332,   333,   336,   346,   346,   354,   355,   356,   359,   359,
     377,   377,   380,   380,   383,   383,   384,   387,   388,   389,
     390
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "INT", "CHAR",
  "FLOAT", "DOUBLE", "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT",
  "UNION", "RETURN", "MAIN", "VOID", "WHILE", "FOR", "DO", "BREAK",
  "CONTINUE", "GOTO", "ENDIF", "SWITCH", "CASE", "DEFAULT", "identifier",
  "array_identifier", "integer_constant", "string_constant",
  "float_constant", "character_constant", "ELSE", "MOD_EQUAL",
  "MULTIPLY_EQUAL", "DIVIDE_EQUAL", "ADD_EQUAL", "SUBTRACT_EQUAL", "'='",
  "OR_OR", "AND_AND", "'^'", "EQUAL", "NOT_EQUAL", "LESS_EQUAL", "LESS",
  "GREAT_EQUAL", "GREAT", "'+'", "'-'", "'*'", "'/'", "'%'", "SIZEOF",
  "NOT", "INCREMENT", "DECREMENT", "'{'", "'}'", "';'", "','", "'['",
  "']'", "'('", "')'", "$accept", "begin_parse", "declarations",
  "declaration", "structure_dec", "$@1", "structure_content",
  "variable_dec", "structure_initialize", "variables",
  "multiple_variables", "identifier_name", "$@2", "$@3",
  "extended_identifier", "$@4", "array_iden", "array_dims", "$@5",
  "initilization", "string_initilization", "$@6", "array_initialization",
  "$@7", "array_values", "multiple_array_values", "datatype",
  "unsigned_grammar", "signed_grammar", "long_grammar", "short_grammar",
  "function_dec", "function_datatype", "function_parameters", "parameters",
  "$@8", "all_parameter_identifiers", "multiple_parameters",
  "parameter_identifier", "$@9", "extended_parameter", "statement",
  "multiple_statement", "$@10", "statments", "expression_statment",
  "conditional_statements", "$@11", "extended_conditional_statements",
  "iterative_statements", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17",
  "for_initialization", "return_statement", "break_statement",
  "continue_statement", "expression", "simple_expression",
  "and_expression", "unary_relation_expression", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "$@18", "immutable", "call", "$@19",
  "arguments", "arguments_list", "$@20", "A", "$@21", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-105)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     132,  -105,  -105,  -105,  -105,    17,    56,    11,    21,    34,
    -105,    13,  -105,   132,  -105,  -105,  -105,     9,  -105,   117,
    -105,  -105,  -105,  -105,  -105,    17,    56,  -105,  -105,    17,
      56,  -105,    29,  -105,  -105,     0,  -105,     8,    18,  -105,
    -105,    15,  -105,  -105,  -105,  -105,  -105,    30,  -105,  -105,
     -15,   -15,  -105,    29,  -105,    60,   230,   197,  -105,   -18,
    -105,  -105,  -105,  -105,  -105,  -105,    37,    35,    73,    12,
    -105,  -105,  -105,    42,    45,    43,  -105,  -105,  -105,  -105,
    -105,    65,  -105,    65,  -105,    29,  -105,  -105,    48,  -105,
    -105,  -105,  -105,  -105,  -105,    57,    79,    89,  -105,   171,
      28,    22,  -105,    14,  -105,  -105,  -105,    72,   197,    65,
    -105,    93,  -105,    84,   117,  -105,    65,    29,  -105,    75,
      81,    85,   230,  -105,  -105,  -105,    88,  -105,  -105,    86,
     168,  -105,    65,    65,  -105,  -105,  -105,  -105,  -105,  -105,
      83,  -105,  -105,    83,  -105,  -105,  -105,    83,    65,    65,
      65,    65,    65,    65,  -105,  -105,    95,  -105,    79,    90,
    -105,  -105,    94,  -105,  -105,   -32,  -105,    65,   268,   139,
      65,    65,  -105,   168,    99,    89,  -105,    28,    22,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,   120,   131,  -105,
    -105,   -31,  -105,  -105,    65,   103,   100,  -105,   101,  -105,
     102,  -105,  -105,   109,  -105,  -105,  -105,  -105,   230,  -105,
     -14,  -105,    65,   129,  -105,  -105,   112,   148,   230,  -105,
     -30,    65,  -105,   162,   230,  -105,  -105,    65,  -105,  -105,
     133,   134,  -105,   127,   150,   129,   162,  -105,  -105,   230,
    -105,  -105,  -105,  -105
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    40,    41,    42,    43,    58,    60,    56,    52,     0,
      48,     0,     2,     4,     7,     5,    13,     0,     6,    66,
      57,    44,    59,    45,    53,    58,    60,    47,    49,    58,
      60,    46,     8,     1,     3,    18,    20,     0,    17,    64,
      61,     0,    54,    55,    50,    51,    18,     0,    14,    62,
      26,    26,    12,     0,    15,     0,    82,    11,    23,     0,
      19,    22,    21,    16,    70,    65,    69,     0,     0,     0,
      92,    95,    98,     0,     0,   142,   143,   157,   158,   159,
     160,     0,    87,     0,    81,     0,    63,    75,     0,    74,
      76,    77,    78,    79,    80,     0,   116,   118,   120,   122,
     124,   132,   136,   141,   140,   146,   147,     0,    11,     0,
      27,     0,    25,    73,    66,    67,     0,     0,   104,     0,
       0,     0,    82,   106,   107,   148,     0,   121,   141,     0,
      82,    86,     0,     0,   129,   130,   126,   128,   125,   127,
       0,   133,   134,     0,   137,   138,   139,     0,     0,     0,
       0,     0,     0,     0,   114,   115,     0,    10,    24,     0,
      33,    29,     0,    71,    68,     0,   105,     0,     0,     0,
     151,     0,   145,    82,     0,   117,   119,   123,   131,   135,
     113,   111,   112,   109,   110,   108,     9,    32,     0,    72,
      88,     0,   103,   101,     0,     0,     0,   152,     0,   150,
       0,    84,    83,    33,    28,    30,    31,    34,    82,    93,
       0,   102,     0,   156,   149,   144,     0,    91,    82,    96,
       0,     0,   153,     0,    82,    89,    94,     0,    99,   154,
      39,     0,    90,     0,     0,   156,     0,    37,    36,    82,
     100,   155,    38,    97
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,   198,  -105,  -105,  -105,   104,     1,  -105,   -26,
    -105,  -105,  -105,  -105,   169,  -105,  -105,  -105,  -105,  -105,
      38,  -105,  -105,  -105,   -12,  -105,     4,  -105,  -105,    -7,
       2,  -105,  -105,  -105,   107,  -105,  -105,  -105,  -105,  -105,
    -105,   -56,  -105,  -105,    49,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,  -105,
     -67,  -104,    97,   -74,  -105,  -105,    91,  -105,    87,  -105,
      96,   -78,  -105,  -105,  -105,  -105,  -105,  -105,  -105,    -9,
    -105,  -105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    47,   107,    84,    16,    37,
      54,    38,    50,    51,    60,   109,    61,   112,   159,   204,
     161,   188,   206,   216,   231,   237,    85,    31,    27,    21,
      23,    18,    19,    40,    41,    55,    65,   115,    66,   113,
     163,   173,    87,    88,   174,    89,    90,   208,   225,    91,
     120,   218,   121,   227,   122,   234,   194,    92,    93,    94,
      95,    96,    97,    98,    99,   140,   100,   143,   101,   147,
     102,   103,   126,   104,   105,   170,   198,   199,   213,   222,
     235,   106
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,    15,   119,   128,    17,   158,    48,   127,   132,   132,
     132,   110,   165,    33,    15,    24,   129,    17,    42,    25,
      26,    20,    44,    39,    58,    28,   132,    63,    43,    29,
      30,   128,    45,   190,   209,   228,    35,    36,   128,    75,
      76,    77,    78,    79,    80,   111,   219,    59,   148,   149,
     150,   151,   152,   153,   128,   128,    46,    36,   108,   176,
      22,    32,   128,   191,    49,   128,   169,    81,    52,   128,
     154,   155,   118,   144,   145,   146,    83,   141,   142,    53,
      56,   180,   181,   182,   183,   184,   185,    64,    57,   128,
     210,    48,    75,    76,    77,    78,    79,    80,   114,   116,
     117,   195,   123,   197,   200,   124,   130,   125,   220,   108,
      75,    76,    77,    78,    79,    80,   128,   131,    39,   132,
      81,     1,     2,     3,     4,     5,     6,     7,     8,    83,
     133,   156,   160,    10,   128,   166,     1,     2,     3,     4,
       5,     6,     7,     8,     9,   167,   162,    83,    10,   168,
     171,   172,   217,   187,   229,   186,   196,   189,   202,   203,
     233,   207,   226,   211,   212,   215,   214,   -35,   232,   193,
     223,    67,     1,     2,     3,     4,     5,     6,     7,     8,
      68,   224,    69,   243,    10,    70,    71,    72,    73,    74,
     221,   230,   239,   238,   236,    75,    76,    77,    78,    79,
      80,     1,     2,     3,     4,     5,     6,     7,     8,    68,
     240,    34,   157,    10,   134,   135,   136,   137,   138,   139,
      62,   164,   201,    81,   242,   205,   241,   -85,    82,   175,
     178,   177,    83,    67,     1,     2,     3,     4,     5,     6,
       7,     8,    68,   179,    69,     0,    10,    70,    71,    72,
      73,    74,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
      68,     0,     0,     0,    10,    81,     0,     0,     0,     0,
      82,     0,     0,     0,    83,    75,    76,    77,    78,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,   192,     0,
       0,     0,    83
};

static const yytype_int16 yycheck[] =
{
      56,     0,    69,    81,     0,   109,    32,    81,    40,    40,
      40,    29,   116,     0,    13,     4,    83,    13,    25,     8,
       9,     4,    29,    19,    39,     4,    40,    53,    26,     8,
       9,   109,    30,    65,    65,    65,    27,    28,   116,    27,
      28,    29,    30,    31,    32,    63,    60,    62,    34,    35,
      36,    37,    38,    39,   132,   133,    27,    28,    57,   133,
       4,    27,   140,   167,    64,   143,   122,    55,    60,   147,
      56,    57,    60,    51,    52,    53,    64,    49,    50,    61,
      65,   148,   149,   150,   151,   152,   153,    27,    58,   167,
     194,   117,    27,    28,    29,    30,    31,    32,    61,    64,
      27,   168,    60,   170,   171,    60,    58,    64,   212,   108,
      27,    28,    29,    30,    31,    32,   194,    60,   114,    40,
      55,     4,     5,     6,     7,     8,     9,    10,    11,    64,
      41,    59,    39,    16,   212,    60,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    64,    62,    64,    16,    64,
      62,    65,   208,    63,   221,    60,    17,    63,    59,    39,
     227,    30,   218,    60,    64,    63,    65,    58,   224,   168,
      58,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    33,    14,   239,    16,    17,    18,    19,    20,    21,
      61,    29,    65,    59,    61,    27,    28,    29,    30,    31,
      32,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      60,    13,   108,    16,    43,    44,    45,    46,    47,    48,
      51,   114,   173,    55,   236,   187,   235,    59,    60,   132,
     143,   140,    64,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,   147,    14,    -1,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    16,    55,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    64,    27,    28,    29,    30,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      16,    67,    68,    69,    70,    73,    74,    92,    97,    98,
       4,    95,     4,    96,     4,     8,     9,    94,     4,     8,
       9,    93,    27,     0,    68,    27,    28,    75,    77,    92,
      99,   100,    95,    96,    95,    96,    27,    71,    75,    64,
      78,    79,    60,    61,    76,   101,    65,    58,    39,    62,
      80,    82,    80,    75,    27,   102,   104,     3,    12,    14,
      17,    18,    19,    20,    21,    27,    28,    29,    30,    31,
      32,    55,    60,    64,    73,    92,   107,   108,   109,   111,
     112,   115,   123,   124,   125,   126,   127,   128,   129,   130,
     132,   134,   136,   137,   139,   140,   147,    72,    73,    81,
      29,    63,    83,   105,    61,   103,    64,    27,    60,   126,
     116,   118,   120,    60,    60,    64,   138,   129,   137,   126,
      58,    60,    40,    41,    43,    44,    45,    46,    47,    48,
     131,    49,    50,   133,    51,    52,    53,   135,    34,    35,
      36,    37,    38,    39,    56,    57,    59,    72,   127,    84,
      39,    86,    62,   106,   100,   127,    60,    64,    64,   107,
     141,    62,    65,   107,   110,   128,   129,   132,   134,   136,
     126,   126,   126,   126,   126,   126,    60,    63,    87,    63,
      65,   127,    60,    73,   122,   126,    17,   126,   142,   143,
     126,   110,    59,    39,    85,    86,    88,    30,   113,    65,
     127,    60,    64,   144,    65,    63,    89,   107,   117,    60,
     127,    61,   145,    58,    33,   114,   107,   119,    65,   126,
      29,    90,   107,   126,   121,   146,    61,    91,    59,    65,
      60,   145,    90,   107
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    69,    69,    71,    70,
      72,    72,    73,    73,    74,    75,    76,    76,    78,    77,
      79,    77,    80,    81,    80,    82,    82,    84,    83,    83,
      85,    85,    85,    87,    86,    89,    88,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    94,    94,    94,    94,    95,    95,    96,
      96,    97,    98,    99,   101,   100,   100,   102,   103,   103,
     105,   104,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   109,   108,   110,   110,   111,   111,   113,   112,
     114,   114,   116,   117,   115,   118,   119,   115,   120,   121,
     115,   122,   122,   122,   123,   123,   124,   125,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   131,
     131,   132,   132,   133,   133,   134,   134,   135,   135,   135,
     136,   136,   137,   138,   137,   139,   139,   139,   141,   140,
     142,   142,   144,   143,   146,   145,   145,   147,   147,   147,
     147
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     7,
       2,     0,     3,     1,     3,     2,     2,     0,     0,     3,
       0,     3,     1,     0,     3,     2,     0,     0,     4,     2,
       1,     1,     0,     0,     3,     0,     5,     2,     2,     0,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       2,     2,     0,     1,     2,     2,     0,     1,     0,     1,
       0,     2,     3,     3,     0,     3,     0,     2,     2,     0,
       0,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     2,     0,     2,     1,     0,     7,
       2,     0,     0,     0,     7,     0,     0,    10,     0,     0,
       9,     1,     2,     1,     2,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     2,     2,     1,     3,     1,     3,
       1,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     3,     1,     1,     0,     5,
       1,     0,     0,     3,     0,     4,     0,     1,     1,     1,
       1
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
  case 8: /* $@1: %empty  */
#line 93 "parser1.y"
                                            { insert_type(); }
#line 1468 "parser1.tab.c"
    break;

  case 18: /* $@2: %empty  */
#line 112 "parser1.y"
                                     { if(check_function(current_identifier))
						  {yyerror("ERROR: Identifier cannot be same as function name!\n"); exit(8);}
						  if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type(); }
#line 1476 "parser1.tab.c"
    break;

  case 20: /* $@3: %empty  */
#line 115 "parser1.y"
                                           {if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type();  }
#line 1482 "parser1.tab.c"
    break;

  case 23: /* $@4: %empty  */
#line 117 "parser1.y"
                                      {strcpy(previous_operator,"=");}
#line 1488 "parser1.tab.c"
    break;

  case 27: /* $@5: %empty  */
#line 124 "parser1.y"
                                           {insert_dimensions();}
#line 1494 "parser1.tab.c"
    break;

  case 28: /* array_dims: integer_constant $@5 ']' initilization  */
#line 124 "parser1.y"
                                                                                   {if(yyval < 1) {yyerror("Array must have size greater than 1!\n"); exit(0);} }
#line 1500 "parser1.tab.c"
    break;

  case 33: /* $@6: %empty  */
#line 133 "parser1.y"
                             {strcpy(previous_operator,"=");}
#line 1506 "parser1.tab.c"
    break;

  case 34: /* string_initilization: '=' $@6 string_constant  */
#line 133 "parser1.y"
                                                                              { insert_value(); }
#line 1512 "parser1.tab.c"
    break;

  case 35: /* $@7: %empty  */
#line 136 "parser1.y"
                             {strcpy(previous_operator,"=");}
#line 1518 "parser1.tab.c"
    break;

  case 62: /* function_datatype: datatype identifier '('  */
#line 170 "parser1.y"
                                                   {strcpy(currfunctype, current_type); check_duplicate(current_identifier); insert_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();}
#line 1524 "parser1.tab.c"
    break;

  case 64: /* $@8: %empty  */
#line 176 "parser1.y"
                                   { check_params(current_type); }
#line 1530 "parser1.tab.c"
    break;

  case 65: /* parameters: datatype $@8 all_parameter_identifiers  */
#line 176 "parser1.y"
                                                                                             {insert_SymbolTable_paramscount(current_function, params_count);}
#line 1536 "parser1.tab.c"
    break;

  case 70: /* $@9: %empty  */
#line 186 "parser1.y"
                                     {insert_parameters(); insert_type(); insert_SymbolTable_nest(current_identifier,1); params_count++;}
#line 1542 "parser1.tab.c"
    break;

  case 82: /* $@10: %empty  */
#line 199 "parser1.y"
                         {current_nested_val++;}
#line 1548 "parser1.tab.c"
    break;

  case 83: /* multiple_statement: $@10 '{' statments '}'  */
#line 199 "parser1.y"
                                                                   {remove_scope(current_nested_val);current_nested_val--;}
#line 1554 "parser1.tab.c"
    break;

  case 88: /* $@11: %empty  */
#line 210 "parser1.y"
                                                       {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1560 "parser1.tab.c"
    break;

  case 92: /* $@12: %empty  */
#line 217 "parser1.y"
                                {nested_loop++; printf("loop value: %d", nested_loop);}
#line 1566 "parser1.tab.c"
    break;

  case 93: /* $@13: %empty  */
#line 217 "parser1.y"
                                                                                                                {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1572 "parser1.tab.c"
    break;

  case 94: /* iterative_statements: WHILE $@12 '(' simple_expression ')' $@13 statement  */
#line 217 "parser1.y"
                                                                                                                                                                                                             {nested_loop--;}
#line 1578 "parser1.tab.c"
    break;

  case 95: /* $@14: %empty  */
#line 218 "parser1.y"
                              {nested_loop++; printf("loop value: %d", nested_loop);}
#line 1584 "parser1.tab.c"
    break;

  case 96: /* $@15: %empty  */
#line 218 "parser1.y"
                                                                                                                                  {if(yyvsp[-1]!=1){yyerror("Here, condition must have integer value!\n");exit(0);}}
#line 1590 "parser1.tab.c"
    break;

  case 97: /* iterative_statements: FOR $@14 '(' for_initialization simple_expression ';' $@15 expression ')' statement  */
#line 218 "parser1.y"
                                                                                                                                                                                                                                       {nested_loop--;}
#line 1596 "parser1.tab.c"
    break;

  case 98: /* $@16: %empty  */
#line 219 "parser1.y"
                             {nested_loop++;printf("loop value: %d", nested_loop);}
#line 1602 "parser1.tab.c"
    break;

  case 99: /* $@17: %empty  */
#line 219 "parser1.y"
                                                                                                                             {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1608 "parser1.tab.c"
    break;

  case 100: /* iterative_statements: DO $@16 statement WHILE '(' simple_expression ')' $@17 ';'  */
#line 219 "parser1.y"
                                                                                                                                                                                                                    {nested_loop--;}
#line 1614 "parser1.tab.c"
    break;

  case 104: /* return_statement: RETURN ';'  */
#line 227 "parser1.y"
                                     {if(strcmp(currfunctype,"void")) {yyerror("ERROR: Cannot have void return for non-void function!\n"); exit(0);}}
#line 1620 "parser1.tab.c"
    break;

  case 105: /* return_statement: RETURN expression ';'  */
#line 228 "parser1.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("Non-void return for void function!"); exit(0);
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); exit(0);
										}

			                     	}
#line 1636 "parser1.tab.c"
    break;

  case 106: /* break_statement: BREAK ';'  */
#line 241 "parser1.y"
                                    {if(nested_loop==0) {yyerror("can't use break statement outside loop\n");}}
#line 1642 "parser1.tab.c"
    break;

  case 107: /* continue_statement: CONTINUE ';'  */
#line 244 "parser1.y"
               {if(nested_loop==0) {yyerror("can't use continue statement outside loop\n");}}
#line 1648 "parser1.tab.c"
    break;

  case 108: /* expression: mutable '=' expression  */
#line 247 "parser1.y"
                                                              {					strcpy(previous_operator,"=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
																	  {
			                                                          yyval=1;
			                                                          }
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1661 "parser1.tab.c"
    break;

  case 109: /* expression: mutable ADD_EQUAL expression  */
#line 255 "parser1.y"
                                                           {					strcpy(previous_operator,"+=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1672 "parser1.tab.c"
    break;

  case 110: /* expression: mutable SUBTRACT_EQUAL expression  */
#line 261 "parser1.y"
                                                             {					strcpy(previous_operator,"-=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1683 "parser1.tab.c"
    break;

  case 111: /* expression: mutable MULTIPLY_EQUAL expression  */
#line 268 "parser1.y"
                                                            {					strcpy(previous_operator,"*=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1694 "parser1.tab.c"
    break;

  case 112: /* expression: mutable DIVIDE_EQUAL expression  */
#line 274 "parser1.y"
                                                                        {				strcpy(previous_operator,"/=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1705 "parser1.tab.c"
    break;

  case 113: /* expression: mutable MOD_EQUAL expression  */
#line 280 "parser1.y"
                                                                {					strcpy(previous_operator,"%=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1716 "parser1.tab.c"
    break;

  case 114: /* expression: mutable INCREMENT  */
#line 287 "parser1.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1722 "parser1.tab.c"
    break;

  case 115: /* expression: mutable DECREMENT  */
#line 288 "parser1.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1728 "parser1.tab.c"
    break;

  case 116: /* expression: simple_expression  */
#line 289 "parser1.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1734 "parser1.tab.c"
    break;

  case 117: /* simple_expression: simple_expression OR_OR and_expression  */
#line 293 "parser1.y"
                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1740 "parser1.tab.c"
    break;

  case 118: /* simple_expression: and_expression  */
#line 294 "parser1.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1746 "parser1.tab.c"
    break;

  case 119: /* and_expression: and_expression AND_AND unary_relation_expression  */
#line 297 "parser1.y"
                                                                           {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1752 "parser1.tab.c"
    break;

  case 120: /* and_expression: unary_relation_expression  */
#line 298 "parser1.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1758 "parser1.tab.c"
    break;

  case 121: /* unary_relation_expression: NOT unary_relation_expression  */
#line 301 "parser1.y"
                                                        {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1764 "parser1.tab.c"
    break;

  case 122: /* unary_relation_expression: regular_expression  */
#line 302 "parser1.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1770 "parser1.tab.c"
    break;

  case 123: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 305 "parser1.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1776 "parser1.tab.c"
    break;

  case 124: /* regular_expression: sum_expression  */
#line 306 "parser1.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1782 "parser1.tab.c"
    break;

  case 125: /* relational_operators: GREAT_EQUAL  */
#line 309 "parser1.y"
                                     {strcpy(previous_operator,">=");}
#line 1788 "parser1.tab.c"
    break;

  case 126: /* relational_operators: LESS_EQUAL  */
#line 310 "parser1.y"
                                    {strcpy(previous_operator,"<=");}
#line 1794 "parser1.tab.c"
    break;

  case 127: /* relational_operators: GREAT  */
#line 311 "parser1.y"
                               {strcpy(previous_operator,">");}
#line 1800 "parser1.tab.c"
    break;

  case 128: /* relational_operators: LESS  */
#line 312 "parser1.y"
                              {strcpy(previous_operator,"<");}
#line 1806 "parser1.tab.c"
    break;

  case 129: /* relational_operators: EQUAL  */
#line 313 "parser1.y"
                               {strcpy(previous_operator,"==");}
#line 1812 "parser1.tab.c"
    break;

  case 130: /* relational_operators: NOT_EQUAL  */
#line 314 "parser1.y"
                                   {strcpy(previous_operator,"!=");}
#line 1818 "parser1.tab.c"
    break;

  case 131: /* sum_expression: sum_expression sum_operators term  */
#line 317 "parser1.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1824 "parser1.tab.c"
    break;

  case 132: /* sum_expression: term  */
#line 318 "parser1.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1830 "parser1.tab.c"
    break;

  case 135: /* term: term MULOP factor  */
#line 325 "parser1.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1836 "parser1.tab.c"
    break;

  case 136: /* term: factor  */
#line 326 "parser1.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1842 "parser1.tab.c"
    break;

  case 140: /* factor: immutable  */
#line 332 "parser1.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1848 "parser1.tab.c"
    break;

  case 141: /* factor: mutable  */
#line 333 "parser1.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1854 "parser1.tab.c"
    break;

  case 142: /* mutable: identifier  */
#line 336 "parser1.y"
                                     {
			              if(!check_scope(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}
			              if(!check_array(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Array Identifier has No Subscript\n");exit(0);}
			              if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              yyval = 1;
			              else
			              yyval = -1;
			              }
#line 1869 "parser1.tab.c"
    break;

  case 143: /* $@18: %empty  */
#line 346 "parser1.y"
                                           {if(!check_scope(current_identifier)){printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}}
#line 1875 "parser1.tab.c"
    break;

  case 144: /* mutable: array_identifier $@18 '[' expression ']'  */
#line 347 "parser1.y"
                                           {if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 1885 "parser1.tab.c"
    break;

  case 145: /* immutable: '(' expression ')'  */
#line 354 "parser1.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 1891 "parser1.tab.c"
    break;

  case 147: /* immutable: constant  */
#line 356 "parser1.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1897 "parser1.tab.c"
    break;

  case 148: /* $@19: %empty  */
#line 359 "parser1.y"
                                        { strcpy(previous_operator,"(");
			             if(!check_declaration(current_identifier, "Function"))
			             { yyerror("Function not declared"); exit(0);}
			             insert_SymbolTable_function(current_identifier);
						 strcpy(currfunccall,current_identifier);
			             }
#line 1908 "parser1.tab.c"
    break;

  case 149: /* call: identifier '(' $@19 arguments ')'  */
#line 365 "parser1.y"
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
#line 1923 "parser1.tab.c"
    break;

  case 152: /* $@20: %empty  */
#line 380 "parser1.y"
                                     { call_params_count++; }
#line 1929 "parser1.tab.c"
    break;

  case 154: /* $@21: %empty  */
#line 383 "parser1.y"
                                         { call_params_count++; }
#line 1935 "parser1.tab.c"
    break;

  case 157: /* constant: integer_constant  */
#line 387 "parser1.y"
                                                {  insert_type(); yyval=1; }
#line 1941 "parser1.tab.c"
    break;

  case 158: /* constant: string_constant  */
#line 388 "parser1.y"
                                                {  insert_type(); yyval=-1;}
#line 1947 "parser1.tab.c"
    break;

  case 159: /* constant: float_constant  */
#line 389 "parser1.y"
                                                {  insert_type(); }
#line 1953 "parser1.tab.c"
    break;

  case 160: /* constant: character_constant  */
#line 390 "parser1.y"
                                            {  insert_type();yyval=1; }
#line 1959 "parser1.tab.c"
    break;


#line 1963 "parser1.tab.c"

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

#line 393 "parser1.y"


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
