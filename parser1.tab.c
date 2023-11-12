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


#line 112 "parser1.tab.c"

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
  YYSYMBOL_for_initialization = 119,       /* for_initialization  */
  YYSYMBOL_return_statement = 120,         /* return_statement  */
  YYSYMBOL_break_statement = 121,          /* break_statement  */
  YYSYMBOL_expression = 122,               /* expression  */
  YYSYMBOL_simple_expression = 123,        /* simple_expression  */
  YYSYMBOL_and_expression = 124,           /* and_expression  */
  YYSYMBOL_unary_relation_expression = 125, /* unary_relation_expression  */
  YYSYMBOL_regular_expression = 126,       /* regular_expression  */
  YYSYMBOL_relational_operators = 127,     /* relational_operators  */
  YYSYMBOL_sum_expression = 128,           /* sum_expression  */
  YYSYMBOL_sum_operators = 129,            /* sum_operators  */
  YYSYMBOL_term = 130,                     /* term  */
  YYSYMBOL_MULOP = 131,                    /* MULOP  */
  YYSYMBOL_factor = 132,                   /* factor  */
  YYSYMBOL_mutable = 133,                  /* mutable  */
  YYSYMBOL_134_15 = 134,                   /* $@15  */
  YYSYMBOL_immutable = 135,                /* immutable  */
  YYSYMBOL_call = 136,                     /* call  */
  YYSYMBOL_137_16 = 137,                   /* $@16  */
  YYSYMBOL_arguments = 138,                /* arguments  */
  YYSYMBOL_arguments_list = 139,           /* arguments_list  */
  YYSYMBOL_140_17 = 140,                   /* $@17  */
  YYSYMBOL_A = 141,                        /* A  */
  YYSYMBOL_142_18 = 142,                   /* $@18  */
  YYSYMBOL_constant = 143                  /* constant  */
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
#define YYLAST   279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  237

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
  "iterative_statements", "$@12", "$@13", "$@14", "for_initialization",
  "return_statement", "break_statement", "expression", "simple_expression",
  "and_expression", "unary_relation_expression", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "$@15", "immutable", "call", "$@16",
  "arguments", "arguments_list", "$@17", "A", "$@18", "constant", YY_NULLPTR
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

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     162,  -105,  -105,  -105,  -105,     9,    18,    17,    44,    27,
    -105,    67,  -105,   162,  -105,  -105,  -105,    -8,  -105,   257,
    -105,  -105,  -105,  -105,  -105,     9,    18,  -105,  -105,     9,
      18,  -105,    10,  -105,  -105,     0,  -105,    37,    26,  -105,
    -105,    33,  -105,  -105,  -105,  -105,  -105,    41,  -105,  -105,
     -15,   -15,  -105,    10,  -105,    82,   190,   225,  -105,   -17,
    -105,  -105,  -105,  -105,  -105,  -105,    49,    47,    85,   184,
      50,    53,   190,    58,    56,  -105,  -105,  -105,  -105,  -105,
     196,  -105,   196,  -105,    10,  -105,  -105,    55,  -105,  -105,
    -105,  -105,  -105,    65,    86,    88,  -105,   231,    29,   -21,
    -105,    66,  -105,  -105,  -105,    68,   225,   196,  -105,    91,
    -105,    79,   257,  -105,   196,    10,  -105,    83,   196,    64,
     132,  -105,  -105,    99,  -105,  -105,    97,   128,  -105,   196,
     196,  -105,  -105,  -105,  -105,  -105,  -105,    13,  -105,  -105,
      13,  -105,  -105,  -105,    13,   196,   196,   196,   196,   196,
     196,  -105,  -105,    93,  -105,    86,   100,  -105,  -105,   101,
    -105,  -105,   -32,  -105,   -31,  -105,  -105,   196,   115,   112,
     196,   196,  -105,   128,   118,    88,  -105,    29,   -21,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,  -105,   140,   150,  -105,
    -105,  -105,   -11,  -105,   196,  -105,   116,  -105,   119,  -105,
    -105,   126,  -105,  -105,  -105,  -105,   190,   190,  -105,   -29,
     124,  -105,  -105,   131,   153,  -105,   196,  -105,   196,  -105,
     161,   190,  -105,   138,   145,  -105,   130,   179,  -105,  -105,
    -105,   124,   161,  -105,  -105,  -105,  -105
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
      26,    26,    12,     0,    15,     0,    81,    11,    23,     0,
      19,    22,    21,    16,    70,    65,    69,     0,     0,     0,
       0,     0,    81,     0,   137,   138,   152,   153,   154,   155,
       0,    86,     0,    80,     0,    63,    75,     0,    74,    76,
      77,    78,    79,     0,   111,   113,   115,   117,   119,   127,
     131,   136,   135,   141,   142,     0,    11,     0,    27,     0,
      25,    73,    66,    67,     0,     0,   100,     0,     0,     0,
       0,   102,   143,     0,   116,   136,     0,    81,    85,     0,
       0,   124,   125,   121,   123,   120,   122,     0,   128,   129,
       0,   132,   133,   134,     0,     0,     0,     0,     0,     0,
       0,   109,   110,     0,    10,    24,     0,    33,    29,     0,
      71,    68,     0,   101,     0,    99,    97,     0,     0,     0,
     146,     0,   140,    81,     0,   112,   114,   118,   126,   130,
     108,   106,   107,   104,   105,   103,     9,    32,     0,    72,
      87,    91,     0,    98,     0,   147,     0,   145,     0,    83,
      82,    33,    28,    30,    31,    34,    81,    81,    93,     0,
     151,   144,   139,     0,    90,    92,     0,    95,     0,   148,
       0,    81,    88,     0,     0,   149,    39,     0,    89,    94,
      96,   151,     0,    37,    36,   150,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -105,  -105,   227,  -105,  -105,  -105,   136,     2,  -105,   -26,
    -105,  -105,  -105,  -105,   192,  -105,  -105,  -105,  -105,  -105,
      59,  -105,  -105,  -105,    15,  -105,     4,  -105,  -105,    31,
      36,  -105,  -105,  -105,   137,  -105,  -105,  -105,  -105,  -105,
    -105,   -56,  -105,  -105,    80,  -105,  -105,  -105,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,  -105,   -64,  -104,   123,   -73,
    -105,  -105,   120,  -105,   129,  -105,   111,   -79,  -105,  -105,
    -105,  -105,  -105,  -105,  -105,    25,  -105,  -105
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    47,   105,    83,    16,    37,
      54,    38,    50,    51,    60,   107,    61,   110,   156,   202,
     158,   188,   204,   213,   227,   233,    84,    31,    27,    21,
      23,    18,    19,    40,    41,    55,    65,   113,    66,   111,
     160,   173,    86,    87,   174,    88,    89,   206,   222,    90,
     207,   216,   224,   167,    91,    92,    93,    94,    95,    96,
      97,   137,    98,   140,    99,   144,   100,   101,   123,   102,
     103,   170,   196,   197,   210,   219,   231,   104
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,   125,    15,   155,    17,   117,    48,   124,   129,   129,
     162,   129,   108,    20,   164,    15,   120,    17,   126,    35,
      36,    24,    22,    39,    58,    25,    26,    63,   125,   129,
     141,   142,   143,   190,   191,   125,   217,    46,    36,   125,
      74,    75,    76,    77,    78,    79,   109,    59,    28,   208,
     125,   125,    29,    30,    32,   168,    42,   176,   125,   106,
      44,   125,    43,   192,    49,   125,    45,    33,     1,     2,
       3,     4,     5,     6,     7,     8,    68,    82,   138,   139,
      10,   180,   181,   182,   183,   184,   185,    53,   125,    48,
     209,    74,    75,    76,    77,    78,    79,    52,    56,    57,
     145,   146,   147,   148,   149,   150,   195,   198,   106,    64,
     112,   114,   115,   127,   118,   125,    39,   119,   121,    80,
     122,   166,   151,   152,   165,   128,   129,   153,    82,   130,
     157,    67,     1,     2,     3,     4,     5,     6,     7,     8,
      68,   159,    69,   163,    10,    70,    71,    72,    73,   169,
     214,   215,   223,   186,   225,    74,    75,    76,    77,    78,
      79,   171,   172,   187,   189,   228,     1,     2,     3,     4,
       5,     6,     7,     8,     9,   193,   194,   200,    10,   201,
     205,   211,   212,    80,   -35,   218,   221,   -84,    81,   220,
     226,   232,    82,    67,     1,     2,     3,     4,     5,     6,
       7,     8,    68,   229,    69,   230,    10,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    74,    75,    76,
      77,    78,    79,    74,    75,    76,    77,    78,    79,     1,
       2,     3,     4,     5,     6,     7,     8,    68,   234,    80,
      34,    10,   154,    62,   116,    80,   203,   236,    82,   161,
      81,    80,   175,   199,    82,   179,   235,   177,     0,     0,
      82,     1,     2,     3,     4,     5,     6,     7,     8,   178,
       0,     0,     0,    10,   131,   132,   133,   134,   135,   136
};

