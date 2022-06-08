#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  sym_land = 10,
  anon_sym_PLUS = 11,
  anon_sym_2 = 12,
  anon_sym_CARET = 13,
  anon_sym_3 = 14,
  anon_sym_BANG = 15,
  anon_sym_4 = 16,
  sym_leq = 17,
  sym_url = 18,
  sym_program = 19,
  sym_edges = 20,
  sym_imports = 21,
  sym_probability = 22,
  sym_cond = 23,
  sym_lor = 24,
  sym_lxor = 25,
  sym_lnot = 26,
  sym_op = 27,
  sym_query = 28,
  aux_sym_program_repeat1 = 29,
  aux_sym_program_repeat2 = 30,
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
  [sym_land] = "land",
  [anon_sym_PLUS] = "+",
  [anon_sym_2] = "∨",
  [anon_sym_CARET] = "^",
  [anon_sym_3] = "⊕",
  [anon_sym_BANG] = "!",
  [anon_sym_4] = "¬",
  [sym_leq] = "leq",
  [sym_url] = "url",
  [sym_program] = "program",
  [sym_edges] = "edges",
  [sym_imports] = "imports",
  [sym_probability] = "probability",
  [sym_cond] = "cond",
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
  [sym_land] = sym_land,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_4] = anon_sym_4,
  [sym_leq] = sym_leq,
  [sym_url] = sym_url,
  [sym_program] = sym_program,
  [sym_edges] = sym_edges,
  [sym_imports] = sym_imports,
  [sym_probability] = sym_probability,
  [sym_cond] = sym_cond,
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
  [sym_land] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
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
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == 172) ADVANCE(16);
      if (lookahead == 8594) ADVANCE(5);
      if (lookahead == 8744) ADVANCE(12);
      if (lookahead == 8853) ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
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
          lookahead != '"') ADVANCE(19);
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
      ACCEPT_TOKEN(sym_land);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_leq);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(19);
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
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
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
    [sym_land] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [sym_leq] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(35),
    [sym_edges] = STATE(23),
    [aux_sym_program_repeat1] = STATE(10),
    [sym_identifier] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_RPAREN,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    STATE(11), 1,
      sym_op,
    STATE(31), 1,
      sym_cond,
    ACTIONS(9), 2,
      sym_land,
      sym_leq,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_2,
    ACTIONS(13), 2,
      anon_sym_CARET,
      anon_sym_3,
    STATE(20), 2,
      sym_lor,
      sym_lxor,
  [29] = 3,
    STATE(11), 1,
      sym_op,
    STATE(20), 2,
      sym_lor,
      sym_lxor,
    ACTIONS(15), 8,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_land,
      anon_sym_PLUS,
      anon_sym_2,
      anon_sym_CARET,
      anon_sym_3,
      sym_leq,
  [47] = 3,
    STATE(11), 1,
      sym_op,
    STATE(20), 2,
      sym_lor,
      sym_lxor,
    ACTIONS(17), 8,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_land,
      anon_sym_PLUS,
      anon_sym_2,
      anon_sym_CARET,
      anon_sym_3,
      sym_leq,
  [65] = 6,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_op,
    ACTIONS(9), 2,
      sym_land,
      sym_leq,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_2,
    ACTIONS(13), 2,
      anon_sym_CARET,
      anon_sym_3,
    STATE(20), 2,
      sym_lor,
      sym_lxor,
  [88] = 6,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      sym_op,
    ACTIONS(9), 2,
      sym_land,
      sym_leq,
    ACTIONS(11), 2,
      anon_sym_PLUS,
      anon_sym_2,
    ACTIONS(13), 2,
      anon_sym_CARET,
      anon_sym_3,
    STATE(20), 2,
      sym_lor,
      sym_lxor,
  [111] = 1,
    ACTIONS(15), 8,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_land,
      anon_sym_PLUS,
      anon_sym_2,
      anon_sym_CARET,
      anon_sym_3,
      sym_leq,
  [122] = 1,
    ACTIONS(23), 8,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_land,
      anon_sym_PLUS,
      anon_sym_2,
      anon_sym_CARET,
      anon_sym_3,
      sym_leq,
  [133] = 5,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_query,
    STATE(13), 1,
      sym_lnot,
    ACTIONS(29), 2,
      anon_sym_BANG,
      anon_sym_4,
  [150] = 5,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_import,
    STATE(19), 1,
      aux_sym_program_repeat1,
    STATE(23), 1,
      sym_edges,
    STATE(15), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [167] = 5,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_query,
    STATE(13), 1,
      sym_lnot,
    ACTIONS(29), 2,
      anon_sym_BANG,
      anon_sym_4,
  [184] = 5,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_query,
    STATE(13), 1,
      sym_lnot,
    ACTIONS(29), 2,
      anon_sym_BANG,
      anon_sym_4,
  [201] = 5,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_query,
    STATE(13), 1,
      sym_lnot,
    ACTIONS(29), 2,
      anon_sym_BANG,
      anon_sym_4,
  [218] = 5,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_query,
    STATE(13), 1,
      sym_lnot,
    ACTIONS(29), 2,
      anon_sym_BANG,
      anon_sym_4,
  [235] = 4,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(37), 1,
      anon_sym_Pr,
    STATE(27), 1,
      sym_probability,
    STATE(16), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [249] = 3,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(42), 1,
      anon_sym_Pr,
    STATE(16), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [260] = 1,
    ACTIONS(44), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_4,
      sym_identifier,
  [267] = 2,
    ACTIONS(46), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(48), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [276] = 4,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_import,
    STATE(19), 1,
      aux_sym_program_repeat1,
    STATE(23), 1,
      sym_edges,
  [289] = 1,
    ACTIONS(55), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_4,
      sym_identifier,
  [296] = 1,
    ACTIONS(57), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_4,
      sym_identifier,
  [303] = 1,
    ACTIONS(59), 4,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_4,
      sym_identifier,
  [310] = 2,
    ACTIONS(61), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(63), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [319] = 1,
    ACTIONS(65), 2,
      anon_sym_import,
      anon_sym_Pr,
  [324] = 1,
    ACTIONS(63), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [329] = 1,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
  [333] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [337] = 1,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
  [341] = 1,
    ACTIONS(73), 1,
      sym_url,
  [345] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [349] = 1,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
  [353] = 1,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
  [357] = 1,
    ACTIONS(81), 1,
      sym_identifier,
  [361] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [365] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 65,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 122,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 218,
  [SMALL_STATE(15)] = 235,
  [SMALL_STATE(16)] = 249,
  [SMALL_STATE(17)] = 260,
  [SMALL_STATE(18)] = 267,
  [SMALL_STATE(19)] = 276,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 296,
  [SMALL_STATE(22)] = 303,
  [SMALL_STATE(23)] = 310,
  [SMALL_STATE(24)] = 319,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 329,
  [SMALL_STATE(27)] = 333,
  [SMALL_STATE(28)] = 337,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 345,
  [SMALL_STATE(31)] = 349,
  [SMALL_STATE(32)] = 353,
  [SMALL_STATE(33)] = 357,
  [SMALL_STATE(34)] = 361,
  [SMALL_STATE(35)] = 365,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(32),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lnot, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_edges, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edges, 3),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(25),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lor, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lxor, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 5),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
