#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
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
  sym_url = 11,
  sym_program = 12,
  sym_edges = 13,
  sym_imports = 14,
  sym_probability = 15,
  sym_cond = 16,
  sym_query = 17,
  aux_sym_program_repeat1 = 18,
  aux_sym_program_repeat2 = 19,
  aux_sym_query_repeat1 = 20,
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
  [sym_url] = "url",
  [sym_program] = "program",
  [sym_edges] = "edges",
  [sym_imports] = "imports",
  [sym_probability] = "probability",
  [sym_cond] = "cond",
  [sym_query] = "query",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_program_repeat2] = "program_repeat2",
  [aux_sym_query_repeat1] = "query_repeat1",
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
  [sym_url] = sym_url,
  [sym_program] = sym_program,
  [sym_edges] = sym_edges,
  [sym_imports] = sym_imports,
  [sym_probability] = sym_probability,
  [sym_cond] = sym_cond,
  [sym_query] = sym_query,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_program_repeat2] = aux_sym_program_repeat2,
  [aux_sym_query_repeat1] = aux_sym_query_repeat1,
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
  [aux_sym_query_repeat1] = {
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
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == 8594) ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
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
          lookahead != '"') ADVANCE(12);
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
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_url);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(12);
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
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_program] = STATE(23),
    [sym_edges] = STATE(6),
    [aux_sym_program_repeat1] = STATE(2),
    [sym_identifier] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_import,
    STATE(6), 1,
      sym_edges,
    STATE(8), 1,
      aux_sym_program_repeat1,
    STATE(3), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [17] = 4,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_Pr,
    STATE(17), 1,
      sym_probability,
    STATE(5), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [31] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_query_repeat1,
    ACTIONS(13), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [42] = 3,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(20), 1,
      anon_sym_Pr,
    STATE(5), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [53] = 2,
    ACTIONS(22), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(24), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [62] = 3,
    ACTIONS(28), 1,
      anon_sym_COMMA,
    STATE(7), 1,
      aux_sym_query_repeat1,
    ACTIONS(26), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [73] = 4,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_import,
    STATE(6), 1,
      sym_edges,
    STATE(8), 1,
      aux_sym_program_repeat1,
  [86] = 2,
    ACTIONS(36), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(38), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [95] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      aux_sym_query_repeat1,
    ACTIONS(40), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [106] = 1,
    ACTIONS(26), 3,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [112] = 3,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    ACTIONS(44), 1,
      anon_sym_PIPE,
    STATE(24), 1,
      sym_cond,
  [122] = 2,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(27), 1,
      sym_query,
  [129] = 2,
    ACTIONS(46), 1,
      sym_identifier,
    STATE(12), 1,
      sym_query,
  [136] = 1,
    ACTIONS(48), 2,
      anon_sym_import,
      anon_sym_Pr,
  [141] = 1,
    ACTIONS(24), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [146] = 1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
  [150] = 1,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
  [154] = 1,
    ACTIONS(54), 1,
      sym_identifier,
  [158] = 1,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
  [162] = 1,
    ACTIONS(58), 1,
      sym_identifier,
  [166] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
  [170] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [174] = 1,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
  [178] = 1,
    ACTIONS(66), 1,
      sym_url,
  [182] = 1,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
  [186] = 1,
    ACTIONS(70), 1,
      anon_sym_RPAREN,
  [190] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 31,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 73,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 122,
  [SMALL_STATE(14)] = 129,
  [SMALL_STATE(15)] = 136,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 146,
  [SMALL_STATE(18)] = 150,
  [SMALL_STATE(19)] = 154,
  [SMALL_STATE(20)] = 158,
  [SMALL_STATE(21)] = 162,
  [SMALL_STATE(22)] = 166,
  [SMALL_STATE(23)] = 170,
  [SMALL_STATE(24)] = 174,
  [SMALL_STATE(25)] = 178,
  [SMALL_STATE(26)] = 182,
  [SMALL_STATE(27)] = 186,
  [SMALL_STATE(28)] = 190,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(26),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(21),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_edges, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edges, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 4),
  [62] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 5),
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
