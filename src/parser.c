#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_ = 3,
  anon_sym_import = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_Pr = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_PIPE = 9,
  anon_sym_COMMA = 10,
  anon_sym_2 = 11,
  anon_sym_PLUS = 12,
  anon_sym_3 = 13,
  anon_sym_CARET = 14,
  anon_sym_4 = 15,
  anon_sym_BANG = 16,
  anon_sym_5 = 17,
  sym_leq = 18,
  sym_url = 19,
  sym_program = 20,
  sym_edges = 21,
  sym_imports = 22,
  sym_probability = 23,
  sym_cond = 24,
  sym_land = 25,
  sym_lor = 26,
  sym_lxor = 27,
  sym_lnot = 28,
  sym_op = 29,
  sym_query = 30,
  aux_sym_program_repeat1 = 31,
  aux_sym_program_repeat2 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_] = "→",
  [anon_sym_import] = "import",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_Pr] = "Pr",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [anon_sym_COMMA] = ",",
  [anon_sym_2] = "∧",
  [anon_sym_PLUS] = "+",
  [anon_sym_3] = "∨",
  [anon_sym_CARET] = "^",
  [anon_sym_4] = "⊕",
  [anon_sym_BANG] = "!",
  [anon_sym_5] = "¬",
  [sym_leq] = "leq",
  [sym_url] = "url",
  [sym_program] = "program",
  [sym_edges] = "edges",
  [sym_imports] = "imports",
  [sym_probability] = "probability",
  [sym_cond] = "cond",
  [sym_land] = "land",
  [sym_lor] = "lor",
  [sym_lxor] = "lxor",
  [sym_lnot] = "lnot",
  [sym_op] = "op",
  [sym_query] = "query",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_] = anon_sym_,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_Pr] = anon_sym_Pr,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_5] = anon_sym_5,
  [sym_leq] = sym_leq,
  [sym_url] = sym_url,
  [sym_program] = sym_program,
  [sym_edges] = sym_edges,
  [sym_imports] = sym_imports,
  [sym_probability] = sym_probability,
  [sym_cond] = sym_cond,
  [sym_land] = sym_land,
  [sym_lor] = sym_lor,
  [sym_lxor] = sym_lxor,
  [sym_lnot] = sym_lnot,
  [sym_op] = sym_op,
  [sym_query] = sym_query,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [sym_leq] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_edges] = {
    .visible = true,
    .named = true,
  },
  [sym_imports] = {
    .visible = true,
    .named = true,
  },
  [sym_probability] = {
    .visible = true,
    .named = true,
  },
  [sym_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_land] = {
    .visible = true,
    .named = true,
  },
  [sym_lor] = {
    .visible = true,
    .named = true,
  },
  [sym_lxor] = {
    .visible = true,
    .named = true,
  },
  [sym_lnot] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '^') ADVANCE(14);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == 172) ADVANCE(17);
      if (lookahead == 8594) ADVANCE(5);
      if (lookahead == 8743) ADVANCE(11);
      if (lookahead == 8744) ADVANCE(13);
      if (lookahead == 8853) ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '>') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_leq);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'P') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'm') ADVANCE(4);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_Pr);
      END_STATE();
    case 4:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_Pr] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [sym_leq] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(36),
    [sym_edges] = STATE(17),
    [aux_sym_program_repeat1] = STATE(10),
    [sym_identifier] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_RPAREN,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    ACTIONS(15), 1,
      sym_leq,
    STATE(11), 1,
      sym_op,
    STATE(31), 1,
      sym_cond,
    ACTIONS(9), 2,
      anon_sym_COMMA,
      anon_sym_2,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_3,
    ACTIONS(13), 2,
      anon_sym_CARET,
      anon_sym_4,
    STATE(20), 3,
      sym_land,
      sym_lor,
      sym_lxor,
  [33] = 3,
    STATE(11), 1,
      sym_op,
    STATE(20), 3,
      sym_land,
      sym_lor,
      sym_lxor,
    ACTIONS(17), 9,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_2,
      anon_sym_PLUS,
      anon_sym_3,
      anon_sym_CARET,
      anon_sym_4,
      sym_leq,
  [53] = 3,
    STATE(11), 1,
      sym_op,
    STATE(20), 3,
      sym_land,
      sym_lor,
      sym_lxor,
    ACTIONS(19), 9,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_2,
      anon_sym_PLUS,
      anon_sym_3,
      anon_sym_CARET,
      anon_sym_4,
      sym_leq,
  [73] = 7,
    ACTIONS(15), 1,
      sym_leq,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_op,
    ACTIONS(9), 2,
      anon_sym_COMMA,
      anon_sym_2,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_3,
    ACTIONS(13), 2,
      anon_sym_CARET,
      anon_sym_4,
    STATE(20), 3,
      sym_land,
      sym_lor,
      sym_lxor,
  [100] = 7,
    ACTIONS(15), 1,
      sym_leq,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_op,
    ACTIONS(9), 2,
      anon_sym_COMMA,
      anon_sym_2,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_3,
    ACTIONS(13), 2,
      anon_sym_CARET,
      anon_sym_4,
    STATE(20), 3,
      sym_land,
      sym_lor,
      sym_lxor,
  [127] = 1,
    ACTIONS(17), 9,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_2,
      anon_sym_PLUS,
      anon_sym_3,
      anon_sym_CARET,
      anon_sym_4,
      sym_leq,
  [139] = 1,
    ACTIONS(25), 9,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_2,
      anon_sym_PLUS,
      anon_sym_3,
      anon_sym_CARET,
      anon_sym_4,
      sym_leq,
  [151] = 5,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_query,
    STATE(13), 1,
      sym_lnot,
    ACTIONS(31), 2,
      anon_sym_BANG,
      anon_sym_5,
  [168] = 5,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_import,
    STATE(17), 1,
      sym_edges,
    STATE(24), 1,
      aux_sym_program_repeat1,
    STATE(15), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [185] = 5,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_query,
    STATE(13), 1,
      sym_lnot,
    ACTIONS(31), 2,
      anon_sym_BANG,
      anon_sym_5,
  [202] = 5,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_query,
    STATE(13), 1,
      sym_lnot,
    ACTIONS(31), 2,
      anon_sym_BANG,
      anon_sym_5,
  [219] = 5,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_query,
    STATE(13), 1,
      sym_lnot,
    ACTIONS(31), 2,
      anon_sym_BANG,
      anon_sym_5,
  [236] = 5,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_query,
    STATE(13), 1,
      sym_lnot,
    ACTIONS(31), 2,
      anon_sym_BANG,
      anon_sym_5,
  [253] = 4,
    ACTIONS(37), 1,
      anon_sym_import,
    ACTIONS(39), 1,
      anon_sym_Pr,
    STATE(27), 1,
      sym_probability,
    STATE(19), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [267] = 1,
    ACTIONS(41), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_5,
      sym_identifier,
  [274] = 2,
    ACTIONS(43), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(45), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [283] = 1,
    ACTIONS(47), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_5,
      sym_identifier,
  [290] = 3,
    ACTIONS(49), 1,
      anon_sym_import,
    ACTIONS(52), 1,
      anon_sym_Pr,
    STATE(19), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [301] = 1,
    ACTIONS(54), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_5,
      sym_identifier,
  [308] = 1,
    ACTIONS(56), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_5,
      sym_identifier,
  [315] = 2,
    ACTIONS(58), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(60), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [324] = 1,
    ACTIONS(62), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_5,
      sym_identifier,
  [331] = 4,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(67), 1,
      anon_sym_import,
    STATE(17), 1,
      sym_edges,
    STATE(24), 1,
      aux_sym_program_repeat1,
  [344] = 1,
    ACTIONS(69), 2,
      anon_sym_import,
      anon_sym_Pr,
  [349] = 1,
    ACTIONS(45), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [354] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [358] = 1,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
  [362] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [366] = 1,
    ACTIONS(77), 1,
      sym_url,
  [370] = 1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
  [374] = 1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
  [378] = 1,
    ACTIONS(83), 1,
      sym_identifier,
  [382] = 1,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
  [386] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
  [390] = 1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 127,
  [SMALL_STATE(8)] = 139,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 219,
  [SMALL_STATE(14)] = 236,
  [SMALL_STATE(15)] = 253,
  [SMALL_STATE(16)] = 267,
  [SMALL_STATE(17)] = 274,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 290,
  [SMALL_STATE(20)] = 301,
  [SMALL_STATE(21)] = 308,
  [SMALL_STATE(22)] = 315,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 331,
  [SMALL_STATE(25)] = 344,
  [SMALL_STATE(26)] = 349,
  [SMALL_STATE(27)] = 354,
  [SMALL_STATE(28)] = 358,
  [SMALL_STATE(29)] = 362,
  [SMALL_STATE(30)] = 366,
  [SMALL_STATE(31)] = 370,
  [SMALL_STATE(32)] = 374,
  [SMALL_STATE(33)] = 378,
  [SMALL_STATE(34)] = 382,
  [SMALL_STATE(35)] = 386,
  [SMALL_STATE(36)] = 390,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_land, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lnot, 1),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(32),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lxor, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_edges, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edges, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lor, 1),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(26),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 5),
  [89] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pplh(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
