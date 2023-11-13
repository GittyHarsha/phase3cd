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


		
void pop(void);
void push(int);
void display(void);
void isempty(void);
void isfull(void);

extern int t;
extern int call_params_stack[1000];

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

	

#line 131 "parser1.tab.c"

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
  YYSYMBOL_66_ = 66,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 67,                  /* $accept  */
  YYSYMBOL_begin_parse = 68,               /* begin_parse  */
  YYSYMBOL_declarations = 69,              /* declarations  */
  YYSYMBOL_declaration = 70,               /* declaration  */
  YYSYMBOL_structure_dec = 71,             /* structure_dec  */
  YYSYMBOL_72_1 = 72,                      /* $@1  */
  YYSYMBOL_structure_content = 73,         /* structure_content  */
  YYSYMBOL_variable_dec = 74,              /* variable_dec  */
  YYSYMBOL_structure_initialize = 75,      /* structure_initialize  */
  YYSYMBOL_variables = 76,                 /* variables  */
  YYSYMBOL_multiple_variables = 77,        /* multiple_variables  */
  YYSYMBOL_identifier_name = 78,           /* identifier_name  */
  YYSYMBOL_79_2 = 79,                      /* $@2  */
  YYSYMBOL_80_3 = 80,                      /* $@3  */
  YYSYMBOL_extended_identifier = 81,       /* extended_identifier  */
  YYSYMBOL_82_4 = 82,                      /* $@4  */
  YYSYMBOL_array_iden = 83,                /* array_iden  */
  YYSYMBOL_array_dims = 84,                /* array_dims  */
  YYSYMBOL_dims = 85,                      /* dims  */
  YYSYMBOL_86_5 = 86,                      /* $@5  */
  YYSYMBOL_initilization = 87,             /* initilization  */
  YYSYMBOL_string_initilization = 88,      /* string_initilization  */
  YYSYMBOL_89_6 = 89,                      /* $@6  */
  YYSYMBOL_array_initialization = 90,      /* array_initialization  */
  YYSYMBOL_91_7 = 91,                      /* $@7  */
  YYSYMBOL_92_8 = 92,                      /* $@8  */
  YYSYMBOL_multiple_array_values = 93,     /* multiple_array_values  */
  YYSYMBOL_94_9 = 94,                      /* $@9  */
  YYSYMBOL_array_values = 95,              /* array_values  */
  YYSYMBOL_96_10 = 96,                     /* $@10  */
  YYSYMBOL_97_11 = 97,                     /* $@11  */
  YYSYMBOL_pointer_datatype = 98,          /* pointer_datatype  */
  YYSYMBOL_datatype = 99,                  /* datatype  */
  YYSYMBOL_unsigned_grammar = 100,         /* unsigned_grammar  */
  YYSYMBOL_signed_grammar = 101,           /* signed_grammar  */
  YYSYMBOL_long_grammar = 102,             /* long_grammar  */
  YYSYMBOL_short_grammar = 103,            /* short_grammar  */
  YYSYMBOL_function_dec = 104,             /* function_dec  */
  YYSYMBOL_function_datatype = 105,        /* function_datatype  */
  YYSYMBOL_function_parameters = 106,      /* function_parameters  */
  YYSYMBOL_parameters = 107,               /* parameters  */
  YYSYMBOL_108_12 = 108,                   /* $@12  */
  YYSYMBOL_all_parameter_identifiers = 109, /* all_parameter_identifiers  */
  YYSYMBOL_multiple_parameters = 110,      /* multiple_parameters  */
  YYSYMBOL_parameter_identifier = 111,     /* parameter_identifier  */
  YYSYMBOL_112_13 = 112,                   /* $@13  */
  YYSYMBOL_extended_parameter = 113,       /* extended_parameter  */
  YYSYMBOL_statement = 114,                /* statement  */
  YYSYMBOL_multiple_statement = 115,       /* multiple_statement  */
  YYSYMBOL_116_14 = 116,                   /* $@14  */
  YYSYMBOL_statments = 117,                /* statments  */
  YYSYMBOL_expression_statment = 118,      /* expression_statment  */
  YYSYMBOL_conditional_statements = 119,   /* conditional_statements  */
  YYSYMBOL_120_15 = 120,                   /* $@15  */
  YYSYMBOL_switch_statement = 121,         /* switch_statement  */
  YYSYMBOL_122_16 = 122,                   /* $@16  */
  YYSYMBOL_case_list = 123,                /* case_list  */
  YYSYMBOL_124_17 = 124,                   /* $@17  */
  YYSYMBOL_extended_conditional_statements = 125, /* extended_conditional_statements  */
  YYSYMBOL_iterative_statements = 126,     /* iterative_statements  */
  YYSYMBOL_127_18 = 127,                   /* $@18  */
  YYSYMBOL_128_19 = 128,                   /* $@19  */
  YYSYMBOL_129_20 = 129,                   /* $@20  */
  YYSYMBOL_130_21 = 130,                   /* $@21  */
  YYSYMBOL_131_22 = 131,                   /* $@22  */
  YYSYMBOL_132_23 = 132,                   /* $@23  */
  YYSYMBOL_for_initialization = 133,       /* for_initialization  */
  YYSYMBOL_for_simple_expression = 134,    /* for_simple_expression  */
  YYSYMBOL_for_expression = 135,           /* for_expression  */
  YYSYMBOL_return_statement = 136,         /* return_statement  */
  YYSYMBOL_break_statement = 137,          /* break_statement  */
  YYSYMBOL_continue_statement = 138,       /* continue_statement  */
  YYSYMBOL_expression = 139,               /* expression  */
  YYSYMBOL_simple_expression = 140,        /* simple_expression  */
  YYSYMBOL_and_expression = 141,           /* and_expression  */
  YYSYMBOL_unary_relation_expression = 142, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 143,       /* regular_expression  */
  YYSYMBOL_relational_operators = 144,     /* relational_operators  */
  YYSYMBOL_sum_expression = 145,           /* sum_expression  */
  YYSYMBOL_sum_operators = 146,            /* sum_operators  */
  YYSYMBOL_term = 147,                     /* term  */
  YYSYMBOL_MULOP = 148,                    /* MULOP  */
  YYSYMBOL_factor = 149,                   /* factor  */
  YYSYMBOL_mutable = 150,                  /* mutable  */
  YYSYMBOL_151_24 = 151,                   /* $@24  */
  YYSYMBOL_immutable = 152,                /* immutable  */
  YYSYMBOL_call = 153,                     /* call  */
  YYSYMBOL_154_25 = 154,                   /* $@25  */
  YYSYMBOL_arguments = 155,                /* arguments  */
  YYSYMBOL_arguments_list = 156,           /* arguments_list  */
  YYSYMBOL_157_26 = 157,                   /* $@26  */
  YYSYMBOL_A = 158,                        /* A  */
  YYSYMBOL_159_27 = 159,                   /* $@27  */
  YYSYMBOL_constant = 160                  /* constant  */
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
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   347

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  181
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  280

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
       2,     2,     2,     2,     2,     2,     2,     2,    66,    60,
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
       0,    98,    98,   101,   102,   106,   107,   108,   111,   111,
     113,   113,   117,   118,   119,   122,   125,   128,   129,   132,
     132,   135,   135,   137,   137,   137,   140,   141,   144,   145,
     148,   149,   149,   153,   154,   155,   158,   158,   162,   162,
     162,   166,   166,   168,   168,   168,   169,   170,   173,   174,
     178,   178,   178,   178,   179,   180,   181,   182,   183,   186,
     186,   186,   186,   189,   189,   189,   189,   192,   192,   195,
     195,   198,   201,   204,   207,   207,   207,   210,   213,   214,
     217,   217,   220,   221,   224,   224,   225,   225,   226,   226,
     226,   227,   230,   230,   233,   234,   237,   238,   241,   241,
     242,   245,   245,   248,   249,   249,   251,   255,   256,   259,
     259,   259,   260,   260,   260,   261,   261,   261,   264,   265,
     266,   269,   270,   273,   274,   276,   277,   290,   293,   296,
     304,   310,   317,   323,   329,   336,   337,   338,   342,   343,
     347,   348,   351,   352,   355,   356,   360,   361,   362,   363,
     364,   365,   368,   369,   372,   373,   376,   377,   380,   380,
     380,   383,   384,   387,   397,   397,   405,   406,   407,   410,
     410,   434,   434,   437,   437,   440,   440,   441,   444,   445,
     446,   447
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
  "']'", "'('", "')'", "':'", "$accept", "begin_parse", "declarations",
  "declaration", "structure_dec", "$@1", "structure_content",
  "variable_dec", "structure_initialize", "variables",
  "multiple_variables", "identifier_name", "$@2", "$@3",
  "extended_identifier", "$@4", "array_iden", "array_dims", "dims", "$@5",
  "initilization", "string_initilization", "$@6", "array_initialization",
  "$@7", "$@8", "multiple_array_values", "$@9", "array_values", "$@10",
  "$@11", "pointer_datatype", "datatype", "unsigned_grammar",
  "signed_grammar", "long_grammar", "short_grammar", "function_dec",
  "function_datatype", "function_parameters", "parameters", "$@12",
  "all_parameter_identifiers", "multiple_parameters",
  "parameter_identifier", "$@13", "extended_parameter", "statement",
  "multiple_statement", "$@14", "statments", "expression_statment",
  "conditional_statements", "$@15", "switch_statement", "$@16",
  "case_list", "$@17", "extended_conditional_statements",
  "iterative_statements", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23",
  "for_initialization", "for_simple_expression", "for_expression",
  "return_statement", "break_statement", "continue_statement",
  "expression", "simple_expression", "and_expression",
  "unary_relation_expression", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "$@24", "immutable", "call", "$@25",
  "arguments", "arguments_list", "$@26", "A", "$@27", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-243)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     124,  -243,  -243,  -243,  -243,     8,    56,    71,    89,    35,
    -243,    73,  -243,   124,  -243,  -243,  -243,    -7,    25,  -243,
     212,  -243,  -243,  -243,  -243,  -243,     8,    56,  -243,  -243,
       8,    56,  -243,    67,  -243,  -243,  -243,  -243,  -243,     7,
      17,    46,  -243,    21,  -243,  -243,    34,  -243,  -243,  -243,
    -243,    59,  -243,    15,    15,  -243,    67,  -243,  -243,  -243,
      99,   245,   140,  -243,   -21,  -243,  -243,  -243,  -243,  -243,
    -243,    76,    75,   135,     6,  -243,  -243,  -243,   103,   104,
    -243,   101,  -243,  -243,  -243,  -243,  -243,    19,  -243,    19,
    -243,    64,  -243,  -243,   108,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,   116,   137,   138,  -243,   125,    58,   102,  -243,
      85,  -243,  -243,  -243,   119,   140,    19,   117,   142,  -243,
     145,   123,   212,  -243,    19,    67,  -243,   136,   134,   141,
     245,  -243,  -243,   160,  -243,   163,  -243,  -243,   161,   183,
    -243,    19,    19,  -243,  -243,  -243,  -243,  -243,  -243,    74,
    -243,  -243,    74,  -243,  -243,  -243,    74,    19,    19,    19,
      19,    19,    19,  -243,  -243,   167,  -243,   137,   168,  -243,
    -243,   171,  -243,  -243,  -243,   169,  -243,  -243,   -24,  -243,
      19,   283,   214,    19,    19,    19,  -243,   183,   174,   138,
    -243,    58,   102,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,   172,   205,   178,  -243,  -243,    -9,  -243,  -243,    19,
     177,   175,   176,  -243,   179,  -243,   182,  -243,  -243,   211,
    -243,  -243,   245,  -243,   186,   137,  -243,    19,   200,   199,
    -243,  -243,  -243,    -3,   234,   245,  -243,    -1,   132,    19,
    -243,  -243,    23,  -243,   245,  -243,  -243,    19,  -243,   239,
    -243,   219,  -243,    -3,  -243,  -243,  -243,  -243,   206,  -243,
     210,   213,   215,  -243,   199,   221,    -3,   245,  -243,   245,
     245,  -243,   224,   221,  -243,   132,   132,  -243,  -243,  -243
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    50,    51,    52,    53,    68,    70,    66,    62,     0,
      58,     0,     2,     4,     7,     5,    14,     0,     0,     6,
      76,    67,    54,    69,    55,    63,    68,    70,    57,    59,
      68,    70,    56,     8,     1,     3,    19,    21,    49,     0,
      18,    19,    48,     0,    74,    71,     0,    64,    65,    60,
      61,     0,    15,    27,    27,    13,     0,    16,    72,    12,
       0,    92,    11,    24,     0,    20,    23,    22,    17,    80,
      75,    79,     0,     0,     0,   109,   112,   115,     0,     0,
     101,   163,   164,   178,   179,   180,   181,     0,    97,     0,
      91,     0,    73,    85,     0,    84,    86,   100,    87,    88,
      89,    90,     0,   137,   139,   141,   143,   145,   153,   157,
     162,   161,   167,   168,     0,    11,     0,     0,     0,    26,
      35,    83,    76,    77,     0,     0,   125,     0,     0,     0,
      92,   127,   128,     0,   169,     0,   142,   162,     0,    92,
      96,     0,     0,   150,   151,   147,   149,   146,   148,     0,
     154,   155,     0,   158,   159,   160,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,    10,    25,    30,    36,
      29,    36,    28,    33,    34,     0,    81,    78,     0,   126,
       0,     0,     0,     0,   172,     0,   166,    92,     0,   138,
     140,   144,   152,   156,   134,   132,   133,   130,   131,   129,
       9,     0,     0,     0,    82,    98,     0,   120,   118,   122,
       0,     0,     0,   173,     0,   171,     0,    94,    93,     0,
      37,    39,    92,   110,     0,   121,   119,     0,     0,   177,
     170,   165,    32,     0,   108,    92,   113,     0,   106,     0,
     174,    43,     0,    47,    92,    99,   111,   124,   116,     0,
     104,     0,   175,     0,    40,    41,    46,   107,     0,   123,
       0,     0,     0,   102,   177,    44,     0,    92,   117,    92,
      92,   176,     0,    42,   114,   106,   106,    45,   103,   105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -243,  -243,   267,  -243,  -243,  -243,   170,     1,  -243,   -11,
    -243,  -243,  -243,  -243,   230,  -243,  -243,  -243,    77,  -243,
    -243,   166,  -243,  -243,  -243,  -243,  -243,  -243,  -242,  -243,
    -243,  -243,     5,  -243,  -243,   -17,    -8,  -243,  -243,  -243,
     180,  -243,  -243,  -243,  -243,  -243,  -243,   -61,  -243,  -243,
     110,  -243,  -243,  -243,  -243,  -243,  -116,  -243,  -243,  -243,
    -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,  -243,   -72,  -109,   157,   -83,  -243,  -243,   152,  -243,
     151,  -243,   148,   -84,  -243,  -243,  -243,  -243,  -243,  -243,
    -243,    42,  -243,  -223
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    51,   114,    90,    16,    43,
      57,    40,    53,    54,    65,   116,    66,   119,   120,   201,
     172,   170,   202,   174,   203,   233,   256,   266,   242,   253,
     272,    17,    91,    32,    28,    22,    24,    19,    20,    45,
      46,    60,    70,   123,    71,   121,   176,   187,    93,    94,
     188,    95,    96,   222,    97,   133,   251,   262,   245,    98,
     128,   235,   129,   247,   130,   260,   209,   224,   258,    99,
     100,   101,   102,   103,   104,   105,   106,   149,   107,   152,
     108,   156,   109,   110,   135,   111,   112,   184,   214,   215,
     229,   240,   264,   113
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    15,   127,   137,   136,    18,    39,   167,   117,    47,
     243,   265,    21,    49,    15,   178,   141,   138,    18,    48,
      36,    37,    52,    50,   273,    44,    83,    84,    85,    86,
     243,   141,   137,    81,    82,    83,    84,    85,    86,   141,
     137,   205,   118,   243,    38,    68,    81,    82,    83,    84,
      85,    86,    41,    37,    63,   241,   223,   137,   137,   190,
      23,    87,    33,   115,   248,   137,   126,    55,   137,   182,
      89,   206,   137,    34,    87,    25,    42,    64,    56,    26,
      27,    59,   254,    89,   255,   194,   195,   196,   197,   198,
     199,    36,    37,    29,    36,    37,   137,    30,    31,    61,
     225,    81,    82,    83,    84,    85,    86,   150,   151,   210,
      58,   212,   213,   216,    52,    42,   115,    62,   237,   157,
     158,   159,   160,   161,   162,   137,    69,    44,     1,     2,
       3,     4,     5,     6,     7,     8,     9,   122,    89,   124,
      10,   163,   164,   137,     1,     2,     3,     4,     5,     6,
       7,     8,    73,   153,   154,   155,    10,   249,   250,   278,
     279,   234,   125,   131,   132,   134,   139,   252,   143,   144,
     145,   146,   147,   148,   246,   259,   140,   141,   165,   142,
     168,   169,   208,   257,   171,   175,    72,     1,     2,     3,
       4,     5,     6,     7,     8,    73,   179,    74,   180,    10,
      75,    76,    77,    78,    79,   181,   274,    80,   275,   276,
      81,    82,    83,    84,    85,    86,     1,     2,     3,     4,
       5,     6,     7,     8,   183,   185,   186,   200,    10,   -38,
     -31,   211,   204,   218,   219,   220,   221,   226,    87,   227,
     117,   228,   -95,    88,   230,   231,   236,    89,    72,     1,
       2,     3,     4,     5,     6,     7,     8,    73,   238,    74,
     239,    10,    75,    76,    77,    78,    79,   244,   261,    80,
     268,   267,    81,    82,    83,    84,    85,    86,   263,   269,
      35,   270,   255,   277,    67,   166,   173,     1,     2,     3,
       4,     5,     6,     7,     8,    73,   232,   217,   189,    10,
      87,   191,   177,   192,   193,    88,   271,     0,     0,    89,
      81,    82,    83,    84,    85,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,     0,
       0,     0,     0,   207,     0,     0,     0,    89
};

