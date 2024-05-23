#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_fn = 1,
  anon_sym_EQ = 2,
  anon_sym_EQ_GT = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  sym_identifier = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_const = 9,
  anon_sym_let = 10,
  anon_sym_return = 11,
  sym__int = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_SQUOTE = 14,
  sym_string_content = 15,
  sym_source_file = 16,
  sym__definition = 17,
  sym_function_definition = 18,
  sym_parameter_list = 19,
  sym_nonfn_definition = 20,
  sym_function_body = 21,
  sym_return_stmt = 22,
  sym_val = 23,
  sym_string = 24,
  aux_sym__string_content = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_parameter_list_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_fn] = "fn",
  [anon_sym_EQ] = "=",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_const] = "const",
  [anon_sym_let] = "let",
  [anon_sym_return] = "return",
  [sym__int] = "_int",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_string_content] = "string_content",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_nonfn_definition] = "nonfn_definition",
  [sym_function_body] = "function_body",
  [sym_return_stmt] = "return_stmt",
  [sym_val] = "val",
  [sym_string] = "string",
  [aux_sym__string_content] = "_string_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_return] = anon_sym_return,
  [sym__int] = sym__int,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_nonfn_definition] = sym_nonfn_definition,
  [sym_function_body] = sym_function_body,
  [sym_return_stmt] = sym_return_stmt,
  [sym_val] = sym_val,
  [sym_string] = sym_string,
  [aux_sym__string_content] = aux_sym__string_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym__int] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_nonfn_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_return_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_val] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '"', 33,
        '\'', 34,
        '(', 27,
        ')', 28,
        '-', 18,
        '=', 22,
        'c', 11,
        'f', 8,
        'l', 6,
        'r', 7,
        '{', 24,
        '}', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
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
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym__int] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym__definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym_nonfn_definition] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_const] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(9), 10,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_let,
      anon_sym_return,
      sym__int,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [13] = 1,
    ACTIONS(11), 10,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_let,
      anon_sym_return,
      sym__int,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [26] = 6,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_return,
    STATE(29), 1,
      sym_function_body,
    STATE(30), 1,
      sym_return_stmt,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(6), 4,
      sym__definition,
      sym_function_definition,
      sym_nonfn_definition,
      aux_sym_source_file_repeat1,
  [49] = 1,
    ACTIONS(15), 10,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_const,
      anon_sym_let,
      anon_sym_return,
      sym__int,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [62] = 5,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(13), 1,
      anon_sym_return,
    STATE(34), 1,
      sym_return_stmt,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(7), 4,
      sym__definition,
      sym_function_definition,
      sym_nonfn_definition,
      aux_sym_source_file_repeat1,
  [82] = 4,
    ACTIONS(19), 1,
      anon_sym_fn,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      anon_sym_return,
    ACTIONS(22), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(7), 4,
      sym__definition,
      sym_function_definition,
      sym_nonfn_definition,
      aux_sym_source_file_repeat1,
  [100] = 4,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_const,
      anon_sym_let,
    STATE(7), 4,
      sym__definition,
      sym_function_definition,
      sym_nonfn_definition,
      aux_sym_source_file_repeat1,
  [117] = 6,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 1,
      sym__int,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_string,
    STATE(9), 2,
      sym_val,
      aux_sym_parameter_list_repeat1,
  [137] = 6,
    ACTIONS(38), 1,
      anon_sym_RPAREN,
    ACTIONS(40), 1,
      sym__int,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_string,
    STATE(11), 2,
      sym_val,
      aux_sym_parameter_list_repeat1,
  [157] = 6,
    ACTIONS(40), 1,
      sym__int,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    STATE(2), 1,
      sym_string,
    STATE(9), 2,
      sym_val,
      aux_sym_parameter_list_repeat1,
  [177] = 5,
    ACTIONS(40), 1,
      sym__int,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_string,
    STATE(32), 1,
      sym_val,
  [193] = 1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_let,
      anon_sym_return,
  [201] = 1,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_const,
      anon_sym_let,
      anon_sym_return,
  [209] = 5,
    ACTIONS(40), 1,
      sym__int,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_SQUOTE,
    STATE(2), 1,
      sym_string,
    STATE(13), 1,
      sym_val,
  [225] = 3,
    ACTIONS(54), 1,
      sym_string_content,
    STATE(16), 1,
      aux_sym__string_content,
    ACTIONS(52), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [236] = 3,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      sym_string_content,
    STATE(16), 1,
      aux_sym__string_content,
  [246] = 3,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      sym_string_content,
    STATE(17), 1,
      aux_sym__string_content,
  [256] = 3,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      sym_string_content,
    STATE(20), 1,
      aux_sym__string_content,
  [266] = 3,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(59), 1,
      sym_string_content,
    STATE(16), 1,
      aux_sym__string_content,
  [276] = 2,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_parameter_list,
  [283] = 1,
    ACTIONS(69), 1,
      anon_sym_EQ_GT,
  [287] = 1,
    ACTIONS(71), 1,
      sym_identifier,
  [291] = 1,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
  [295] = 1,
    ACTIONS(75), 1,
      anon_sym_EQ,
  [299] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [303] = 1,
    ACTIONS(79), 1,
      anon_sym_EQ_GT,
  [307] = 1,
    ACTIONS(81), 1,
      anon_sym_EQ_GT,
  [311] = 1,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
  [315] = 1,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
  [319] = 1,
    ACTIONS(87), 1,
      sym_identifier,
  [323] = 1,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
  [327] = 1,
    ACTIONS(91), 1,
      anon_sym_EQ,
  [331] = 1,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 117,
  [SMALL_STATE(10)] = 137,
  [SMALL_STATE(11)] = 157,
  [SMALL_STATE(12)] = 177,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 201,
  [SMALL_STATE(15)] = 209,
  [SMALL_STATE(16)] = 225,
  [SMALL_STATE(17)] = 236,
  [SMALL_STATE(18)] = 246,
  [SMALL_STATE(19)] = 256,
  [SMALL_STATE(20)] = 266,
  [SMALL_STATE(21)] = 276,
  [SMALL_STATE(22)] = 283,
  [SMALL_STATE(23)] = 287,
  [SMALL_STATE(24)] = 291,
  [SMALL_STATE(25)] = 295,
  [SMALL_STATE(26)] = 299,
  [SMALL_STATE(27)] = 303,
  [SMALL_STATE(28)] = 307,
  [SMALL_STATE(29)] = 311,
  [SMALL_STATE(30)] = 315,
  [SMALL_STATE(31)] = 319,
  [SMALL_STATE(32)] = 323,
  [SMALL_STATE(33)] = 327,
  [SMALL_STATE(34)] = 331,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nonfn_definition, 4, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(16),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_body, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_kcl(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