static const yytype_int16 yycheck[] =
{
      56,    80,     0,   107,     0,    69,    32,    80,    40,    40,
     114,    40,    29,     4,   118,    13,    72,    13,    82,    27,
      28,     4,     4,    19,    39,     8,     9,    53,   107,    40,
      51,    52,    53,    65,    65,   114,    65,    27,    28,   118,
      27,    28,    29,    30,    31,    32,    63,    62,     4,    60,
     129,   130,     8,     9,    27,   119,    25,   130,   137,    57,
      29,   140,    26,   167,    64,   144,    30,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    64,    49,    50,
      16,   145,   146,   147,   148,   149,   150,    61,   167,   115,
     194,    27,    28,    29,    30,    31,    32,    60,    65,    58,
      34,    35,    36,    37,    38,    39,   170,   171,   106,    27,
      61,    64,    27,    58,    64,   194,   112,    64,    60,    55,
      64,   119,    56,    57,    60,    60,    40,    59,    64,    41,
      39,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    62,    14,    60,    16,    17,    18,    19,    20,    17,
     206,   207,   216,    60,   218,    27,    28,    29,    30,    31,
      32,    62,    65,    63,    63,   221,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    60,    64,    59,    16,    39,
      30,    65,    63,    55,    58,    61,    33,    59,    60,    58,
      29,    61,    64,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    65,    14,    60,    16,    17,    18,    19,
      20,    27,    28,    29,    30,    31,    32,    27,    28,    29,
      30,    31,    32,    27,    28,    29,    30,    31,    32,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    59,    55,
      13,    16,   106,    51,    60,    55,   187,   232,    64,   112,
      60,    55,   129,   173,    64,   144,   231,   137,    -1,    -1,
      64,     4,     5,     6,     7,     8,     9,    10,    11,   140,
      -1,    -1,    -1,    16,    43,    44,    45,    46,    47,    48
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
      17,    18,    19,    20,    27,    28,    29,    30,    31,    32,
      55,    60,    64,    73,    92,   107,   108,   109,   111,   112,
     115,   120,   121,   122,   123,   124,   125,   126,   128,   130,
     132,   133,   135,   136,   143,    72,    73,    81,    29,    63,
      83,   105,    61,   103,    64,    27,    60,   122,    64,    64,
     107,    60,    64,   134,   125,   133,   122,    58,    60,    40,
      41,    43,    44,    45,    46,    47,    48,   127,    49,    50,
     129,    51,    52,    53,   131,    34,    35,    36,    37,    38,
      39,    56,    57,    59,    72,   123,    84,    39,    86,    62,
     106,   100,   123,    60,   123,    60,    73,   119,   122,    17,
     137,    62,    65,   107,   110,   124,   125,   128,   130,   132,
     122,   122,   122,   122,   122,   122,    60,    63,    87,    63,
      65,    65,   123,    60,    64,   122,   138,   139,   122,   110,
      59,    39,    85,    86,    88,    30,   113,   116,    60,   123,
     140,    65,    63,    89,   107,   107,   117,    65,    61,   141,
      58,    33,   114,   122,   118,   122,    29,    90,   107,    65,
      60,   142,    61,    91,    59,   141,    90
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
     107,   109,   108,   110,   110,   111,   111,   113,   112,   114,
     114,   116,   115,   117,   115,   118,   115,   119,   119,   119,
     120,   120,   121,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   125,   126,   126,
     127,   127,   127,   127,   127,   127,   128,   128,   129,   129,
     130,   130,   131,   131,   131,   132,   132,   133,   134,   133,
     135,   135,   135,   137,   136,   138,   138,   140,   139,   142,
     141,   141,   143,   143,   143,   143
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
       1,     0,     4,     2,     0,     2,     1,     0,     7,     2,
       0,     0,     6,     0,     8,     0,     8,     1,     2,     1,
       2,     3,     2,     3,     3,     3,     3,     3,     3,     2,
       2,     1,     3,     1,     3,     1,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       3,     1,     1,     0,     5,     1,     0,     0,     3,     0,
       4,     0,     1,     1,     1,     1
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
#line 92 "parser1.y"
                                            { insert_type(); }
#line 1442 "parser1.tab.c"
    break;

  case 18: /* $@2: %empty  */
#line 111 "parser1.y"
                                     { if(check_function(current_identifier))
						  {yyerror("ERROR: Identifier cannot be same as function name!\n"); exit(8);}
						  if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type(); }
#line 1450 "parser1.tab.c"
    break;

  case 20: /* $@3: %empty  */
#line 114 "parser1.y"
                                           {if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type();  }
#line 1456 "parser1.tab.c"
    break;

  case 23: /* $@4: %empty  */
#line 116 "parser1.y"
                                      {strcpy(previous_operator,"=");}
#line 1462 "parser1.tab.c"
    break;

  case 27: /* $@5: %empty  */
#line 123 "parser1.y"
                                           {insert_dimensions();}
#line 1468 "parser1.tab.c"
    break;

  case 28: /* array_dims: integer_constant $@5 ']' initilization  */
#line 123 "parser1.y"
                                                                                   {if(yyval < 1) {yyerror("Array must have size greater than 1!\n"); exit(0);} }
#line 1474 "parser1.tab.c"
    break;

  case 33: /* $@6: %empty  */
#line 132 "parser1.y"
                             {strcpy(previous_operator,"=");}
#line 1480 "parser1.tab.c"
    break;

  case 34: /* string_initilization: '=' $@6 string_constant  */
#line 132 "parser1.y"
                                                                              { insert_value(); }
#line 1486 "parser1.tab.c"
    break;

  case 35: /* $@7: %empty  */
#line 135 "parser1.y"
                             {strcpy(previous_operator,"=");}
#line 1492 "parser1.tab.c"
    break;

  case 62: /* function_datatype: datatype identifier '('  */
#line 169 "parser1.y"
                                                   {strcpy(currfunctype, current_type); check_duplicate(current_identifier); insert_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();}
#line 1498 "parser1.tab.c"
    break;

  case 64: /* $@8: %empty  */
#line 175 "parser1.y"
                                   { check_params(current_type); }
#line 1504 "parser1.tab.c"
    break;

  case 65: /* parameters: datatype $@8 all_parameter_identifiers  */
#line 175 "parser1.y"
                                                                                             {insert_SymbolTable_paramscount(current_function, params_count);}
#line 1510 "parser1.tab.c"
    break;

  case 70: /* $@9: %empty  */
#line 185 "parser1.y"
                                     {insert_parameters(); insert_type(); insert_SymbolTable_nest(current_identifier,1); params_count++;}
#line 1516 "parser1.tab.c"
    break;

  case 81: /* $@10: %empty  */
#line 198 "parser1.y"
                         {current_nested_val++;}
#line 1522 "parser1.tab.c"
    break;

  case 82: /* multiple_statement: $@10 '{' statments '}'  */
#line 198 "parser1.y"
                                                                   {remove_scope(current_nested_val);current_nested_val--;}
#line 1528 "parser1.tab.c"
    break;

  case 87: /* $@11: %empty  */
#line 209 "parser1.y"
                                                       {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1534 "parser1.tab.c"
    break;

  case 91: /* $@12: %empty  */
#line 216 "parser1.y"
                                                         {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1540 "parser1.tab.c"
    break;

  case 93: /* $@13: %empty  */
#line 217 "parser1.y"
                                                                           {if(yyvsp[-1]!=1){yyerror("Here, condition must have integer value!\n");exit(0);}}
#line 1546 "parser1.tab.c"
    break;

  case 95: /* $@14: %empty  */
#line 218 "parser1.y"
                                                                       {if(yyvsp[-1]!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
#line 1552 "parser1.tab.c"
    break;

  case 100: /* return_statement: RETURN ';'  */
#line 226 "parser1.y"
                                     {if(strcmp(currfunctype,"void")) {yyerror("ERROR: Cannot have void return for non-void function!\n"); exit(0);}}
#line 1558 "parser1.tab.c"
    break;

  case 101: /* return_statement: RETURN expression ';'  */
#line 227 "parser1.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("Non-void return for void function!"); exit(0);
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); exit(0);
										}

			                     	}
#line 1574 "parser1.tab.c"
    break;

  case 103: /* expression: mutable '=' expression  */
#line 244 "parser1.y"
                                                              {					strcpy(previous_operator,"=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
																	  {
			                                                          yyval=1;
			                                                          }
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1587 "parser1.tab.c"
    break;

  case 104: /* expression: mutable ADD_EQUAL expression  */
#line 252 "parser1.y"
                                                           {					strcpy(previous_operator,"+=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1598 "parser1.tab.c"
    break;

  case 105: /* expression: mutable SUBTRACT_EQUAL expression  */
#line 258 "parser1.y"
                                                             {					strcpy(previous_operator,"-=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1609 "parser1.tab.c"
    break;

  case 106: /* expression: mutable MULTIPLY_EQUAL expression  */
#line 265 "parser1.y"
                                                            {					strcpy(previous_operator,"*=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1620 "parser1.tab.c"
    break;

  case 107: /* expression: mutable DIVIDE_EQUAL expression  */
#line 271 "parser1.y"
                                                                        {				strcpy(previous_operator,"/=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1631 "parser1.tab.c"
    break;

  case 108: /* expression: mutable MOD_EQUAL expression  */
#line 277 "parser1.y"
                                                                {					strcpy(previous_operator,"%=");
																	  if(yyvsp[-2]==1 && yyvsp[0]==1)
			                                                          yyval=1;
			                                                          else
			                                                          {yyval=-1; yyerror("Type Mismatch\n"); exit(0);}
			                                                       }
#line 1642 "parser1.tab.c"
    break;

  case 109: /* expression: mutable INCREMENT  */
#line 284 "parser1.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1648 "parser1.tab.c"
    break;

  case 110: /* expression: mutable DECREMENT  */
#line 285 "parser1.y"
                                                                                                {if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 1654 "parser1.tab.c"
    break;

  case 111: /* expression: simple_expression  */
#line 286 "parser1.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1660 "parser1.tab.c"
    break;

  case 112: /* simple_expression: simple_expression OR_OR and_expression  */
#line 290 "parser1.y"
                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1666 "parser1.tab.c"
    break;

  case 113: /* simple_expression: and_expression  */
#line 291 "parser1.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1672 "parser1.tab.c"
    break;

  case 114: /* and_expression: and_expression AND_AND unary_relation_expression  */
#line 294 "parser1.y"
                                                                           {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1678 "parser1.tab.c"
    break;

  case 115: /* and_expression: unary_relation_expression  */
#line 295 "parser1.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1684 "parser1.tab.c"
    break;

  case 116: /* unary_relation_expression: NOT unary_relation_expression  */
#line 298 "parser1.y"
                                                        {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1690 "parser1.tab.c"
    break;

  case 117: /* unary_relation_expression: regular_expression  */
#line 299 "parser1.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1696 "parser1.tab.c"
    break;

  case 118: /* regular_expression: regular_expression relational_operators sum_expression  */
#line 302 "parser1.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1702 "parser1.tab.c"
    break;

  case 119: /* regular_expression: sum_expression  */
#line 303 "parser1.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1708 "parser1.tab.c"
    break;

  case 120: /* relational_operators: GREAT_EQUAL  */
#line 306 "parser1.y"
                                     {strcpy(previous_operator,">=");}
#line 1714 "parser1.tab.c"
    break;

  case 121: /* relational_operators: LESS_EQUAL  */
#line 307 "parser1.y"
                                    {strcpy(previous_operator,"<=");}
#line 1720 "parser1.tab.c"
    break;

  case 122: /* relational_operators: GREAT  */
#line 308 "parser1.y"
                               {strcpy(previous_operator,">");}
#line 1726 "parser1.tab.c"
    break;

  case 123: /* relational_operators: LESS  */
#line 309 "parser1.y"
                              {strcpy(previous_operator,"<");}
#line 1732 "parser1.tab.c"
    break;

  case 124: /* relational_operators: EQUAL  */
#line 310 "parser1.y"
                               {strcpy(previous_operator,"==");}
#line 1738 "parser1.tab.c"
    break;

  case 125: /* relational_operators: NOT_EQUAL  */
#line 311 "parser1.y"
                                   {strcpy(previous_operator,"!=");}
#line 1744 "parser1.tab.c"
    break;

  case 126: /* sum_expression: sum_expression sum_operators term  */
#line 314 "parser1.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1750 "parser1.tab.c"
    break;

  case 127: /* sum_expression: term  */
#line 315 "parser1.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1756 "parser1.tab.c"
    break;

  case 130: /* term: term MULOP factor  */
#line 322 "parser1.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1762 "parser1.tab.c"
    break;

  case 131: /* term: factor  */
#line 323 "parser1.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1768 "parser1.tab.c"
    break;

  case 135: /* factor: immutable  */
#line 329 "parser1.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1774 "parser1.tab.c"
    break;

  case 136: /* factor: mutable  */
#line 330 "parser1.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 1780 "parser1.tab.c"
    break;

  case 137: /* mutable: identifier  */
#line 333 "parser1.y"
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
#line 1795 "parser1.tab.c"
    break;

  case 138: /* $@15: %empty  */
#line 343 "parser1.y"
                                           {if(!check_scope(current_identifier)){printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}}
#line 1801 "parser1.tab.c"
    break;

  case 139: /* mutable: array_identifier $@15 '[' expression ']'  */
#line 344 "parser1.y"
                                           {if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              		yyval = 1;
			              		else
			              		yyval = -1;
			              		}
#line 1811 "parser1.tab.c"
    break;

  case 140: /* immutable: '(' expression ')'  */
#line 351 "parser1.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 1817 "parser1.tab.c"
    break;

  case 142: /* immutable: constant  */
#line 353 "parser1.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 1823 "parser1.tab.c"
    break;

  case 143: /* $@16: %empty  */
#line 356 "parser1.y"
                                        { strcpy(previous_operator,"(");
			             if(!check_declaration(current_identifier, "Function"))
			             { yyerror("Function not declared"); exit(0);}
			             insert_SymbolTable_function(current_identifier);
						 strcpy(currfunccall,current_identifier);
			             }
#line 1834 "parser1.tab.c"
    break;

  case 144: /* call: identifier '(' $@16 arguments ')'  */
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
#line 1849 "parser1.tab.c"
    break;

  case 147: /* $@17: %empty  */
#line 377 "parser1.y"
                                     { call_params_count++; }
#line 1855 "parser1.tab.c"
    break;

  case 149: /* $@18: %empty  */
#line 380 "parser1.y"
                                         { call_params_count++; }
#line 1861 "parser1.tab.c"
    break;

  case 152: /* constant: integer_constant  */
#line 384 "parser1.y"
                                                {  insert_type(); yyval=1; }
#line 1867 "parser1.tab.c"
    break;

  case 153: /* constant: string_constant  */
#line 385 "parser1.y"
                                                {  insert_type(); yyval=-1;}
#line 1873 "parser1.tab.c"
    break;

  case 154: /* constant: float_constant  */
#line 386 "parser1.y"
                                                {  insert_type(); }
#line 1879 "parser1.tab.c"
    break;

  case 155: /* constant: character_constant  */
#line 387 "parser1.y"
                                            {  insert_type();yyval=1; }
#line 1885 "parser1.tab.c"
    break;


#line 1889 "parser1.tab.c"

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
