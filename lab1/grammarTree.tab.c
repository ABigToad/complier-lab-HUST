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
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     CHAR = 259,
     FLOAT = 260,
     ID = 261,
     TYPE = 262,
     RELOP = 263,
     LC = 264,
     RC = 265,
     LB = 266,
     RB = 267,
     LP = 268,
     RP = 269,
     SEMI = 270,
     COMMA = 271,
     PLUS = 272,
     MINUS = 273,
     STAR = 274,
     DIV = 275,
     MOD = 276,
     AND = 277,
     OR = 278,
     NOT = 279,
     AUTOPLUS = 280,
     AUTOMINUS = 281,
     ASSIGNOP = 282,
     PLUSASSIGNOP = 283,
     MINUSASSIGNOP = 284,
     STARASSIGNOP = 285,
     DIVASSIGNOP = 286,
     MODASSIGNOP = 287,
     IF = 288,
     ELSE = 289,
     WHILE = 290,
     BREAK = 291,
     CONTINUE = 292,
     FOR = 293,
     EXTENDS = 294,
     NEW = 295,
     THIS = 296,
     STATIC = 297,
     RETURN = 298,
     UMINUS = 299,
     LOWER_THEN_ELSE = 300
   };
#endif
/* Tokens.  */
#define INT 258
#define CHAR 259
#define FLOAT 260
#define ID 261
#define TYPE 262
#define RELOP 263
#define LC 264
#define RC 265
#define LB 266
#define RB 267
#define LP 268
#define RP 269
#define SEMI 270
#define COMMA 271
#define PLUS 272
#define MINUS 273
#define STAR 274
#define DIV 275
#define MOD 276
#define AND 277
#define OR 278
#define NOT 279
#define AUTOPLUS 280
#define AUTOMINUS 281
#define ASSIGNOP 282
#define PLUSASSIGNOP 283
#define MINUSASSIGNOP 284
#define STARASSIGNOP 285
#define DIVASSIGNOP 286
#define MODASSIGNOP 287
#define IF 288
#define ELSE 289
#define WHILE 290
#define BREAK 291
#define CONTINUE 292
#define FOR 293
#define EXTENDS 294
#define NEW 295
#define THIS 296
#define STATIC 297
#define RETURN 298
#define UMINUS 299
#define LOWER_THEN_ELSE 300