static const yytype_int16 yycheck[] =
{
      61,     0,    74,    87,    87,     0,    17,   116,    29,    26,
     233,   253,     4,    30,    13,   124,    40,    89,    13,    27,
      27,    28,    33,    31,   266,    20,    29,    30,    31,    32,
     253,    40,   116,    27,    28,    29,    30,    31,    32,    40,
     124,    65,    63,   266,    51,    56,    27,    28,    29,    30,
      31,    32,    27,    28,    39,    58,    65,   141,   142,   142,
       4,    55,    27,    62,    65,   149,    60,    60,   152,   130,
      64,   180,   156,     0,    55,     4,    51,    62,    61,     8,
       9,    60,    59,    64,    61,   157,   158,   159,   160,   161,
     162,    27,    28,     4,    27,    28,   180,     8,     9,    65,
     209,    27,    28,    29,    30,    31,    32,    49,    50,   181,
      64,   183,   184,   185,   125,    51,   115,    58,   227,    34,
      35,    36,    37,    38,    39,   209,    27,   122,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    61,    64,    64,
      16,    56,    57,   227,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    51,    52,    53,    16,    25,    26,   275,
     276,   222,    27,    60,    60,    64,    58,   239,    43,    44,
      45,    46,    47,    48,   235,   247,    60,    40,    59,    41,
      63,    39,   181,   244,    39,    62,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    60,    14,    64,    16,
      17,    18,    19,    20,    21,    64,   267,    24,   269,   270,
      27,    28,    29,    30,    31,    32,     4,     5,     6,     7,
       8,     9,    10,    11,    64,    62,    65,    60,    16,    58,
      62,    17,    63,    59,    62,    30,    58,    60,    55,    64,
      29,    65,    59,    60,    65,    63,    60,    64,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    58,    14,
      61,    16,    17,    18,    19,    20,    21,    33,    29,    24,
      60,    65,    27,    28,    29,    30,    31,    32,    59,    66,
      13,    66,    61,    59,    54,   115,   120,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   219,   187,   141,    16,
      55,   149,   122,   152,   156,    60,   264,    -1,    -1,    64,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      16,    68,    69,    70,    71,    74,    75,    98,    99,   104,
     105,     4,   102,     4,   103,     4,     8,     9,   101,     4,
       8,     9,   100,    27,     0,    69,    27,    28,    51,    76,
      78,    27,    51,    76,    99,   106,   107,   102,   103,   102,
     103,    72,    76,    79,    80,    60,    61,    77,    64,    60,
     108,    65,    58,    39,    62,    81,    83,    81,    76,    27,
     109,   111,     3,    12,    14,    17,    18,    19,    20,    21,
      24,    27,    28,    29,    30,    31,    32,    55,    60,    64,
      74,    99,   114,   115,   116,   118,   119,   121,   126,   136,
     137,   138,   139,   140,   141,   142,   143,   145,   147,   149,
     150,   152,   153,   160,    73,    74,    82,    29,    63,    84,
      85,   112,    61,   110,    64,    27,    60,   139,   127,   129,
     131,    60,    60,   122,    64,   151,   142,   150,   139,    58,
      60,    40,    41,    43,    44,    45,    46,    47,    48,   144,
      49,    50,   146,    51,    52,    53,   148,    34,    35,    36,
      37,    38,    39,    56,    57,    59,    73,   140,    63,    39,
      88,    39,    87,    88,    90,    62,   113,   107,   140,    60,
      64,    64,   114,    64,   154,    62,    65,   114,   117,   141,
     142,   145,   147,   149,   139,   139,   139,   139,   139,   139,
      60,    86,    89,    91,    63,    65,   140,    60,    74,   133,
     139,    17,   139,   139,   155,   156,   139,   117,    59,    62,
      30,    58,   120,    65,   134,   140,    60,    64,    65,   157,
      65,    63,    85,    92,   114,   128,    60,   140,    58,    61,
     158,    58,    95,   160,    33,   125,   114,   130,    65,    25,
      26,   123,   139,    96,    59,    61,    93,   114,   135,   139,
     132,    29,   124,    59,   159,    95,    94,    65,    60,    66,
      66,   158,    97,    95,   114,   114,   114,    59,   123,   123
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    70,    72,    71,
      73,    73,    74,    74,    74,    75,    76,    77,    77,    79,
      78,    80,    78,    81,    82,    81,    83,    83,    84,    84,
      85,    86,    85,    87,    87,    87,    89,    88,    91,    92,
      90,    94,    93,    96,    97,    95,    95,    95,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     100,   100,   100,   101,   101,   101,   101,   102,   102,   103,
     103,   104,   105,   106,   108,   107,   107,   109,   110,   110,
     112,   111,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   116,   115,   117,   117,   118,   118,   120,   119,
     119,   122,   121,   123,   124,   123,   123,   125,   125,   127,
     128,   126,   129,   130,   126,   131,   132,   126,   133,   133,
     133,   134,   134,   135,   135,   136,   136,   137,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   144,   144,   144,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   149,   149,   150,   151,   150,   152,   152,   152,   154,
     153,   155,   155,   157,   156,   159,   158,   158,   160,   160,
     160,   160
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     7,
       2,     0,     3,     3,     1,     3,     2,     2,     0,     0,
       3,     0,     3,     1,     0,     3,     2,     0,     2,     2,
       2,     0,     5,     1,     1,     0,     0,     3,     0,     0,
       6,     0,     3,     0,     0,     5,     2,     1,     2,     2,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       2,     2,     0,     1,     2,     2,     0,     1,     0,     1,
       0,     2,     3,     3,     0,     3,     0,     2,     2,     0,
       0,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     2,     0,     2,     1,     0,     7,
       1,     0,     8,     5,     0,     5,     0,     2,     0,     0,
       0,     7,     0,     0,    10,     0,     0,     9,     1,     2,
       1,     1,     0,     1,     0,     2,     3,     2,     2,     3,
       3,     3,     3,     3,     3,     2,     2,     1,     3,     1,
       3,     1,     2,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     3,     1,     1,     0,
       5,     1,     0,     0,     3,     0,     4,     0,     1,     1,
       1,     1
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
#line 111 "parser1.y"
                                            { insert_type(); }
#line 1521 "parser1.tab.c"
    break;

  case 19: /* $@2: %empty  */
#line 132 "parser1.y"
                                     { if(check_function(current_identifier))
						  {yyerror("ERROR: Identifier cannot be same as function name!\n"); exit(8);}
						  if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type(); }
#line 1529 "parser1.tab.c"
    break;

  case 21: /* $@3: %empty  */
#line 135 "parser1.y"
                                           {if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type();  }
#line 1535 "parser1.tab.c"
    break;

  case 24: /* $@4: %empty  */
#line 137 "parser1.y"
                                      {strcpy(previous_operator,"=");}
#line 1541 "parser1.tab.c"
    break;

  case 26: /* array_iden: '[' array_dims  */
#line 140 "parser1.y"
                 {cur_dim_count=0;}
#line 1547 "parser1.tab.c"
    break;

  case 30: /* dims: integer_constant ']'  */
#line 148 "parser1.y"
                       {cur_arr_dim[cur_dim_count]=yyvsp[-1];/*printf("%d %d %d %d",cur_dim_count,cur_arr_dim[0],cur_arr_dim[1],cur_arr_dim[2]);*/}
#line 1553 "parser1.tab.c"
    break;

  case 31: /* $@5: %empty  */
#line 149 "parser1.y"
                       {cur_arr_dim[cur_dim_count]=yyvsp[-1];cur_dim_count++;}
#line 1559 "parser1.tab.c"
    break;

  case 36: /* $@6: %empty  */
#line 158 "parser1.y"
                             {strcpy(previous_operator,"=");}
#line 1565 "parser1.tab.c"
    break;

  case 37: /* string_initilization: '=' $@6 string_constant  */
#line 158 "parser1.y"
                                                                              { insert_value(); }
#line 1571 "parser1.tab.c"
    break;

  case 38: /* $@7: %empty  */
#line 162 "parser1.y"
      {strcpy(previous_operator,"=");}
#line 1577 "parser1.tab.c"
    break;

  case 39: /* $@8: %empty  */
#line 162 "parser1.y"
                                           {check_dim_count=0; check_arr_dim[check_dim_count]++;}
#line 1583 "parser1.tab.c"
    break;

  case 40: /* array_initialization: '=' $@7 '{' $@8 array_values '}'  */
#line 162 "parser1.y"
                                                                                                                   { if (cur_arr_dim[check_dim_count]!= check_arr_dim[check_dim_count]){printf("Error in dimension of array\n");exit(0);}for(int _ = 0; _ <= cur_dim_count; _++){cur_arr_dim[_]=0;}cur_dim_count=0; for(int _ = 0; _ <= check_dim_count; _++){check_arr_dim[_]=0;}check_arr_dim[check_dim_count]=0;check_dim_count=0;}
#line 1589 "parser1.tab.c"
    break;

  case 41: /* $@9: %empty  */
#line 166 "parser1.y"
                              {check_arr_dim[check_dim_count]++;}
#line 1595 "parser1.tab.c"
    break;

  case 43: /* $@10: %empty  */
#line 168 "parser1.y"
                  {check_dim_count++; check_arr_dim[check_dim_count]++;}
#line 1601 "parser1.tab.c"
    break;

  case 44: /* $@11: %empty  */
#line 168 "parser1.y"
                                                                                       { if (cur_arr_dim[check_dim_count]!= check_arr_dim[check_dim_count]){printf("Error in dimension of array\n");exit(0);}check_arr_dim[check_dim_count]=0;check_dim_count--;}
#line 1607 "parser1.tab.c"
    break;

  case 47: /* array_values: constant  */
#line 170 "parser1.y"
            {}
#line 1613 "parser1.tab.c"
    break;

  case 72: /* function_datatype: datatype identifier '('  */
#line 201 "parser1.y"
                                                   {strcpy(currfunctype, current_type); check_duplicate(current_identifier); insert_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();}
#line 1619 "parser1.tab.c"
    break;

  case 74: /* $@12: %empty  */
#line 207 "parser1.y"
                                   { check_params(current_type); }
#line 1625 "parser1.tab.c"
    break;

  case 75: /* parameters: datatype $@12 all_parameter_identifiers  */
#line 207 "parser1.y"
                                                                                             {insert_SymbolTable_paramscount(current_function, params_count);}
#line 1631 "parser1.tab.c"
    break;

  case 80: /* $@13: %empty  */
#line 217 "parser1.y"
                                     {insert_parameters(); insert_type(); insert_SymbolTable_nest(current_identifier,1); params_count++;}
#line 1637 "parser1.tab.c"
    break;

  case 92: /* $@14: %empty  */
#line 230 "parser1.y"
                         {current_nested_val++;}
#line 1643 "parser1.tab.c"
    break;

  case 93: /* multiple_statement: $@14 '{' statments '}'  */
#line 230 "parser1.y"
                                                                   {remove_scope(current_nested_val);current_nested_val--;}
#line 1649 "parser1.tab.c"
    break;

  case 98: /* $@15: %empty  */
#line 241 "parser1.y"
                                                       {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1655 "parser1.tab.c"
    break;

  case 101: /* $@16: %empty  */
#line 245 "parser1.y"
                                  {nested_loop++; switch_default_cnt=0;}
#line 1661 "parser1.tab.c"
    break;

  case 102: /* switch_statement: SWITCH $@16 '(' expression ')' '{' case_list '}'  */
#line 245 "parser1.y"
                                                                                                             {nested_loop--; switch_default_cnt=0;}
#line 1667 "parser1.tab.c"
    break;

  case 104: /* $@17: %empty  */
#line 249 "parser1.y"
                                  { if(switch_default_cnt>0) 
						{yyerror("multiple default case in swtich statement\n");}  }
#line 1674 "parser1.tab.c"
    break;

  case 109: /* $@18: %empty  */
#line 259 "parser1.y"
                                {nested_loop++; printf("loop value: %d", nested_loop);}
#line 1680 "parser1.tab.c"
    break;

  case 110: /* $@19: %empty  */
#line 259 "parser1.y"
                                                                                                                {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1686 "parser1.tab.c"
    break;

  case 111: /* iterative_statements: WHILE $@18 '(' simple_expression ')' $@19 statement  */
#line 259 "parser1.y"
                                                                                                                                                                                                             {nested_loop--;}
#line 1692 "parser1.tab.c"
    break;

  case 112: /* $@20: %empty  */
#line 260 "parser1.y"
                              {nested_loop++; printf("loop value: %d", nested_loop);}
#line 1698 "parser1.tab.c"
    break;

  case 113: /* $@21: %empty  */
#line 260 "parser1.y"
                                                                                                                                      {if(yyvsp[-1]!=1){yyerror("Here, condition must have integer value!\n");exit(0);}}
#line 1704 "parser1.tab.c"
    break;

  case 114: /* iterative_statements: FOR $@20 '(' for_initialization for_simple_expression ';' $@21 for_expression ')' statement  */
#line 260 "parser1.y"
                                                                                                                                                                                                                                               {nested_loop--;}
#line 1710 "parser1.tab.c"
    break;

  case 115: /* $@22: %empty  */
#line 261 "parser1.y"
                             {nested_loop++;printf("loop value: %d", nested_loop);}
#line 1716 "parser1.tab.c"
    break;

  case 116: /* $@23: %empty  */
#line 261 "parser1.y"
                                                                                                                             {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1722 "parser1.tab.c"
    break;

  case 117: /* iterative_statements: DO $@22 statement WHILE '(' simple_expression ')' $@23 ';'  */
#line 261 "parser1.y"
                                                                                                                                                                                                                    {nested_loop--;}
#line 1728 "parser1.tab.c"
    break;

  case 125: /* return_statement: RETURN ';'  */
#line 276 "parser1.y"
                                     {if(strcmp(currfunctype,"void")) {yyerror("ERROR: Cannot have void return for non-void function!\n"); exit(0);}}
#line 1734 "parser1.tab.c"
    break;

  case 126: /* return_statement: RETURN expression ';'  */
#line 277 "parser1.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("Non-void return for void function!"); exit(0);
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); exit(0);
										}

			                     	}
#line 1750 "parser1.tab.c"
    break;

  case 127: /* break_statement: BREAK ';'  */
#line 290 "parser1.y"
                                    {if(nested_loop==0) {yyerror("can't use break statement outside loop\n");}}
#line 1756 "parser1.tab.c"
    break;

  case 128: /* continue_statement: CONTINUE ';'  */
#line 293 "parser1.y"
               {if(nested_loop==0) {yyerror("can't use continue statement outside loop\n");}}
#line 1762 "parser1.tab.c"
    break;

  case 129: /* expression: mutable '=' expression  */
#line 296 "parser1.y"
                                                              {					strcpy(previous_operator,"=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
																	  {
			                                                          yyval=1;
			                                                          }
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1775 "parser1.tab.c"
    break;

  case 130: /* expression: mutable ADD_EQUAL expression  */
#line 304 "parser1.y"
                                                           {					strcpy(previous_operator,"+=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1786 "parser1.tab.c"
    break;

  case 131: /* expression: mutable SUBTRACT_EQUAL expression  */
#line 310 "parser1.y"
                                                             {					strcpy(previous_operator,"-=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1797 "parser1.tab.c"
    break;

  case 132: /* expression: mutable MULTIPLY_EQUAL expression  */
#line 317 "parser1.y"
                                                            {					strcpy(previous_operator,"*=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1808 "parser1.tab.c"
    break;

  case 133: /* expression: mutable DIVIDE_EQUAL expression  */
#line 323 "parser1.y"
                                                                        {				strcpy(previous_operator,"/=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1819 "parser1.tab.c"
    break;

  case 134: /* expression: mutable MOD_EQUAL expression  */
#line 329 "parser1.y"
                                                                {					strcpy(previous_operator,"%=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1830 "parser1.tab.c"
    break;

  case 135: /* expression: mutable INCREMENT  */
#line 336 "parser1.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1836 "parser1.tab.c"
    break;

  case 136: /* expression: mutable DECREMENT  */
#line 337 "parser1.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1842 "parser1.tab.c"
    break;

  case 137: /* expression: simple_expression  */
#line 338 "parser1.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1848 "parser1.tab.c"
    break;

  case 138: /* simple_expression: simple_expression OR_OR and_expression  */
#line 342 "parser1.y"
                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1854 "parser1.tab.c"
    break;

  case 139: /* simple_expression: and_expression  */
#line 343 "parser1.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1860 "parser1.tab.c"
    break;

  case 140: /* and_expression: and_expression AND_AND unary_relation_expression  */
#line 347 "parser1.y"
                                                                           {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1866 "parser1.tab.c"
    break;

  case 141: /* and_expression: unary_relation_expression  */
#line 348 "parser1.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1872 "parser1.tab.c"
    break;

  case 142: /* unary_relation_expression: NOT unary_relation_expression  */
#line 351 "parser1.y"
                                                        {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1878 "parser1.tab.c"
    break;

  case 143: /* unary_relation_expression: regular_expression  */
#line 352 "parser1.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1884 "parser1.tab.c"
    break;

  case 144: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 355 "parser1.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1890 "parser1.tab.c"
    break;

  case 145: /* regular_expression: sum_expression  */
#line 356 "parser1.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1896 "parser1.tab.c"
    break;

  case 146: /* relational_operators: GREAT_EQUAL  */
#line 360 "parser1.y"
                                     {strcpy(previous_operator,">=");}
#line 1902 "parser1.tab.c"
    break;

  case 147: /* relational_operators: LESS_EQUAL  */
#line 361 "parser1.y"
                                    {strcpy(previous_operator,"<=");}
#line 1908 "parser1.tab.c"
    break;

  case 148: /* relational_operators: GREAT  */
#line 362 "parser1.y"
                               {strcpy(previous_operator,">");}
#line 1914 "parser1.tab.c"
    break;

  case 149: /* relational_operators: LESS  */
#line 363 "parser1.y"
                              {strcpy(previous_operator,"<");}
#line 1920 "parser1.tab.c"
    break;

  case 150: /* relational_operators: EQUAL  */
#line 364 "parser1.y"
                               {strcpy(previous_operator,"==");}
#line 1926 "parser1.tab.c"
    break;

  case 151: /* relational_operators: NOT_EQUAL  */
#line 365 "parser1.y"
                                   {strcpy(previous_operator,"!=");}
#line 1932 "parser1.tab.c"
    break;

  case 152: /* sum_expression: sum_expression sum_operators term  */
#line 368 "parser1.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1938 "parser1.tab.c"
    break;

  case 153: /* sum_expression: term  */
#line 369 "parser1.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1944 "parser1.tab.c"
    break;

  case 156: /* term: term MULOP factor  */
#line 376 "parser1.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1950 "parser1.tab.c"
    break;

  case 157: /* term: factor  */
#line 377 "parser1.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1956 "parser1.tab.c"
    break;

  case 161: /* factor: immutable  */
#line 383 "parser1.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1962 "parser1.tab.c"
    break;

  case 162: /* factor: mutable  */
#line 384 "parser1.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1968 "parser1.tab.c"
    break;

  case 163: /* mutable: identifier  */
#line 387 "parser1.y"
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
#line 1983 "parser1.tab.c"
    break;

  case 164: /* $@24: %empty  */
#line 397 "parser1.y"
                                           {if(!check_scope(current_identifier)){printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}}
#line 1989 "parser1.tab.c"
    break;

  case 165: /* mutable: array_identifier $@24 '[' expression ']'  */
#line 398 "parser1.y"
                                           {if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 1999 "parser1.tab.c"
    break;

  case 166: /* immutable: '(' expression ')'  */
#line 405 "parser1.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 2005 "parser1.tab.c"
    break;

  case 168: /* immutable: constant  */
#line 407 "parser1.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2011 "parser1.tab.c"
    break;

  case 169: /* $@25: %empty  */
#line 410 "parser1.y"
                                        { 
						push(0);
				
						strcpy(previous_operator,"(");
			             if(!check_declaration(current_identifier, "Function"))
			             { yyerror("Function not declared"); exit(0);}
			             insert_SymbolTable_function(current_identifier);
						 strcpy(currfunccall,current_identifier);
			             }
#line 2025 "parser1.tab.c"
    break;

  case 170: /* call: identifier '(' $@25 arguments ')'  */
#line 419 "parser1.y"
                                                 { if(strcmp(currfunccall,"printf"))
							{
								if(t==-1 || getSTparamscount(currfunccall)!=call_params_stack[t])
								{
									yyerror("Number of parameters not same as number of arguments during function call!");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							}


							pop();
						 }
#line 2043 "parser1.tab.c"
    break;

  case 173: /* $@26: %empty  */
#line 437 "parser1.y"
                                     { call_params_stack[t]++; }
#line 2049 "parser1.tab.c"
    break;

  case 175: /* $@27: %empty  */
#line 440 "parser1.y"
                                         { call_params_stack[t]++;}
#line 2055 "parser1.tab.c"
    break;

  case 178: /* constant: integer_constant  */
#line 444 "parser1.y"
                                                {  insert_type(); yyval=1; }
#line 2061 "parser1.tab.c"
    break;

  case 179: /* constant: string_constant  */
#line 445 "parser1.y"
                                                {  insert_type(); yyval=-1;}
#line 2067 "parser1.tab.c"
    break;

  case 180: /* constant: float_constant  */
#line 446 "parser1.y"
                                                {  insert_type(); }
#line 2073 "parser1.tab.c"
    break;

  case 181: /* constant: character_constant  */
#line 447 "parser1.y"
                                            {  insert_type();yyval=1; }
#line 2079 "parser1.tab.c"
    break;


#line 2083 "parser1.tab.c"

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

#line 450 "parser1.y"


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
