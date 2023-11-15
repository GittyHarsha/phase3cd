/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

