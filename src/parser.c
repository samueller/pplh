#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 28
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_ = 3,
  anon_sym_import = 4,
  anon_sym_DQUOTE = 5,
  anon_sym_Pr = 6,
  anon_sym_LPAREN = 7,
  anon_sym_PIPE = 8,
  anon_sym_RPAREN = 9,
  anon_sym_COMMA = 10,
  sym_url = 11,
  sym_program = 12,
  sym_edges = 13,
  sym_imports = 14,
  sym_probability = 15,
  sym_query = 16,
  aux_sym_program_repeat1 = 17,
  aux_sym_program_repeat2 = 18,
  aux_sym_query_repeat1 = 19,
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
  [anon_sym_PIPE] = "|",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [sym_url] = "url",
  [sym_program] = "program",
  [sym_edges] = "edges",
  [sym_imports] = "imports",
  [sym_probability] = "probability",
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
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_url] = sym_url,
  [sym_program] = sym_program,
  [sym_edges] = sym_edges,
  [sym_imports] = sym_imports,
  [sym_probability] = sym_probability,
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
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
      if (lookahead == ')') ADVANCE(9);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '|') ADVANCE(8);
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
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
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
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(19),
    [sym_edges] = STATE(5),
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
    STATE(5), 1,
      sym_edges,
    STATE(7), 1,
      aux_sym_program_repeat1,
    STATE(3), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [17] = 4,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_Pr,
    STATE(21), 1,
      sym_probability,
    STATE(9), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [31] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_query_repeat1,
    ACTIONS(13), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [42] = 2,
    ACTIONS(17), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(19), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [51] = 3,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_query_repeat1,
    ACTIONS(21), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [62] = 4,
    ACTIONS(26), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_import,
    STATE(5), 1,
      sym_edges,
    STATE(7), 1,
      aux_sym_program_repeat1,
  [75] = 2,
    ACTIONS(31), 2,
      anon_sym_import,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [84] = 3,
    ACTIONS(35), 1,
      anon_sym_import,
    ACTIONS(38), 1,
      anon_sym_Pr,
    STATE(9), 2,
      sym_imports,
      aux_sym_program_repeat2,
  [95] = 3,
    ACTIONS(15), 1,
      anon_sym_COMMA,
    STATE(4), 1,
      aux_sym_query_repeat1,
    ACTIONS(40), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [106] = 1,
    ACTIONS(21), 3,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [112] = 1,
    ACTIONS(42), 2,
      anon_sym_import,
      anon_sym_Pr,
  [117] = 2,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(26), 1,
      sym_query,
  [124] = 1,
    ACTIONS(19), 2,
      anon_sym_DASH_GT,
      anon_sym_,
  [129] = 2,
    ACTIONS(46), 1,
      anon_sym_PIPE,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
  [136] = 2,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(15), 1,
      sym_query,
  [143] = 1,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
  [147] = 1,
    ACTIONS(52), 1,
      sym_identifier,
  [151] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
  [155] = 1,
    ACTIONS(56), 1,
      sym_identifier,
  [159] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [163] = 1,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
  [167] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [171] = 1,
    ACTIONS(64), 1,
      sym_url,
  [175] = 1,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
  [179] = 1,
    ACTIONS(68), 1,
      anon_sym_RPAREN,
  [183] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 31,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 51,
  [SMALL_STATE(7)] = 62,
  [SMALL_STATE(8)] = 75,
  [SMALL_STATE(9)] = 84,
  [SMALL_STATE(10)] = 95,
  [SMALL_STATE(11)] = 106,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 117,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 129,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 143,
  [SMALL_STATE(18)] = 147,
  [SMALL_STATE(19)] = 151,
  [SMALL_STATE(20)] = 155,
  [SMALL_STATE(21)] = 159,
  [SMALL_STATE(22)] = 163,
  [SMALL_STATE(23)] = 167,
  [SMALL_STATE(24)] = 171,
  [SMALL_STATE(25)] = 175,
  [SMALL_STATE(26)] = 179,
  [SMALL_STATE(27)] = 183,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(20),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_edges, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edges, 3),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2), SHIFT_REPEAT(25),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat2, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_probability, 6),
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
