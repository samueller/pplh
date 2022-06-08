#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  sym_lor = 11,
  sym_lxor = 12,
  sym_lnot = 13,
  sym_leq = 14,
  sym_url = 15,
  sym_program = 16,
  sym_edges = 17,
  sym_imports = 18,
  sym_probability = 19,
  sym_cond = 20,
  sym_op = 21,
  sym_query = 22,
  aux_sym_program_repeat1 = 23,
  aux_sym_program_repeat2 = 24,
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
  [sym_lor] = "lor",
  [sym_lxor] = "lxor",
  [sym_lnot] = "lnot",
  [sym_leq] = "leq",
  [sym_url] = "url",
  [sym_program] = "program",
  [sym_edges] = "edges",
  [sym_imports] = "imports",
  [sym_probability] = "probability",
  [sym_cond] = "cond",
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
  [sym_lor] = sym_lor,
  [sym_lxor] = sym_lxor,
  [sym_lnot] = sym_lnot,
  [sym_leq] = sym_leq,
  [sym_url] = sym_url,
  [sym_program] = sym_program,
  [sym_edges] = sym_edges,
  [sym_imports] = sym_imports,
  [sym_probability] = sym_probability,
  [sym_cond] = sym_cond,
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
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '^') ADVANCE(12);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == 8594) ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
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
          lookahead != '"') ADVANCE(16);
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
      ACCEPT_TOKEN(sym_lor);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_lxor);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_lnot);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_leq);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(16);
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
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
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
    [sym_lor] = ACTIONS(1),
    [sym_lxor] = ACTIONS(1),
    [sym_lnot] = ACTIONS(1),
    [sym_leq] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(30),
    [sym_edges] = STATE(13),
    [aux_sym_program_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_RPAREN,
    ACTIONS(7), 1,
      anon_sym_PIPE,
    STATE(17), 1,
      sym_op,
    STATE(27), 1,
      sym_cond,
    ACTIONS(9), 5,
      sym_land,
      sym_lor,
      sym_lxor,
      sym_lnot,
      sym_leq,
  [20] = 2,
    STATE(17), 1,
      sym_op,
    ACTIONS(11), 7,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_land,
      sym_lor,
      sym_lxor,
      sym_lnot,
      sym_leq,
  [33] = 3,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_op,
    ACTIONS(9), 5,
      sym_land,
      sym_lor,
      sym_lxor,
      sym_lnot,
      sym_leq,
  [47] = 1,
    ACTIONS(11), 7,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_land,
      sym_lor,
      sym_lxor,
      sym_lnot,
      sym_leq,
  [57] = 3,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_op,
    ACTIONS(9), 5,
      sym_land,
      sym_lor,
      sym_lxor,
      sym_lnot,
      sym_leq,
  [71] = 1,
    ACTIONS(17), 7,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_land,
      sym_lor,
      sym_lxor,
      sym_lnot,
      sym_leq,
  [81] = 5,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_import,
    STATE(12), 1,
      aux_sym_program_repeat1,
    STATE(13), 1,
      sym_edges,
    STATE(9), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [98] = 4,
    ACTIONS(23), 1,
      anon_sym_import,
    ACTIONS(25), 1,
      anon_sym_Pr,
    STATE(23), 1,
      sym_probability,
    STATE(10), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [112] = 3,
    ACTIONS(27), 1,
      anon_sym_import,
    ACTIONS(30), 1,
      anon_sym_Pr,
    STATE(10), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [123] = 2,
    ACTIONS(32), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(34), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [132] = 4,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_import,
    STATE(12), 1,
      aux_sym_program_repeat1,
    STATE(13), 1,
      sym_edges,
  [145] = 2,
    ACTIONS(41), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(43), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [154] = 3,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_query,
  [164] = 3,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(6), 1,
      sym_query,
  [174] = 3,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_query,
  [184] = 3,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_query,
  [194] = 1,
    ACTIONS(49), 2,
      anon_sym_import,
      anon_sym_Pr,
  [199] = 1,
    ACTIONS(43), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [204] = 1,
    ACTIONS(51), 2,
      anon_sym_LPAREN,
      sym_identifier,
  [209] = 1,
    ACTIONS(53), 1,
      sym_url,
  [213] = 1,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
  [217] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [221] = 1,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
  [225] = 1,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
  [229] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [233] = 1,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
  [237] = 1,
    ACTIONS(67), 1,
      sym_identifier,
  [241] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [245] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 47,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 81,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 145,
  [SMALL_STATE(14)] = 154,
  [SMALL_STATE(15)] = 164,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 194,
  [SMALL_STATE(19)] = 199,
  [SMALL_STATE(20)] = 204,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 213,
  [SMALL_STATE(23)] = 217,
  [SMALL_STATE(24)] = 221,
  [SMALL_STATE(25)] = 225,
  [SMALL_STATE(26)] = 229,
  [SMALL_STATE(27)] = 233,
  [SMALL_STATE(28)] = 237,
  [SMALL_STATE(29)] = 241,
  [SMALL_STATE(30)] = 245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(25),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_edges, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edges, 3),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 5),
  [71] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