/* Copy the first part of user declarations.  */
#line 4 "grammarTree.y"

    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include "grammarTree.h"
    extern int yylineno;
    extern char *yytext;
    extern FILE *yyin;
    void yyerror(const char *fmt, ...);
    void display(node *, int);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "grammarTree.y"
{
    int type_int;
    float type_float;
    char type_char;
    char type_id[32];
    struct node *ptr;
}
/* Line 193 of yacc.c.  */
#line 206 "grammarTree.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 231 "grammarTree.tab.c"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   498

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  136

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    13,    17,    20,    22,
      24,    28,    30,    33,    37,    42,    47,    51,    53,    57,
      60,    65,    68,    69,    72,    74,    78,    84,    92,    98,
     108,   111,   114,   117,   118,   121,   125,   127,   131,   133,
     137,   139,   141,   143,   147,   151,   155,   159,   163,   166,
     169,   172,   175,   179,   183,   187,   191,   195,   199,   203,
     207,   211,   214,   218,   221,   223,   227,   232,   235,   239
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,    49,    48,    -1,    -1,    50,
      51,    15,    -1,    50,    54,    57,    -1,     1,    15,    -1,
       7,    -1,    52,    -1,    52,    16,    51,    -1,     6,    -1,
       6,    53,    -1,    11,    64,    12,    -1,    11,    64,    12,
      53,    -1,     6,    13,    55,    14,    -1,     6,    13,    14,
      -1,    56,    -1,    56,    16,    55,    -1,    50,    52,    -1,
       9,    60,    58,    10,    -1,    59,    58,    -1,    -1,    64,
      15,    -1,    57,    -1,    43,    64,    15,    -1,    33,    13,
      64,    14,    59,    -1,    33,    13,    64,    14,    59,    34,
      59,    -1,    35,    13,    64,    14,    59,    -1,    38,    13,
      64,    15,    64,    15,    64,    14,    59,    -1,    37,    15,
      -1,    36,    15,    -1,    61,    60,    -1,    -1,     1,    15,
      -1,    50,    62,    15,    -1,    63,    -1,    63,    16,    62,
      -1,    52,    -1,    52,    27,    64,    -1,     3,    -1,     5,
      -1,     4,    -1,    64,    17,    64,    -1,    64,    18,    64,
      -1,    64,    19,    64,    -1,    64,    20,    64,    -1,    64,
      21,    64,    -1,    64,    25,    -1,    64,    26,    -1,    25,
      64,    -1,    26,    64,    -1,    64,    27,    64,    -1,    64,
      28,    64,    -1,    64,    29,    64,    -1,    64,    30,    64,
      -1,    64,    31,    64,    -1,    64,    32,    64,    -1,    64,
      22,    64,    -1,    64,    23,    64,    -1,    64,     8,    64,
      -1,    24,    64,    -1,    13,    64,    14,    -1,    18,    64,
      -1,     6,    -1,     6,    13,    14,    -1,     6,    13,    65,
      14,    -1,     6,    53,    -1,    64,    16,    65,    -1,    64,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    75,    76,    83,    84,    85,    89,    94,
      95,   100,   101,   107,   108,   114,   115,   120,   121,   125,
     130,   135,   136,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   159,   160,   161,   166,   170,   171,   175,   176,
     207,   208,   209,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   240,   241
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CHAR", "FLOAT", "ID", "TYPE",
  "RELOP", "LC", "RC", "LB", "RB", "LP", "RP", "SEMI", "COMMA", "PLUS",
  "MINUS", "STAR", "DIV", "MOD", "AND", "OR", "NOT", "AUTOPLUS",
  "AUTOMINUS", "ASSIGNOP", "PLUSASSIGNOP", "MINUSASSIGNOP", "STARASSIGNOP",
  "DIVASSIGNOP", "MODASSIGNOP", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE",
  "FOR", "EXTENDS", "NEW", "THIS", "STATIC", "RETURN", "UMINUS",
  "LOWER_THEN_ELSE", "$accept", "program", "ExtDefList", "ExtDef",
  "Specifier", "ExtDecList", "VarDec", "ArrayDec", "FuncDec", "VarList",
  "ParamDec", "CompSt", "StmList", "Stmt", "DefList", "Def", "DecList",
  "Dec", "Exp", "Args", 0
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    50,    51,
      51,    52,    52,    53,    53,    54,    54,    55,    55,    56,
      57,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    60,    60,    61,    62,    62,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    65,    65
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     3,     2,     1,     1,
       3,     1,     2,     3,     4,     4,     3,     1,     3,     2,
       4,     2,     0,     2,     1,     3,     5,     7,     5,     9,
       2,     2,     2,     0,     2,     3,     1,     3,     1,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     2,     1,     3,     4,     2,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     8,     0,     2,     0,     0,     7,     1,     3,
      11,     0,     9,     0,     0,     0,    12,     5,     0,     0,
       6,    40,    42,    41,    64,     0,     0,     0,     0,     0,
       0,    16,     0,     0,    17,    11,    10,     0,     0,    22,
       0,     0,    67,     0,    63,    61,    50,    51,     0,    13,
       0,     0,     0,     0,     0,     0,     0,    48,    49,     0,
       0,     0,     0,     0,     0,    19,    15,     0,    34,    38,
       0,    36,     0,     0,     0,     0,     0,     0,    24,     0,
      22,     0,    32,    65,    69,     0,    62,    60,    14,    43,
      44,    45,    46,    47,    58,    59,    52,    53,    54,    55,
      56,    57,    18,     0,    35,     0,     0,     0,    31,    30,
       0,     0,    20,    21,    23,     0,    66,    39,    37,     0,
       0,     0,    25,    68,     0,     0,     0,    26,    28,     0,
       0,     0,    27,     0,     0,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    11,    12,    16,    13,    33,
      34,    78,    79,    80,    39,    40,    70,    71,    81,    85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int16 yypact[] =
{
      83,   -10,   -74,     6,   -74,    83,     4,   -74,   -74,   -74,
      22,     7,    10,    14,   472,    -5,   -74,   -74,    24,   101,
     -74,   -74,   -74,   -74,    74,   472,   472,   472,   472,   472,
      50,   -74,    24,    29,    28,    42,   -74,    39,    24,   137,
     101,   456,   -74,   168,     0,     0,     0,     0,   472,    42,
     472,   472,   472,   472,   472,   472,   472,   -74,   -74,   472,
     472,   472,   472,   472,   472,   -74,   -74,    57,   -74,    38,
      71,    72,    78,    81,    80,    82,    85,   472,   -74,    89,
     137,   193,   -74,   -74,   218,    86,   -74,    -1,   -74,    34,
      34,    34,    34,   384,   139,   432,   416,   400,   400,   400,
     400,   384,   -74,   472,   -74,    24,   472,   472,   -74,   -74,
     472,   243,   -74,   -74,   -74,   472,   -74,   384,   -74,   268,
     293,   318,   -74,   -74,   137,   137,   472,    69,   -74,   343,
     137,   472,   -74,   368,   137,   -74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,   104,   -74,   -11,    95,   -31,   -21,   -74,    48,
     -74,   103,    40,   -73,    84,   -74,    13,   -74,   -14,     8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -34
static const yytype_int16 yytable[] =
{
      30,    65,     2,    42,    32,     7,     8,    69,    38,    31,
      10,    43,    44,    45,    46,    47,    50,    51,    52,    53,
      54,    54,    17,    19,    57,    58,    18,    84,    88,    38,
      35,    64,    64,    14,    87,    15,    89,    90,    91,    92,
      93,    94,    95,    66,    67,    96,    97,    98,    99,   100,
     101,   127,   128,    14,    68,    54,    32,   132,    48,    57,
      58,   135,    49,   111,     2,   103,    64,    50,    51,    52,
      53,    54,    55,    56,    69,    57,    58,    59,    60,    61,
      62,    63,    64,    -4,     1,    14,   104,    41,   105,   117,
       2,   106,   119,   120,   107,   108,   121,   109,   110,   112,
     116,    84,    37,   130,   -33,   -33,   -33,   -33,     2,     9,
     -33,   -33,   129,    36,   -33,   102,    20,   133,   118,   -33,
     113,     0,     0,   123,    82,   -33,   -33,   -33,     0,     0,
       0,     0,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,
      21,    22,    23,    24,   -33,     0,    19,    48,     0,     0,
      25,     0,     0,     0,     0,    26,    50,    51,    52,    53,
      54,    27,    28,    29,    57,    58,     0,     0,     0,     0,
      72,    64,    73,    74,    75,    76,    48,     0,     0,     0,
      77,     0,    86,     0,     0,    50,    51,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    48,     0,     0,     0,     0,     0,     0,   114,     0,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    48,     0,     0,     0,
       0,     0,     0,     0,   115,    50,    51,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    48,     0,     0,     0,     0,     0,     0,   122,     0,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    48,     0,     0,     0,
       0,     0,   124,     0,     0,    50,    51,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    48,     0,     0,     0,     0,     0,   125,     0,     0,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    48,     0,     0,     0,
       0,     0,     0,   126,     0,    50,    51,    52,    53,    54,
      55,    56,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    48,     0,     0,     0,     0,     0,     0,   131,     0,
      50,    51,    52,    53,    54,    55,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    48,     0,     0,     0,
       0,     0,   134,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    48,    57,    58,    59,    60,    61,    62,    63,
      64,    50,    51,    52,    53,    54,    55,    56,    48,    57,
      58,    59,    60,    61,    62,    63,    64,    50,    51,    52,
      53,    54,    55,    56,    48,    57,    58,    59,     0,     0,
       0,     0,    64,    50,    51,    52,    53,    54,    55,    56,
      48,    57,    58,     0,     0,     0,     0,     0,    64,    50,
      51,    52,    53,    54,    55,     0,     0,    57,    58,    21,
      22,    23,    24,     0,    64,     0,     0,     0,     0,    25,
      83,     0,     0,     0,    26,    21,    22,    23,    24,     0,
      27,    28,    29,     0,     0,    25,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,    27,    28,    29
};

static const yytype_int16 yycheck[] =
{
      14,    32,     7,    24,    15,    15,     0,    38,    19,    14,
       6,    25,    26,    27,    28,    29,    17,    18,    19,    20,
      21,    21,    15,     9,    25,    26,    16,    41,    49,    40,
       6,    32,    32,    11,    48,    13,    50,    51,    52,    53,
      54,    55,    56,    14,    16,    59,    60,    61,    62,    63,
      64,   124,   125,    11,    15,    21,    67,   130,     8,    25,
      26,   134,    12,    77,     7,    27,    32,    17,    18,    19,
      20,    21,    22,    23,   105,    25,    26,    27,    28,    29,
      30,    31,    32,     0,     1,    11,    15,    13,    16,   103,
       7,    13,   106,   107,    13,    15,   110,    15,    13,    10,
      14,   115,     1,    34,     3,     4,     5,     6,     7,     5,
       9,    10,   126,    18,    13,    67,    13,   131,   105,    18,
      80,    -1,    -1,   115,    40,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    38,
       3,     4,     5,     6,    43,    -1,     9,     8,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    18,    17,    18,    19,    20,
      21,    24,    25,    26,    25,    26,    -1,    -1,    -1,    -1,
      33,    32,    35,    36,    37,    38,     8,    -1,    -1,    -1,
      43,    -1,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,     8,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    17,    18,    19,    20,    21,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      17,    18,    19,    20,    21,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,     8,    -1,    -1,    -1,
      -1,    -1,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,     8,    25,    26,    27,    28,    29,    30,    31,
      32,    17,    18,    19,    20,    21,    22,    23,     8,    25,
      26,    27,    28,    29,    30,    31,    32,    17,    18,    19,
      20,    21,    22,    23,     8,    25,    26,    27,    -1,    -1,
      -1,    -1,    32,    17,    18,    19,    20,    21,    22,    23,
       8,    25,    26,    -1,    -1,    -1,    -1,    -1,    32,    17,
      18,    19,    20,    21,    22,    -1,    -1,    25,    26,     3,
       4,     5,     6,    -1,    32,    -1,    -1,    -1,    -1,    13,
      14,    -1,    -1,    -1,    18,     3,     4,     5,     6,    -1,
      24,    25,    26,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     7,    47,    48,    49,    50,    15,     0,    48,
       6,    51,    52,    54,    11,    13,    53,    15,    16,     9,
      57,     3,     4,     5,     6,    13,    18,    24,    25,    26,
      64,    14,    50,    55,    56,     6,    51,     1,    50,    60,
      61,    13,    53,    64,    64,    64,    64,    64,     8,    12,
      17,    18,    19,    20,    21,    22,    23,    25,    26,    27,
      28,    29,    30,    31,    32,    52,    14,    16,    15,    52,
      62,    63,    33,    35,    36,    37,    38,    43,    57,    58,
      59,    64,    60,    14,    64,    65,    14,    64,    53,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    55,    27,    15,    16,    13,    13,    15,    15,
      13,    64,    10,    58,    15,    16,    14,    64,    62,    64,
      64,    64,    15,    65,    14,    14,    15,    59,    59,    64,
      34,    15,    59,    64,    14,    59
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



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

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

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
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 71 "grammarTree.y"
    {display((yyvsp[(1) - (1)].ptr), 0);;}
    break;

  case 3:
#line 75 "grammarTree.y"
    {(yyval.ptr) = mknode(2, EXT_DEF_LIST, yylineno, (yyvsp[(1) - (2)].ptr), (yyvsp[(2) - (2)].ptr));;}
    break;

  case 4:
#line 76 "grammarTree.y"
    {(yyval.ptr) = NULL;}
    break;

  case 5:
#line 83 "grammarTree.y"
    {(yyval.ptr) = mknode(2, EXT_VAR_DEF, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(2) - (3)].ptr));;}
    break;

  case 6:
#line 84 "grammarTree.y"
    {(yyval.ptr) = mknode(3, FUNC_DEF, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr));;}
    break;

  case 7:
#line 85 "grammarTree.y"
    {(yyval.ptr) = NULL;;}
    break;

  case 8:
#line 89 "grammarTree.y"
    {(yyval.ptr) = mknode(0, TYPE, yylineno);strcpy((yyval.ptr)->type_id, (yyvsp[(1) - (1)].type_id));(yyval.ptr)->type = (!strcmp((yyvsp[(1) - (1)].type_id), "int") ? INT : (!strcmp((yyvsp[(1) - (1)].type_id), "float") ? FLOAT : CHAR));;}
    break;

  case 9:
#line 94 "grammarTree.y"
    {(yyval.ptr) = (yyvsp[(1) - (1)].ptr);;}
    break;

  case 10:
#line 95 "grammarTree.y"
    {(yyval.ptr) = mknode(2, EXT_DEC_LIST, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));;}
    break;

  case 11:
#line 100 "grammarTree.y"
    {(yyval.ptr) = mknode(0, ID, yylineno); strcpy((yyval.ptr)->type_id, (yyvsp[(1) - (1)].type_id));;}
    break;

  case 12:
#line 101 "grammarTree.y"
    {(yyval.ptr) = mknode(1, ARRAY_DEC, yylineno, (yyvsp[(2) - (2)].ptr)); strcpy((yyval.ptr)->type_id, (yyvsp[(1) - (2)].type_id));;}
    break;

  case 13:
#line 107 "grammarTree.y"
    {(yyval.ptr) = (yyvsp[(2) - (3)].ptr);}
    break;

  case 14:
#line 108 "grammarTree.y"
    {(yyval.ptr) = mknode(2, ARRAY_DEC, yylineno, (yyvsp[(2) - (4)].ptr), (yyvsp[(4) - (4)].ptr));;}
    break;

  case 15:
#line 114 "grammarTree.y"
    {(yyval.ptr) = mknode(1, FUNC_DEC, yylineno, (yyvsp[(3) - (4)].ptr));strcpy((yyval.ptr)->type_id, (yyvsp[(1) - (4)].type_id));;}
    break;

  case 16:
#line 115 "grammarTree.y"
    {(yyval.ptr) = mknode(0, FUNC_DEC, yylineno); strcpy((yyval.ptr)->type_id, (yyvsp[(1) - (3)].type_id));(yyval.ptr)->ptr[0]=NULL;;}
    break;

  case 17:
#line 120 "grammarTree.y"
    {(yyval.ptr) = mknode(1, PARAM_LIST, yylineno, (yyvsp[(1) - (1)].ptr));;}
    break;

  case 18:
#line 121 "grammarTree.y"
    {(yyval.ptr) = mknode(2, PARAM_LIST, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));;}
    break;

  case 19:
#line 125 "grammarTree.y"
    {(yyval.ptr) = mknode(2, PARAM_DEC, yylineno, (yyvsp[(1) - (2)].ptr), (yyvsp[(2) - (2)].ptr));;}
    break;

  case 20:
#line 130 "grammarTree.y"
    {(yyval.ptr) = mknode(2, COMP_STM, yylineno, (yyvsp[(2) - (4)].ptr), (yyvsp[(3) - (4)].ptr));;}
    break;

  case 21:
#line 135 "grammarTree.y"
    {(yyval.ptr) = mknode(2, STM_LIST, yylineno, (yyvsp[(1) - (2)].ptr), (yyvsp[(2) - (2)].ptr));;}
    break;

  case 22:
#line 136 "grammarTree.y"
    {(yyval.ptr) = NULL;;}
    break;

  case 23:
#line 146 "grammarTree.y"
    {(yyval.ptr) = mknode(1, EXP_STMT, yylineno, (yyvsp[(1) - (2)].ptr));;}
    break;

  case 24:
#line 147 "grammarTree.y"
    {(yyval.ptr) = (yyvsp[(1) - (1)].ptr);;}
    break;

  case 25:
#line 148 "grammarTree.y"
    {(yyval.ptr) = mknode(1, RETURN, yylineno, (yyvsp[(2) - (3)].ptr));;}
    break;

  case 26:
#line 149 "grammarTree.y"
    {(yyval.ptr) = mknode(2, IF_THEN, yylineno, (yyvsp[(3) - (5)].ptr), (yyvsp[(5) - (5)].ptr));;}
    break;

  case 27:
#line 150 "grammarTree.y"
    {(yyval.ptr) = mknode(3, IF_THEN_ELSE, yylineno, (yyvsp[(3) - (7)].ptr), (yyvsp[(5) - (7)].ptr), (yyvsp[(7) - (7)].ptr));;}
    break;

  case 28:
#line 151 "grammarTree.y"
    {(yyval.ptr) = mknode(2, WHILE, yylineno, (yyvsp[(3) - (5)].ptr), (yyvsp[(5) - (5)].ptr));;}
    break;

  case 29:
#line 152 "grammarTree.y"
    {(yyval.ptr) = mknode(4, FOR, yylineno, (yyvsp[(3) - (9)].ptr), (yyvsp[(5) - (9)].ptr), (yyvsp[(7) - (9)].ptr), (yyvsp[(9) - (9)].ptr));;}
    break;

  case 30:
#line 153 "grammarTree.y"
    {(yyval.ptr) = mknode(0, CONTINUE, yylineno);;}
    break;

  case 31:
#line 154 "grammarTree.y"
    {(yyval.ptr) = mknode(0, BREAK, yylineno);;}
    break;

  case 32:
#line 159 "grammarTree.y"
    {(yyval.ptr) = mknode(2, DEF_LIST, yylineno, (yyvsp[(1) - (2)].ptr), (yyvsp[(2) - (2)].ptr));;}
    break;

  case 33:
#line 160 "grammarTree.y"
    {(yyval.ptr) = NULL;;}
    break;

  case 35:
#line 166 "grammarTree.y"
    {(yyval.ptr) = mknode(2, VAR_DEF, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(2) - (3)].ptr));;}
    break;

  case 36:
#line 170 "grammarTree.y"
    {(yyval.ptr) = mknode(1, DEC_LIST, yylineno, (yyvsp[(1) - (1)].ptr));;}
    break;

  case 37:
#line 171 "grammarTree.y"
    {(yyval.ptr) = mknode(2, DEC_LIST, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));;}
    break;

  case 38:
#line 175 "grammarTree.y"
    {(yyval.ptr) = (yyvsp[(1) - (1)].ptr);;}
    break;

  case 39:
#line 176 "grammarTree.y"
    {(yyval.ptr) = mknode(2, ASSIGNOP, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));strcpy((yyval.ptr)->type_id, "ASSIGNOP");;}
    break;

  case 40:
#line 207 "grammarTree.y"
    {(yyval.ptr) = mknode(0, INT, yylineno); (yyval.ptr)->type = INT; (yyval.ptr)->type_int = (yyvsp[(1) - (1)].type_int);;}
    break;

  case 41:
#line 208 "grammarTree.y"
    {(yyval.ptr) = mknode(0, FLOAT, yylineno); (yyval.ptr)->type = FLOAT; (yyval.ptr)->type_float = (yyvsp[(1) - (1)].type_float);;}
    break;

  case 42:
#line 209 "grammarTree.y"
    {(yyval.ptr) = mknode(0, CHAR, yylineno); (yyval.ptr)->type = CHAR; (yyval.ptr)->type_char = (yyvsp[(1) - (1)].type_char);;}
    break;

  case 43:
#line 212 "grammarTree.y"
    {(yyval.ptr) = mknode(2, PLUS, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "PLUS");;}
    break;

  case 44:
#line 213 "grammarTree.y"
    {(yyval.ptr) = mknode(2, MINUS, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "MINUS");;}
    break;

  case 45:
#line 214 "grammarTree.y"
    {(yyval.ptr) = mknode(2, STAR, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "STAR");;}
    break;

  case 46:
#line 215 "grammarTree.y"
    {(yyval.ptr) = mknode(2, DIV, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "DIV");;}
    break;

  case 47:
#line 216 "grammarTree.y"
    {(yyval.ptr) = mknode(2, MOD, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "MOD");;}
    break;

  case 48:
#line 217 "grammarTree.y"
    {(yyval.ptr) = mknode(1, AUTOPLUS, yylineno, (yyvsp[(1) - (2)].ptr)); strcpy((yyval.ptr)->type_id, "AUTOPLUS");;}
    break;

  case 49:
#line 218 "grammarTree.y"
    {(yyval.ptr) = mknode(1, AUTOMINUS, yylineno, (yyvsp[(1) - (2)].ptr)); strcpy((yyval.ptr)->type_id, "AUTOMINUS");;}
    break;

  case 50:
#line 219 "grammarTree.y"
    {(yyval.ptr) = mknode(1, AUTOPLUS, yylineno, (yyvsp[(2) - (2)].ptr)); strcpy((yyval.ptr)->type_id, "AUTOPLUS");;}
    break;

  case 51:
#line 220 "grammarTree.y"
    {(yyval.ptr) = mknode(1, AUTOMINUS, yylineno, (yyvsp[(2) - (2)].ptr)); strcpy((yyval.ptr)->type_id, "AUTOMINUS");;}
    break;

  case 52:
#line 221 "grammarTree.y"
    {(yyval.ptr) = mknode(2, ASSIGNOP, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "ASSIGNOP");;}
    break;

  case 53:
#line 222 "grammarTree.y"
    {(yyval.ptr) = mknode(2, PLUSASSIGNOP, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "PLUSASSIGNOP");;}
    break;

  case 54:
#line 223 "grammarTree.y"
    {(yyval.ptr) = mknode(2, MINUSASSIGNOP, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "MINUSASSIGNOP");;}
    break;

  case 55:
#line 224 "grammarTree.y"
    {(yyval.ptr) = mknode(2, STARASSIGNOP, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "STARASSIGNOP");;}
    break;

  case 56:
#line 225 "grammarTree.y"
    {(yyval.ptr) = mknode(2, DIVASSIGNOP, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "DIVASSIGNOP");;}
    break;

  case 57:
#line 226 "grammarTree.y"
    {(yyval.ptr) = mknode(2, MODASSIGNOP, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "MODASSIGNOP");;}
    break;

  case 58:
#line 227 "grammarTree.y"
    {(yyval.ptr) = mknode(2, AND, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "AND");;}
    break;

  case 59:
#line 228 "grammarTree.y"
    {(yyval.ptr) = mknode(2, OR, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "OR");;}
    break;

  case 60:
#line 229 "grammarTree.y"
    {(yyval.ptr) = mknode(2, RELOP, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); strcpy((yyval.ptr)->type_id, "RELOP");;}
    break;

  case 61:
#line 230 "grammarTree.y"
    {(yyval.ptr) = mknode(1, NOT, yylineno, (yyvsp[(2) - (2)].ptr)); strcpy((yyval.ptr)->type_id, "NOT");;}
    break;

  case 62:
#line 231 "grammarTree.y"
    {(yyval.ptr) = (yyvsp[(2) - (3)].ptr);;}
    break;

  case 63:
#line 232 "grammarTree.y"
    {(yyval.ptr) = mknode(1, UMINUS, yylineno, (yyvsp[(2) - (2)].ptr)); strcpy((yyval.ptr)->type_id, "UMINUS");;}
    break;

  case 64:
#line 233 "grammarTree.y"
    {(yyval.ptr) = mknode(0, ID, yylineno); strcpy((yyval.ptr)->type_id, (yyvsp[(1) - (1)].type_id));;}
    break;

  case 65:
#line 234 "grammarTree.y"
    {(yyval.ptr) = mknode(0, FUNC_CALL, yylineno); strcpy((yyval.ptr)->type_id, (yyvsp[(1) - (3)].type_id));;}
    break;

  case 66:
#line 235 "grammarTree.y"
    {(yyval.ptr) = mknode(1, FUNC_CALL, yylineno, (yyvsp[(3) - (4)].ptr)); strcpy((yyval.ptr)->type_id, (yyvsp[(1) - (4)].type_id));;}
    break;

  case 67:
#line 236 "grammarTree.y"
    {(yyval.ptr) = mknode(1, ARRAY_ID, yylineno, (yyvsp[(2) - (2)].ptr)); strcpy((yyval.ptr)->type_id, (yyvsp[(1) - (2)].type_id));;}
    break;

  case 68:
#line 240 "grammarTree.y"
    {(yyval.ptr) = mknode(2, ARGS, yylineno, (yyvsp[(1) - (3)].ptr), (yyvsp[(3) - (3)].ptr));;}
    break;

  case 69:
#line 241 "grammarTree.y"
    {(yyval.ptr) = mknode(1, ARGS, yylineno, (yyvsp[(1) - (1)].ptr));;}
    break;


/* Line 1267 of yacc.c.  */
#line 1973 "grammarTree.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


#line 244 "grammarTree.y"

int main(int args, char *argv[]){
    yyin = fopen(argv[1], "r");
    if(!yyin) 
        return 0;
    yylineno = 1;
    yyparse();
    return 0;
}

#include <stdarg.h>
void yyerror(const char *fmt, ...){
    va_list ap;
    va_start(ap, fmt);
    fprintf(stderr, "Grammar Error at Line %d Column %d: ", yylloc.first_line, yylloc.first_column);
    vfprintf(stderr, fmt, ap);
    fprintf(stderr, ".\n");
}




