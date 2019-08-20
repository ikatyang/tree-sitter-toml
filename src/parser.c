#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 178
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_comment = 1,
  sym__newline = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LBRACK_LBRACK = 5,
  anon_sym_RBRACK_RBRACK = 6,
  anon_sym_EQ = 7,
  anon_sym_DOT = 8,
  sym__bare_key = 9,
  anon_sym_DQUOTE = 10,
  aux_sym__basic_string_token1 = 11,
  anon_sym_DQUOTE2 = 12,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 13,
  aux_sym__multiline_basic_string_token1 = 14,
  aux_sym__multiline_basic_string_token2 = 15,
  anon_sym_DQUOTE_DQUOTE_DQUOTE2 = 16,
  sym_escape_sequence = 17,
  sym__escape_line_ending = 18,
  anon_sym_SQUOTE = 19,
  aux_sym__literal_string_token1 = 20,
  anon_sym_SQUOTE2 = 21,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 22,
  aux_sym__multiline_literal_string_token1 = 23,
  anon_sym_SQUOTE_SQUOTE_SQUOTE2 = 24,
  aux_sym_integer_token1 = 25,
  aux_sym_integer_token2 = 26,
  aux_sym_integer_token3 = 27,
  aux_sym_integer_token4 = 28,
  aux_sym_float_token1 = 29,
  aux_sym_float_token2 = 30,
  aux_sym_float_token3 = 31,
  sym_boolean = 32,
  aux_sym_offset_date_time_token1 = 33,
  aux_sym_offset_date_time_token2 = 34,
  aux_sym_offset_date_time_token3 = 35,
  aux_sym_offset_date_time_token4 = 36,
  sym_local_time = 37,
  anon_sym_COMMA = 38,
  anon_sym_LBRACE = 39,
  anon_sym_RBRACE = 40,
  sym__eof = 41,
  sym_root = 42,
  sym__newline_or_eof = 43,
  sym_table = 44,
  sym_table_array = 45,
  sym_pair = 46,
  sym__inline_pair = 47,
  sym__block_pair = 48,
  sym_key = 49,
  sym_dotted_key = 50,
  sym__quoted_key = 51,
  sym__inline_value = 52,
  sym_string = 53,
  sym__basic_string = 54,
  sym__multiline_basic_string = 55,
  sym__literal_string = 56,
  sym__multiline_literal_string = 57,
  sym_integer = 58,
  sym_float = 59,
  sym_offset_date_time = 60,
  sym_local_date_time = 61,
  sym_local_date = 62,
  sym_array = 63,
  sym_inline_table = 64,
  aux_sym_root_repeat1 = 65,
  aux_sym_root_repeat2 = 66,
  aux_sym_root_repeat3 = 67,
  aux_sym__basic_string_repeat1 = 68,
  aux_sym__multiline_basic_string_repeat1 = 69,
  aux_sym__multiline_literal_string_repeat1 = 70,
  aux_sym_array_repeat1 = 71,
  aux_sym_inline_table_repeat1 = 72,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym__newline] = "_newline",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [sym__bare_key] = "_bare_key",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__basic_string_token1] = "_basic_string_token1",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym__multiline_basic_string_token1] = "_multiline_basic_string_token1",
  [aux_sym__multiline_basic_string_token2] = "_multiline_basic_string_token2",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = "\"\"\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym__escape_line_ending] = "escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__literal_string_token1] = "_literal_string_token1",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym__multiline_literal_string_token1] = "_multiline_literal_string_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = "'''",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [sym_boolean] = "boolean",
  [aux_sym_offset_date_time_token1] = "offset_date_time_token1",
  [aux_sym_offset_date_time_token2] = "offset_date_time_token2",
  [aux_sym_offset_date_time_token3] = "offset_date_time_token3",
  [aux_sym_offset_date_time_token4] = "offset_date_time_token4",
  [sym_local_time] = "local_time",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym__eof] = "_eof",
  [sym_root] = "root",
  [sym__newline_or_eof] = "_newline_or_eof",
  [sym_table] = "table",
  [sym_table_array] = "table_array",
  [sym_pair] = "pair",
  [sym__inline_pair] = "_inline_pair",
  [sym__block_pair] = "_block_pair",
  [sym_key] = "key",
  [sym_dotted_key] = "dotted_key",
  [sym__quoted_key] = "_quoted_key",
  [sym__inline_value] = "_inline_value",
  [sym_string] = "string",
  [sym__basic_string] = "_basic_string",
  [sym__multiline_basic_string] = "_multiline_basic_string",
  [sym__literal_string] = "_literal_string",
  [sym__multiline_literal_string] = "_multiline_literal_string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_offset_date_time] = "offset_date_time",
  [sym_local_date_time] = "local_date_time",
  [sym_local_date] = "local_date",
  [sym_array] = "array",
  [sym_inline_table] = "inline_table",
  [aux_sym_root_repeat1] = "root_repeat1",
  [aux_sym_root_repeat2] = "root_repeat2",
  [aux_sym_root_repeat3] = "root_repeat3",
  [aux_sym__basic_string_repeat1] = "_basic_string_repeat1",
  [aux_sym__multiline_basic_string_repeat1] = "_multiline_basic_string_repeat1",
  [aux_sym__multiline_literal_string_repeat1] = "_multiline_literal_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_inline_table_repeat1] = "inline_table_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__bare_key] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_basic_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_basic_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_line_ending] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_literal_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_offset_date_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_offset_date_time_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_offset_date_time_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_offset_date_time_token4] = {
    .visible = false,
    .named = false,
  },
  [sym_local_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym__newline_or_eof] = {
    .visible = false,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_array] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_pair] = {
    .visible = false,
    .named = true,
  },
  [sym__block_pair] = {
    .visible = false,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_key] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_key] = {
    .visible = false,
    .named = true,
  },
  [sym__inline_value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__basic_string] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_basic_string] = {
    .visible = false,
    .named = true,
  },
  [sym__literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_literal_string] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date_time] = {
    .visible = true,
    .named = true,
  },
  [sym_local_date] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_root_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_root_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_root_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_basic_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiline_literal_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_table_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [1] = sym_pair,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(82);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(147);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == '2') ADVANCE(97);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(192);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(82);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == '1') ADVANCE(101);
      if (lookahead == '2') ADVANCE(98);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(82);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(38);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(82);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '"') ADVANCE(141);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '[') ADVANCE(86);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 4:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(150);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(145);
      END_STATE();
    case 5:
      if (lookahead == '\t') SKIP(16)
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(145);
      END_STATE();
    case 6:
      if (lookahead == '\t') SKIP(14)
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == ' ') ADVANCE(188);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(151);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(164);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(154);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\r') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '"') ADVANCE(142);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(156);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == '0') ADVANCE(171);
      if (lookahead == '1') ADVANCE(169);
      if (lookahead == '2') ADVANCE(168);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(196);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(23);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == '2') ADVANCE(53);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(191);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == ',') ADVANCE(195);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(148);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '') ADVANCE(159);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(162);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == '1') ADVANCE(174);
      if (lookahead == '2') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(40);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 23:
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(40);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 24:
      if (lookahead == '0') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 25:
      if (lookahead == '0') ADVANCE(181);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 26:
      if (lookahead == '0') ADVANCE(189);
      END_STATE();
    case 27:
      if (lookahead == '0') ADVANCE(193);
      END_STATE();
    case 28:
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == '1') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == '0') ADVANCE(59);
      if (lookahead == '3') ADVANCE(50);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == '2') ADVANCE(52);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == '6') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == '6') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(54);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'U') ADVANCE(81);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(153);
      END_STATE();
    case 38:
      if (lookahead == ']') ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 49:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(179);
      END_STATE();
    case 50:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(187);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(21);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(35);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(33);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(70);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(62);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(71);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(178);
      END_STATE();
    case 58:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 59:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '\r') ADVANCE(11);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '0') ADVANCE(184);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == ':') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == ':') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(93);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(95);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == 'b') ADVANCE(130);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'x') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(120);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(137);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == '2') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(120);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(184);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(134);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '3') ADVANCE(129);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(135);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(130);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(113);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(111);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 's') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'u') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(140);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(113);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(105);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead == '#') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '') ADVANCE(145);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if ((0 <= lookahead && lookahead <= '\t') ||
          ('' <= lookahead && lookahead <= '') ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == '') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(15);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token2);
      if (lookahead == '\n') ADVANCE(151);
      if (lookahead == '\r') ADVANCE(7);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE2);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(18);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '') ADVANCE(159);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if ((0 <= lookahead && lookahead <= '') ||
          ('' <= lookahead && lookahead <= '') ||
          lookahead == '\'' ||
          lookahead == '') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || '' < lookahead) &&
          (lookahead < '\n' || '' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(18);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE2);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(56);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(167);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(172);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_float_token3);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token3);
      if (lookahead == '.') ADVANCE(65);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token4);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_offset_date_time_token4);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(66);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_local_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2, .external_lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 2, .external_lex_state = 1},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 2, .external_lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2, .external_lex_state = 1},
  [35] = {.lex_state = 2, .external_lex_state = 1},
  [36] = {.lex_state = 6, .external_lex_state = 1},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 13, .external_lex_state = 1},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 2, .external_lex_state = 1},
  [43] = {.lex_state = 2, .external_lex_state = 1},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 2, .external_lex_state = 1},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 2, .external_lex_state = 1},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 2, .external_lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 13, .external_lex_state = 1},
  [56] = {.lex_state = 2, .external_lex_state = 1},
  [57] = {.lex_state = 2, .external_lex_state = 1},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 13, .external_lex_state = 1},
  [65] = {.lex_state = 2, .external_lex_state = 1},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 2, .external_lex_state = 1},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2, .external_lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 2, .external_lex_state = 1},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 2, .external_lex_state = 1},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 13},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2, .external_lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2, .external_lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2, .external_lex_state = 1},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 12},
  [87] = {.lex_state = 12},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 13},
  [92] = {.lex_state = 2, .external_lex_state = 1},
  [93] = {.lex_state = 13},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 12},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 2, .external_lex_state = 1},
  [100] = {.lex_state = 12},
  [101] = {.lex_state = 12},
  [102] = {.lex_state = 12},
  [103] = {.lex_state = 2, .external_lex_state = 1},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 2, .external_lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 2, .external_lex_state = 1},
  [108] = {.lex_state = 2, .external_lex_state = 1},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 2, .external_lex_state = 1},
  [112] = {.lex_state = 2, .external_lex_state = 1},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 13},
  [117] = {.lex_state = 13},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 13},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 13},
  [123] = {.lex_state = 13},
  [124] = {.lex_state = 13},
  [125] = {.lex_state = 13},
  [126] = {.lex_state = 13},
  [127] = {.lex_state = 13},
  [128] = {.lex_state = 13},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 17},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 13},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 12},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 13},
  [167] = {.lex_state = 12},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 12},
  [171] = {.lex_state = 12},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 17},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 0},
};

enum {
  ts_external_token__eof = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
    [aux_sym_offset_date_time_token4] = ACTIONS(1),
    [aux_sym_offset_date_time_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__bare_key] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [aux_sym_offset_date_time_token3] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_local_time] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym__literal_string] = STATE(4),
    [sym_table_array] = STATE(9),
    [sym_pair] = STATE(8),
    [aux_sym_root_repeat3] = STATE(9),
    [sym__quoted_key] = STATE(4),
    [aux_sym_root_repeat1] = STATE(13),
    [sym_root] = STATE(10),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(7),
    [sym__basic_string] = STATE(4),
    [sym_table] = STATE(9),
    [sym_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(7),
    [sym_dotted_key] = STATE(12),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(11),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [2] = {
    [sym__literal_string] = STATE(4),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(14),
    [sym_dotted_key] = STATE(14),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [3] = {
    [aux_sym__basic_string_repeat1] = STATE(16),
    [anon_sym_DQUOTE2] = ACTIONS(19),
    [sym_escape_sequence] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(25),
  },
  [4] = {
    [anon_sym_EQ] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(27),
  },
  [5] = {
    [sym__literal_string] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__quoted_key] = STATE(106),
    [sym_key] = STATE(17),
    [sym_dotted_key] = STATE(17),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym__bare_key] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [6] = {
    [anon_sym_SQUOTE2] = ACTIONS(35),
    [aux_sym__literal_string_token1] = ACTIONS(37),
    [sym_comment] = ACTIONS(23),
  },
  [7] = {
    [sym__literal_string] = STATE(4),
    [sym_table_array] = STATE(20),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [aux_sym_root_repeat3] = STATE(20),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(21),
    [sym__basic_string] = STATE(4),
    [sym_table] = STATE(20),
    [sym_key] = STATE(12),
    [sym_dotted_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(21),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [8] = {
    [aux_sym_root_repeat1] = STATE(22),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(43),
    [sym__bare_key] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(41),
  },
  [9] = {
    [sym_table] = STATE(23),
    [sym_table_array] = STATE(23),
    [aux_sym_root_repeat3] = STATE(23),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [10] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(47),
  },
  [11] = {
    [sym__newline_or_eof] = STATE(24),
    [sym__eof] = ACTIONS(49),
    [sym__newline] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(51),
    [anon_sym_DOT] = ACTIONS(53),
  },
  [13] = {
    [sym__literal_string] = STATE(4),
    [sym_table_array] = STATE(20),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [aux_sym_root_repeat3] = STATE(20),
    [aux_sym_root_repeat1] = STATE(28),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(27),
    [sym__basic_string] = STATE(4),
    [sym_table] = STATE(20),
    [sym_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(27),
    [sym_dotted_key] = STATE(12),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(55),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [14] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(53),
  },
  [15] = {
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_EQ] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(59),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
  },
  [16] = {
    [aux_sym__basic_string_repeat1] = STATE(31),
    [anon_sym_DQUOTE2] = ACTIONS(61),
    [sym_escape_sequence] = ACTIONS(63),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(65),
  },
  [17] = {
    [anon_sym_DOT] = ACTIONS(67),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(69),
  },
  [18] = {
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
  },
  [19] = {
    [anon_sym_SQUOTE2] = ACTIONS(73),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_table] = STATE(23),
    [sym_table_array] = STATE(23),
    [aux_sym_root_repeat3] = STATE(23),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [21] = {
    [sym__literal_string] = STATE(4),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(21),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(12),
    [sym_dotted_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(21),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym__bare_key] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_SQUOTE] = ACTIONS(87),
  },
  [22] = {
    [aux_sym_root_repeat1] = STATE(28),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(55),
    [sym__bare_key] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(90),
  },
  [23] = {
    [sym_table] = STATE(23),
    [sym_table_array] = STATE(23),
    [aux_sym_root_repeat3] = STATE(23),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(94),
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(99),
  },
  [24] = {
    [anon_sym_LBRACK_LBRACK] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(102),
    [sym__bare_key] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(102),
  },
  [25] = {
    [sym__literal_string] = STATE(42),
    [sym_local_date_time] = STATE(43),
    [sym_local_date] = STATE(43),
    [sym__inline_value] = STATE(43),
    [sym__multiline_literal_string] = STATE(42),
    [sym_integer] = STATE(43),
    [sym_array] = STATE(43),
    [sym_inline_table] = STATE(43),
    [sym_string] = STATE(43),
    [sym__basic_string] = STATE(42),
    [sym_float] = STATE(43),
    [sym_offset_date_time] = STATE(43),
    [sym__multiline_basic_string] = STATE(42),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [aux_sym_offset_date_time_token1] = ACTIONS(108),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(110),
    [sym_boolean] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(114),
    [sym_local_time] = ACTIONS(112),
    [aux_sym_integer_token2] = ACTIONS(110),
    [aux_sym_float_token3] = ACTIONS(116),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(118),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [aux_sym_integer_token4] = ACTIONS(110),
    [aux_sym_integer_token1] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(126),
  },
  [26] = {
    [sym__literal_string] = STATE(4),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(44),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [27] = {
    [sym__literal_string] = STATE(4),
    [sym_table_array] = STATE(45),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [aux_sym_root_repeat3] = STATE(45),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(21),
    [sym__basic_string] = STATE(4),
    [sym_table] = STATE(45),
    [sym_key] = STATE(12),
    [sym_dotted_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(21),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [28] = {
    [aux_sym_root_repeat1] = STATE(28),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(128),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_RBRACK] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(128),
    [sym__newline] = ACTIONS(130),
    [sym__bare_key] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(128),
  },
  [29] = {
    [sym__newline_or_eof] = STATE(46),
    [sym__eof] = ACTIONS(135),
    [sym__newline] = ACTIONS(135),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_EQ] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(137),
  },
  [31] = {
    [aux_sym__basic_string_repeat1] = STATE(31),
    [anon_sym_DQUOTE2] = ACTIONS(139),
    [sym_escape_sequence] = ACTIONS(141),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(144),
  },
  [32] = {
    [sym__newline_or_eof] = STATE(47),
    [sym__eof] = ACTIONS(147),
    [sym__newline] = ACTIONS(147),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_EQ] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(149),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
  },
  [34] = {
    [sym__eof] = ACTIONS(151),
    [sym__newline] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [sym__eof] = ACTIONS(153),
    [sym__newline] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym__eof] = ACTIONS(155),
    [sym__newline] = ACTIONS(157),
    [aux_sym_offset_date_time_token2] = ACTIONS(159),
    [sym_comment] = ACTIONS(23),
  },
  [37] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(50),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(161),
    [aux_sym__literal_string_token1] = ACTIONS(161),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(163),
    [sym_comment] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(165),
  },
  [38] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(52),
    [sym_comment] = ACTIONS(23),
    [sym__escape_line_ending] = ACTIONS(167),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(167),
    [sym_escape_sequence] = ACTIONS(167),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(169),
    [aux_sym__basic_string_token1] = ACTIONS(169),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(171),
  },
  [39] = {
    [sym__literal_string] = STATE(4),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(177),
    [sym_dotted_key] = STATE(177),
    [sym__inline_pair] = STATE(54),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(173),
  },
  [40] = {
    [sym__eof] = ACTIONS(151),
    [sym__newline] = ACTIONS(151),
    [aux_sym_float_token1] = ACTIONS(175),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_token2] = ACTIONS(177),
  },
  [41] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(58),
    [sym_local_date] = STATE(58),
    [sym__inline_value] = STATE(58),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(58),
    [sym_array] = STATE(58),
    [sym_inline_table] = STATE(58),
    [sym_string] = STATE(58),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(58),
    [sym_offset_date_time] = STATE(58),
    [aux_sym_root_repeat1] = STATE(59),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(181),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(187),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(187),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(197),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [42] = {
    [sym__eof] = ACTIONS(205),
    [sym__newline] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [sym__eof] = ACTIONS(207),
    [sym__newline] = ACTIONS(207),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_EQ] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK_RBRACK] = ACTIONS(209),
    [anon_sym_DOT] = ACTIONS(209),
  },
  [45] = {
    [sym_table] = STATE(23),
    [sym_table_array] = STATE(23),
    [aux_sym_root_repeat3] = STATE(23),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(5),
    [ts_builtin_sym_end] = ACTIONS(211),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(15),
  },
  [46] = {
    [sym__literal_string] = STATE(4),
    [aux_sym_root_repeat1] = STATE(61),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(60),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(60),
    [sym_dotted_key] = STATE(12),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(213),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(213),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(215),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [47] = {
    [sym__literal_string] = STATE(4),
    [aux_sym_root_repeat1] = STATE(63),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(62),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(62),
    [sym_dotted_key] = STATE(12),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(219),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(221),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [48] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_offset_date_time_token3] = ACTIONS(225),
  },
  [49] = {
    [sym__eof] = ACTIONS(227),
    [sym__newline] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(66),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(229),
    [aux_sym__literal_string_token1] = ACTIONS(229),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(231),
    [sym_comment] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(233),
  },
  [51] = {
    [sym__eof] = ACTIONS(235),
    [sym__newline] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(68),
    [sym_comment] = ACTIONS(23),
    [sym__escape_line_ending] = ACTIONS(237),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(237),
    [sym_escape_sequence] = ACTIONS(237),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(239),
    [aux_sym__basic_string_token1] = ACTIONS(239),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(241),
  },
  [53] = {
    [sym__eof] = ACTIONS(243),
    [sym__newline] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [aux_sym_inline_table_repeat1] = STATE(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(247),
  },
  [55] = {
    [sym__eof] = ACTIONS(249),
    [sym__newline] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_token2] = ACTIONS(251),
  },
  [56] = {
    [sym__eof] = ACTIONS(249),
    [sym__newline] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [sym__eof] = ACTIONS(253),
    [sym__newline] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [aux_sym_root_repeat1] = STATE(75),
    [aux_sym_array_repeat1] = STATE(76),
    [sym__newline] = ACTIONS(255),
    [anon_sym_RBRACK] = ACTIONS(257),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(259),
  },
  [59] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(77),
    [sym_local_date] = STATE(77),
    [sym__inline_value] = STATE(77),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(77),
    [sym_array] = STATE(77),
    [sym_inline_table] = STATE(77),
    [sym_string] = STATE(77),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(77),
    [sym_offset_date_time] = STATE(77),
    [aux_sym_root_repeat1] = STATE(110),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(257),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(261),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [60] = {
    [sym__literal_string] = STATE(4),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(21),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(12),
    [sym_dotted_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(21),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [61] = {
    [sym__literal_string] = STATE(4),
    [aux_sym_root_repeat1] = STATE(28),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(78),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(78),
    [sym_dotted_key] = STATE(12),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(265),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(55),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(267),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [62] = {
    [sym__literal_string] = STATE(4),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(21),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(12),
    [sym_dotted_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(21),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [63] = {
    [sym__literal_string] = STATE(4),
    [aux_sym_root_repeat1] = STATE(28),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(79),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(79),
    [sym_dotted_key] = STATE(12),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(269),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(269),
    [sym_comment] = ACTIONS(3),
    [sym__newline] = ACTIONS(55),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(271),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [64] = {
    [sym__eof] = ACTIONS(273),
    [sym__newline] = ACTIONS(273),
    [aux_sym_offset_date_time_token4] = ACTIONS(275),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [sym__eof] = ACTIONS(277),
    [sym__newline] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(66),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(279),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(282),
    [aux_sym__literal_string_token1] = ACTIONS(279),
    [sym_comment] = ACTIONS(23),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(285),
  },
  [67] = {
    [sym__eof] = ACTIONS(287),
    [sym__newline] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(68),
    [sym_comment] = ACTIONS(23),
    [sym__escape_line_ending] = ACTIONS(289),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(289),
    [sym_escape_sequence] = ACTIONS(289),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(292),
    [aux_sym__basic_string_token1] = ACTIONS(292),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(295),
  },
  [69] = {
    [sym__literal_string] = STATE(4),
    [sym__basic_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym_key] = STATE(177),
    [sym_dotted_key] = STATE(177),
    [sym__inline_pair] = STATE(81),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [70] = {
    [sym__eof] = ACTIONS(297),
    [sym__newline] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [aux_sym_inline_table_repeat1] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(299),
  },
  [72] = {
    [sym__eof] = ACTIONS(301),
    [sym__newline] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(85),
    [sym_local_date] = STATE(85),
    [sym__inline_value] = STATE(85),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(85),
    [sym_array] = STATE(85),
    [sym_inline_table] = STATE(85),
    [sym_string] = STATE(85),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(85),
    [sym_offset_date_time] = STATE(85),
    [aux_sym_root_repeat1] = STATE(86),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(303),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [74] = {
    [sym__eof] = ACTIONS(309),
    [sym__newline] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [aux_sym_root_repeat1] = STATE(28),
    [aux_sym_array_repeat1] = STATE(88),
    [sym__newline] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(311),
  },
  [76] = {
    [aux_sym_array_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(303),
  },
  [77] = {
    [aux_sym_root_repeat1] = STATE(90),
    [aux_sym_array_repeat1] = STATE(88),
    [sym__newline] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(311),
  },
  [78] = {
    [sym__literal_string] = STATE(4),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(21),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(12),
    [sym_dotted_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(21),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(315),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(315),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [79] = {
    [sym__literal_string] = STATE(4),
    [sym_pair] = STATE(8),
    [sym__quoted_key] = STATE(4),
    [sym__inline_pair] = STATE(11),
    [sym__block_pair] = STATE(21),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(12),
    [sym_dotted_key] = STATE(12),
    [aux_sym_root_repeat2] = STATE(21),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(319),
    [sym__bare_key] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
  [80] = {
    [sym__eof] = ACTIONS(323),
    [sym__newline] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
  },
  [81] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
  },
  [82] = {
    [sym__eof] = ACTIONS(327),
    [sym__newline] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
  },
  [83] = {
    [aux_sym_inline_table_repeat1] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(332),
  },
  [84] = {
    [sym__eof] = ACTIONS(334),
    [sym__newline] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
  },
  [85] = {
    [aux_sym_root_repeat1] = STATE(91),
    [sym__newline] = ACTIONS(336),
    [anon_sym_RBRACK] = ACTIONS(338),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(338),
  },
  [86] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(93),
    [sym_local_date] = STATE(93),
    [sym__inline_value] = STATE(93),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(93),
    [sym_array] = STATE(93),
    [sym_inline_table] = STATE(93),
    [sym_string] = STATE(93),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(93),
    [sym_offset_date_time] = STATE(93),
    [aux_sym_root_repeat1] = STATE(110),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(340),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(342),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [87] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(85),
    [sym_local_date] = STATE(85),
    [sym__inline_value] = STATE(85),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(85),
    [sym_array] = STATE(85),
    [sym_inline_table] = STATE(85),
    [sym_string] = STATE(85),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(85),
    [sym_offset_date_time] = STATE(85),
    [aux_sym_root_repeat1] = STATE(94),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(340),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [88] = {
    [aux_sym_array_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(346),
    [anon_sym_RBRACK] = ACTIONS(340),
  },
  [89] = {
    [aux_sym_array_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(348),
    [anon_sym_RBRACK] = ACTIONS(338),
  },
  [90] = {
    [aux_sym_root_repeat1] = STATE(28),
    [aux_sym_array_repeat1] = STATE(97),
    [sym__newline] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(340),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(346),
  },
  [91] = {
    [aux_sym_root_repeat1] = STATE(28),
    [sym__newline] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(351),
  },
  [92] = {
    [sym__eof] = ACTIONS(353),
    [sym__newline] = ACTIONS(353),
    [sym_comment] = ACTIONS(3),
  },
  [93] = {
    [aux_sym_root_repeat1] = STATE(98),
    [sym__newline] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(351),
  },
  [94] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(93),
    [sym_local_date] = STATE(93),
    [sym__inline_value] = STATE(93),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(93),
    [sym_array] = STATE(93),
    [sym_inline_table] = STATE(93),
    [sym_string] = STATE(93),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(93),
    [sym_offset_date_time] = STATE(93),
    [aux_sym_root_repeat1] = STATE(110),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(357),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(342),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [95] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(85),
    [sym_local_date] = STATE(85),
    [sym__inline_value] = STATE(85),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(85),
    [sym_array] = STATE(85),
    [sym_inline_table] = STATE(85),
    [sym_string] = STATE(85),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(85),
    [sym_offset_date_time] = STATE(85),
    [aux_sym_root_repeat1] = STATE(100),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(357),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(359),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [96] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(85),
    [sym_local_date] = STATE(85),
    [sym__inline_value] = STATE(85),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(85),
    [sym_array] = STATE(85),
    [sym_inline_table] = STATE(85),
    [sym_string] = STATE(85),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(85),
    [sym_offset_date_time] = STATE(85),
    [aux_sym_root_repeat1] = STATE(101),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [97] = {
    [aux_sym_array_repeat1] = STATE(89),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(357),
  },
  [98] = {
    [aux_sym_root_repeat1] = STATE(28),
    [sym__newline] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(365),
  },
  [99] = {
    [sym__eof] = ACTIONS(367),
    [sym__newline] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
  },
  [100] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(93),
    [sym_local_date] = STATE(93),
    [sym__inline_value] = STATE(93),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(93),
    [sym_array] = STATE(93),
    [sym_inline_table] = STATE(93),
    [sym_string] = STATE(93),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(93),
    [sym_offset_date_time] = STATE(93),
    [aux_sym_root_repeat1] = STATE(110),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(369),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(342),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [101] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(93),
    [sym_local_date] = STATE(93),
    [sym__inline_value] = STATE(93),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(93),
    [sym_array] = STATE(93),
    [sym_inline_table] = STATE(93),
    [sym_string] = STATE(93),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(93),
    [sym_offset_date_time] = STATE(93),
    [aux_sym_root_repeat1] = STATE(110),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(342),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [102] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(85),
    [sym_local_date] = STATE(85),
    [sym__inline_value] = STATE(85),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(85),
    [sym_array] = STATE(85),
    [sym_inline_table] = STATE(85),
    [sym_string] = STATE(85),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(85),
    [sym_offset_date_time] = STATE(85),
    [aux_sym_root_repeat1] = STATE(104),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(369),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(371),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [103] = {
    [sym__eof] = ACTIONS(373),
    [sym__newline] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
  },
  [104] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(93),
    [sym_local_date] = STATE(93),
    [sym__inline_value] = STATE(93),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(93),
    [sym_array] = STATE(93),
    [sym_inline_table] = STATE(93),
    [sym_string] = STATE(93),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(93),
    [sym_offset_date_time] = STATE(93),
    [aux_sym_root_repeat1] = STATE(110),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(375),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(342),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [105] = {
    [sym__eof] = ACTIONS(377),
    [sym__newline] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
  },
  [106] = {
    [anon_sym_DOT] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(27),
  },
  [107] = {
    [sym__eof] = ACTIONS(59),
    [sym__newline] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
  },
  [108] = {
    [sym__eof] = ACTIONS(71),
    [sym__newline] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
  },
  [109] = {
    [sym__literal_string] = STATE(106),
    [sym__basic_string] = STATE(106),
    [sym__quoted_key] = STATE(106),
    [sym_key] = STATE(119),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [sym__bare_key] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(33),
  },
  [110] = {
    [aux_sym_root_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(128),
    [aux_sym_offset_date_time_token1] = ACTIONS(128),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(128),
    [sym_boolean] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(128),
    [sym_local_time] = ACTIONS(128),
    [aux_sym_integer_token2] = ACTIONS(128),
    [aux_sym_float_token3] = ACTIONS(128),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(128),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(128),
    [sym__newline] = ACTIONS(379),
    [anon_sym_LBRACE] = ACTIONS(128),
    [aux_sym_integer_token4] = ACTIONS(128),
    [aux_sym_integer_token1] = ACTIONS(133),
    [anon_sym_SQUOTE] = ACTIONS(133),
  },
  [111] = {
    [sym__eof] = ACTIONS(137),
    [sym__newline] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
  },
  [112] = {
    [sym__eof] = ACTIONS(149),
    [sym__newline] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
  },
  [113] = {
    [sym__newline] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
  },
  [114] = {
    [sym__newline] = ACTIONS(153),
    [anon_sym_RBRACK] = ACTIONS(153),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(153),
    [anon_sym_RBRACE] = ACTIONS(153),
  },
  [115] = {
    [sym__newline] = ACTIONS(157),
    [aux_sym_offset_date_time_token2] = ACTIONS(382),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_comment] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(157),
  },
  [116] = {
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(151),
    [aux_sym_float_token1] = ACTIONS(384),
    [sym__newline] = ACTIONS(151),
    [aux_sym_float_token2] = ACTIONS(386),
    [anon_sym_RBRACE] = ACTIONS(151),
  },
  [117] = {
    [sym__newline] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(205),
  },
  [118] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(207),
    [anon_sym_RBRACE] = ACTIONS(207),
  },
  [119] = {
    [anon_sym_DOT] = ACTIONS(209),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(209),
  },
  [120] = {
    [sym__newline] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
  },
  [121] = {
    [sym__newline] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_RBRACE] = ACTIONS(235),
  },
  [122] = {
    [sym__newline] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(243),
  },
  [123] = {
    [sym__newline] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(249),
    [aux_sym_float_token2] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(249),
  },
  [124] = {
    [sym__newline] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
  },
  [125] = {
    [sym__newline] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(253),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(253),
    [anon_sym_RBRACE] = ACTIONS(253),
  },
  [126] = {
    [sym__newline] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [aux_sym_offset_date_time_token4] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(273),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(273),
  },
  [127] = {
    [sym__newline] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(277),
    [anon_sym_RBRACE] = ACTIONS(277),
  },
  [128] = {
    [sym__newline] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(287),
    [anon_sym_RBRACE] = ACTIONS(287),
  },
  [129] = {
    [sym__newline] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
  },
  [130] = {
    [sym__newline] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RBRACE] = ACTIONS(301),
  },
  [131] = {
    [sym__newline] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(309),
    [anon_sym_RBRACE] = ACTIONS(309),
  },
  [132] = {
    [sym__newline] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
  },
  [133] = {
    [sym__newline] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
  },
  [134] = {
    [sym__newline] = ACTIONS(334),
    [anon_sym_RBRACK] = ACTIONS(334),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(334),
  },
  [135] = {
    [sym__newline] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(353),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(353),
  },
  [136] = {
    [sym__newline] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(367),
  },
  [137] = {
    [sym__newline] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(373),
    [anon_sym_RBRACE] = ACTIONS(373),
  },
  [138] = {
    [sym__newline] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(377),
  },
  [139] = {
    [sym__newline] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
  },
  [140] = {
    [sym__newline] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(71),
  },
  [141] = {
    [sym__newline] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_DOT] = ACTIONS(137),
  },
  [142] = {
    [sym__newline] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(149),
    [anon_sym_DOT] = ACTIONS(149),
  },
  [143] = {
    [aux_sym__basic_string_repeat1] = STATE(145),
    [anon_sym_DQUOTE2] = ACTIONS(392),
    [sym_escape_sequence] = ACTIONS(394),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(396),
  },
  [144] = {
    [anon_sym_SQUOTE2] = ACTIONS(398),
    [aux_sym__literal_string_token1] = ACTIONS(400),
    [sym_comment] = ACTIONS(23),
  },
  [145] = {
    [aux_sym__basic_string_repeat1] = STATE(31),
    [anon_sym_DQUOTE2] = ACTIONS(402),
    [sym_escape_sequence] = ACTIONS(63),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(65),
  },
  [146] = {
    [anon_sym_SQUOTE2] = ACTIONS(404),
    [sym_comment] = ACTIONS(3),
  },
  [147] = {
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(118),
    [sym_local_date] = STATE(118),
    [sym__inline_value] = STATE(118),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(118),
    [sym_array] = STATE(118),
    [sym_inline_table] = STATE(118),
    [sym_string] = STATE(118),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(118),
    [sym_offset_date_time] = STATE(118),
    [sym__multiline_basic_string] = STATE(117),
    [anon_sym_DQUOTE] = ACTIONS(406),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(408),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(410),
  },
  [148] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(153),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(412),
    [aux_sym__literal_string_token1] = ACTIONS(414),
    [sym_comment] = ACTIONS(23),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(414),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(416),
  },
  [149] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(154),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(418),
    [sym_comment] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(418),
    [aux_sym__basic_string_token1] = ACTIONS(420),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(422),
    [sym__escape_line_ending] = ACTIONS(418),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(420),
  },
  [150] = {
    [sym__literal_string] = STATE(4),
    [sym__quoted_key] = STATE(4),
    [sym__inline_pair] = STATE(155),
    [sym__basic_string] = STATE(4),
    [sym_key] = STATE(177),
    [sym_dotted_key] = STATE(177),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(424),
  },
  [151] = {
    [sym__inline_value] = STATE(156),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(156),
    [sym_array] = STATE(156),
    [sym_inline_table] = STATE(156),
    [sym__multiline_basic_string] = STATE(117),
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(156),
    [sym_local_date] = STATE(156),
    [sym_string] = STATE(156),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(156),
    [sym_offset_date_time] = STATE(156),
    [aux_sym_root_repeat1] = STATE(157),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(426),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(428),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [152] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_offset_date_time_token3] = ACTIONS(432),
  },
  [153] = {
    [aux_sym__multiline_literal_string_repeat1] = STATE(66),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(231),
    [aux_sym__literal_string_token1] = ACTIONS(229),
    [sym_comment] = ACTIONS(23),
    [aux_sym__multiline_literal_string_token1] = ACTIONS(229),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = ACTIONS(434),
  },
  [154] = {
    [aux_sym__multiline_basic_string_repeat1] = STATE(68),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(237),
    [sym_comment] = ACTIONS(23),
    [sym_escape_sequence] = ACTIONS(237),
    [aux_sym__basic_string_token1] = ACTIONS(239),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = ACTIONS(436),
    [sym__escape_line_ending] = ACTIONS(237),
    [aux_sym__multiline_basic_string_token1] = ACTIONS(239),
  },
  [155] = {
    [aux_sym_inline_table_repeat1] = STATE(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(438),
  },
  [156] = {
    [aux_sym_root_repeat1] = STATE(160),
    [aux_sym_array_repeat1] = STATE(161),
    [sym__newline] = ACTIONS(440),
    [anon_sym_RBRACK] = ACTIONS(442),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(444),
  },
  [157] = {
    [sym__inline_value] = STATE(162),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(162),
    [sym_array] = STATE(162),
    [sym_inline_table] = STATE(162),
    [sym__multiline_basic_string] = STATE(117),
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(162),
    [sym_local_date] = STATE(162),
    [sym_string] = STATE(162),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(162),
    [sym_offset_date_time] = STATE(162),
    [aux_sym_root_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(442),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(446),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(446),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [158] = {
    [aux_sym_inline_table_repeat1] = STATE(83),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(448),
  },
  [159] = {
    [sym__inline_value] = STATE(85),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(85),
    [sym_array] = STATE(85),
    [sym_inline_table] = STATE(85),
    [sym__multiline_basic_string] = STATE(117),
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(85),
    [sym_local_date] = STATE(85),
    [sym_string] = STATE(85),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(85),
    [sym_offset_date_time] = STATE(85),
    [aux_sym_root_repeat1] = STATE(163),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(450),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [160] = {
    [aux_sym_root_repeat1] = STATE(28),
    [aux_sym_array_repeat1] = STATE(165),
    [sym__newline] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(454),
  },
  [161] = {
    [aux_sym_array_repeat1] = STATE(89),
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(454),
  },
  [162] = {
    [aux_sym_root_repeat1] = STATE(166),
    [aux_sym_array_repeat1] = STATE(165),
    [sym__newline] = ACTIONS(456),
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(454),
  },
  [163] = {
    [sym__inline_value] = STATE(93),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(93),
    [sym_array] = STATE(93),
    [sym_inline_table] = STATE(93),
    [sym__multiline_basic_string] = STATE(117),
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(93),
    [sym_local_date] = STATE(93),
    [sym_string] = STATE(93),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(93),
    [sym_offset_date_time] = STATE(93),
    [aux_sym_root_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(458),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(342),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [164] = {
    [sym__inline_value] = STATE(85),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(85),
    [sym_array] = STATE(85),
    [sym_inline_table] = STATE(85),
    [sym__multiline_basic_string] = STATE(117),
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(85),
    [sym_local_date] = STATE(85),
    [sym_string] = STATE(85),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(85),
    [sym_offset_date_time] = STATE(85),
    [aux_sym_root_repeat1] = STATE(167),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(458),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(460),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [165] = {
    [aux_sym_array_repeat1] = STATE(89),
    [anon_sym_RBRACK] = ACTIONS(458),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(462),
  },
  [166] = {
    [aux_sym_root_repeat1] = STATE(28),
    [aux_sym_array_repeat1] = STATE(169),
    [sym__newline] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(458),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(462),
  },
  [167] = {
    [sym__inline_value] = STATE(93),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(93),
    [sym_array] = STATE(93),
    [sym_inline_table] = STATE(93),
    [sym__multiline_basic_string] = STATE(117),
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(93),
    [sym_local_date] = STATE(93),
    [sym_string] = STATE(93),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(93),
    [sym_offset_date_time] = STATE(93),
    [aux_sym_root_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(464),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(342),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [168] = {
    [sym__inline_value] = STATE(85),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(85),
    [sym_array] = STATE(85),
    [sym_inline_table] = STATE(85),
    [sym__multiline_basic_string] = STATE(117),
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(85),
    [sym_local_date] = STATE(85),
    [sym_string] = STATE(85),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(85),
    [sym_offset_date_time] = STATE(85),
    [aux_sym_root_repeat1] = STATE(170),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(464),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(466),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [169] = {
    [aux_sym_array_repeat1] = STATE(89),
    [anon_sym_RBRACK] = ACTIONS(464),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(468),
  },
  [170] = {
    [sym__inline_value] = STATE(93),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(93),
    [sym_array] = STATE(93),
    [sym_inline_table] = STATE(93),
    [sym__multiline_basic_string] = STATE(117),
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(93),
    [sym_local_date] = STATE(93),
    [sym_string] = STATE(93),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(93),
    [sym_offset_date_time] = STATE(93),
    [aux_sym_root_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(470),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(342),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [171] = {
    [sym__inline_value] = STATE(85),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(85),
    [sym_array] = STATE(85),
    [sym_inline_table] = STATE(85),
    [sym__multiline_basic_string] = STATE(117),
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(85),
    [sym_local_date] = STATE(85),
    [sym_string] = STATE(85),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(85),
    [sym_offset_date_time] = STATE(85),
    [aux_sym_root_repeat1] = STATE(172),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(470),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(305),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(472),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [172] = {
    [sym__inline_value] = STATE(93),
    [sym__multiline_literal_string] = STATE(117),
    [sym_integer] = STATE(93),
    [sym_array] = STATE(93),
    [sym_inline_table] = STATE(93),
    [sym__multiline_basic_string] = STATE(117),
    [sym__literal_string] = STATE(117),
    [sym_local_date_time] = STATE(93),
    [sym_local_date] = STATE(93),
    [sym_string] = STATE(93),
    [sym__basic_string] = STATE(117),
    [sym_float] = STATE(93),
    [sym_offset_date_time] = STATE(93),
    [aux_sym_root_repeat1] = STATE(110),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(474),
    [aux_sym_offset_date_time_token1] = ACTIONS(183),
    [sym_comment] = ACTIONS(3),
    [aux_sym_integer_token3] = ACTIONS(185),
    [sym_boolean] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(189),
    [sym_local_time] = ACTIONS(342),
    [aux_sym_integer_token2] = ACTIONS(185),
    [aux_sym_float_token3] = ACTIONS(191),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(193),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(195),
    [sym__newline] = ACTIONS(263),
    [anon_sym_LBRACE] = ACTIONS(199),
    [aux_sym_integer_token4] = ACTIONS(185),
    [aux_sym_integer_token1] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(203),
  },
  [173] = {
    [aux_sym__basic_string_repeat1] = STATE(175),
    [anon_sym_DQUOTE2] = ACTIONS(476),
    [sym_escape_sequence] = ACTIONS(478),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(480),
  },
  [174] = {
    [anon_sym_SQUOTE2] = ACTIONS(482),
    [sym_comment] = ACTIONS(23),
    [aux_sym__literal_string_token1] = ACTIONS(484),
  },
  [175] = {
    [aux_sym__basic_string_repeat1] = STATE(31),
    [anon_sym_DQUOTE2] = ACTIONS(486),
    [sym_escape_sequence] = ACTIONS(63),
    [sym_comment] = ACTIONS(23),
    [aux_sym__basic_string_token1] = ACTIONS(65),
  },
  [176] = {
    [anon_sym_SQUOTE2] = ACTIONS(488),
    [sym_comment] = ACTIONS(3),
  },
  [177] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(490),
    [anon_sym_DOT] = ACTIONS(53),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, REDUCE(sym_root, 0),
  [11] = {.count = 1, .reusable = true}, SHIFT(13),
  [13] = {.count = 1, .reusable = true}, SHIFT(4),
  [15] = {.count = 1, .reusable = false}, SHIFT(5),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(15),
  [21] = {.count = 1, .reusable = true}, SHIFT(16),
  [23] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [25] = {.count = 1, .reusable = false}, SHIFT(16),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_key, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(143),
  [31] = {.count = 1, .reusable = true}, SHIFT(106),
  [33] = {.count = 1, .reusable = true}, SHIFT(144),
  [35] = {.count = 1, .reusable = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = false}, SHIFT(19),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_root, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym__block_pair, 1),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym__block_pair, 1),
  [47] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [49] = {.count = 1, .reusable = true}, SHIFT(24),
  [51] = {.count = 1, .reusable = true}, SHIFT(25),
  [53] = {.count = 1, .reusable = true}, SHIFT(26),
  [55] = {.count = 1, .reusable = true}, SHIFT(28),
  [57] = {.count = 1, .reusable = true}, SHIFT(29),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 2),
  [61] = {.count = 1, .reusable = true}, SHIFT(30),
  [63] = {.count = 1, .reusable = true}, SHIFT(31),
  [65] = {.count = 1, .reusable = false}, SHIFT(31),
  [67] = {.count = 1, .reusable = true}, SHIFT(109),
  [69] = {.count = 1, .reusable = true}, SHIFT(32),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 2),
  [73] = {.count = 1, .reusable = true}, SHIFT(33),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_root, 2),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_root_repeat2, 2),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat2, 2), SHIFT_REPEAT(3),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat2, 2), SHIFT_REPEAT(4),
  [85] = {.count = 1, .reusable = false}, REDUCE(aux_sym_root_repeat2, 2),
  [87] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat2, 2), SHIFT_REPEAT(6),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym__block_pair, 2),
  [92] = {.count = 1, .reusable = false}, REDUCE(sym__block_pair, 2),
  [94] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat3, 2), SHIFT_REPEAT(2),
  [97] = {.count = 1, .reusable = true}, REDUCE(aux_sym_root_repeat3, 2),
  [99] = {.count = 2, .reusable = false}, REDUCE(aux_sym_root_repeat3, 2), SHIFT_REPEAT(5),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_pair, 2),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_pair, 2),
  [106] = {.count = 1, .reusable = false}, SHIFT(173),
  [108] = {.count = 1, .reusable = true}, SHIFT(36),
  [110] = {.count = 1, .reusable = true}, SHIFT(34),
  [112] = {.count = 1, .reusable = true}, SHIFT(43),
  [114] = {.count = 1, .reusable = true}, SHIFT(41),
  [116] = {.count = 1, .reusable = true}, SHIFT(35),
  [118] = {.count = 1, .reusable = true}, SHIFT(37),
  [120] = {.count = 1, .reusable = true}, SHIFT(38),
  [122] = {.count = 1, .reusable = true}, SHIFT(39),
  [124] = {.count = 1, .reusable = false}, SHIFT(40),
  [126] = {.count = 1, .reusable = false}, SHIFT(174),
  [128] = {.count = 1, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(28),
  [133] = {.count = 1, .reusable = false}, REDUCE(aux_sym_root_repeat1, 2),
  [135] = {.count = 1, .reusable = true}, SHIFT(46),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym__basic_string, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(31),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(31),
  [147] = {.count = 1, .reusable = true}, SHIFT(47),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym__literal_string, 3),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_integer, 1),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_float, 1),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_local_date, 1),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_local_date, 1),
  [159] = {.count = 1, .reusable = true}, SHIFT(48),
  [161] = {.count = 1, .reusable = false}, SHIFT(50),
  [163] = {.count = 1, .reusable = true}, SHIFT(50),
  [165] = {.count = 1, .reusable = true}, SHIFT(49),
  [167] = {.count = 1, .reusable = true}, SHIFT(52),
  [169] = {.count = 1, .reusable = false}, SHIFT(52),
  [171] = {.count = 1, .reusable = true}, SHIFT(51),
  [173] = {.count = 1, .reusable = true}, SHIFT(53),
  [175] = {.count = 1, .reusable = true}, SHIFT(55),
  [177] = {.count = 1, .reusable = true}, SHIFT(56),
  [179] = {.count = 1, .reusable = false}, SHIFT(143),
  [181] = {.count = 1, .reusable = true}, SHIFT(57),
  [183] = {.count = 1, .reusable = true}, SHIFT(115),
  [185] = {.count = 1, .reusable = true}, SHIFT(113),
  [187] = {.count = 1, .reusable = true}, SHIFT(58),
  [189] = {.count = 1, .reusable = true}, SHIFT(151),
  [191] = {.count = 1, .reusable = true}, SHIFT(114),
  [193] = {.count = 1, .reusable = true}, SHIFT(148),
  [195] = {.count = 1, .reusable = true}, SHIFT(149),
  [197] = {.count = 1, .reusable = true}, SHIFT(59),
  [199] = {.count = 1, .reusable = true}, SHIFT(150),
  [201] = {.count = 1, .reusable = false}, SHIFT(116),
  [203] = {.count = 1, .reusable = false}, SHIFT(144),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_string, 1),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym__inline_pair, 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_dotted_key, 3),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_root, 3),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 4),
  [215] = {.count = 1, .reusable = true}, SHIFT(61),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 4),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_table, 4),
  [221] = {.count = 1, .reusable = true}, SHIFT(63),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_table, 4),
  [225] = {.count = 1, .reusable = true}, SHIFT(64),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 2),
  [229] = {.count = 1, .reusable = false}, SHIFT(66),
  [231] = {.count = 1, .reusable = true}, SHIFT(66),
  [233] = {.count = 1, .reusable = true}, SHIFT(65),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 2),
  [237] = {.count = 1, .reusable = true}, SHIFT(68),
  [239] = {.count = 1, .reusable = false}, SHIFT(68),
  [241] = {.count = 1, .reusable = true}, SHIFT(67),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 2),
  [245] = {.count = 1, .reusable = true}, SHIFT(69),
  [247] = {.count = 1, .reusable = true}, SHIFT(70),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_float, 2),
  [251] = {.count = 1, .reusable = true}, SHIFT(72),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_array, 2),
  [255] = {.count = 1, .reusable = true}, SHIFT(75),
  [257] = {.count = 1, .reusable = true}, SHIFT(74),
  [259] = {.count = 1, .reusable = true}, SHIFT(73),
  [261] = {.count = 1, .reusable = true}, SHIFT(77),
  [263] = {.count = 1, .reusable = true}, SHIFT(110),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 5),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 5),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_table, 5),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_table, 5),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_local_date_time, 3),
  [275] = {.count = 1, .reusable = true}, SHIFT(80),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_literal_string, 3),
  [279] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(66),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(66),
  [285] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym__multiline_basic_string, 3),
  [289] = {.count = 2, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(68),
  [292] = {.count = 2, .reusable = false}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(68),
  [295] = {.count = 1, .reusable = true}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [299] = {.count = 1, .reusable = true}, SHIFT(82),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_float, 3),
  [303] = {.count = 1, .reusable = true}, SHIFT(84),
  [305] = {.count = 1, .reusable = true}, SHIFT(85),
  [307] = {.count = 1, .reusable = true}, SHIFT(86),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_array, 3),
  [311] = {.count = 1, .reusable = true}, SHIFT(87),
  [313] = {.count = 1, .reusable = true}, SHIFT(90),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_table_array, 6),
  [317] = {.count = 1, .reusable = false}, REDUCE(sym_table_array, 6),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_table, 6),
  [321] = {.count = 1, .reusable = false}, REDUCE(sym_table, 6),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_offset_date_time, 4),
  [325] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(69),
  [332] = {.count = 1, .reusable = true}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_array, 4),
  [336] = {.count = 1, .reusable = true}, SHIFT(91),
  [338] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2),
  [340] = {.count = 1, .reusable = true}, SHIFT(92),
  [342] = {.count = 1, .reusable = true}, SHIFT(93),
  [344] = {.count = 1, .reusable = true}, SHIFT(94),
  [346] = {.count = 1, .reusable = true}, SHIFT(95),
  [348] = {.count = 2, .reusable = true}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(96),
  [351] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 3),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_array, 5),
  [355] = {.count = 1, .reusable = true}, SHIFT(98),
  [357] = {.count = 1, .reusable = true}, SHIFT(99),
  [359] = {.count = 1, .reusable = true}, SHIFT(100),
  [361] = {.count = 1, .reusable = true}, SHIFT(101),
  [363] = {.count = 1, .reusable = true}, SHIFT(102),
  [365] = {.count = 1, .reusable = true}, REDUCE(aux_sym_array_repeat1, 4),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_array, 6),
  [369] = {.count = 1, .reusable = true}, SHIFT(103),
  [371] = {.count = 1, .reusable = true}, SHIFT(104),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_array, 7),
  [375] = {.count = 1, .reusable = true}, SHIFT(105),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_array, 8),
  [379] = {.count = 2, .reusable = true}, REDUCE(aux_sym_root_repeat1, 2), SHIFT_REPEAT(110),
  [382] = {.count = 1, .reusable = true}, SHIFT(152),
  [384] = {.count = 1, .reusable = true}, SHIFT(123),
  [386] = {.count = 1, .reusable = true}, SHIFT(124),
  [388] = {.count = 1, .reusable = true}, SHIFT(130),
  [390] = {.count = 1, .reusable = true}, SHIFT(132),
  [392] = {.count = 1, .reusable = true}, SHIFT(139),
  [394] = {.count = 1, .reusable = true}, SHIFT(145),
  [396] = {.count = 1, .reusable = false}, SHIFT(145),
  [398] = {.count = 1, .reusable = true}, SHIFT(140),
  [400] = {.count = 1, .reusable = false}, SHIFT(146),
  [402] = {.count = 1, .reusable = true}, SHIFT(141),
  [404] = {.count = 1, .reusable = true}, SHIFT(142),
  [406] = {.count = 1, .reusable = false}, SHIFT(3),
  [408] = {.count = 1, .reusable = true}, SHIFT(118),
  [410] = {.count = 1, .reusable = false}, SHIFT(6),
  [412] = {.count = 1, .reusable = true}, SHIFT(153),
  [414] = {.count = 1, .reusable = false}, SHIFT(153),
  [416] = {.count = 1, .reusable = true}, SHIFT(120),
  [418] = {.count = 1, .reusable = true}, SHIFT(154),
  [420] = {.count = 1, .reusable = false}, SHIFT(154),
  [422] = {.count = 1, .reusable = true}, SHIFT(121),
  [424] = {.count = 1, .reusable = true}, SHIFT(122),
  [426] = {.count = 1, .reusable = true}, SHIFT(125),
  [428] = {.count = 1, .reusable = true}, SHIFT(156),
  [430] = {.count = 1, .reusable = true}, SHIFT(157),
  [432] = {.count = 1, .reusable = true}, SHIFT(126),
  [434] = {.count = 1, .reusable = true}, SHIFT(127),
  [436] = {.count = 1, .reusable = true}, SHIFT(128),
  [438] = {.count = 1, .reusable = true}, SHIFT(129),
  [440] = {.count = 1, .reusable = true}, SHIFT(160),
  [442] = {.count = 1, .reusable = true}, SHIFT(131),
  [444] = {.count = 1, .reusable = true}, SHIFT(159),
  [446] = {.count = 1, .reusable = true}, SHIFT(162),
  [448] = {.count = 1, .reusable = true}, SHIFT(133),
  [450] = {.count = 1, .reusable = true}, SHIFT(134),
  [452] = {.count = 1, .reusable = true}, SHIFT(163),
  [454] = {.count = 1, .reusable = true}, SHIFT(164),
  [456] = {.count = 1, .reusable = true}, SHIFT(166),
  [458] = {.count = 1, .reusable = true}, SHIFT(135),
  [460] = {.count = 1, .reusable = true}, SHIFT(167),
  [462] = {.count = 1, .reusable = true}, SHIFT(168),
  [464] = {.count = 1, .reusable = true}, SHIFT(136),
  [466] = {.count = 1, .reusable = true}, SHIFT(170),
  [468] = {.count = 1, .reusable = true}, SHIFT(171),
  [470] = {.count = 1, .reusable = true}, SHIFT(137),
  [472] = {.count = 1, .reusable = true}, SHIFT(172),
  [474] = {.count = 1, .reusable = true}, SHIFT(138),
  [476] = {.count = 1, .reusable = true}, SHIFT(107),
  [478] = {.count = 1, .reusable = true}, SHIFT(175),
  [480] = {.count = 1, .reusable = false}, SHIFT(175),
  [482] = {.count = 1, .reusable = true}, SHIFT(108),
  [484] = {.count = 1, .reusable = false}, SHIFT(176),
  [486] = {.count = 1, .reusable = true}, SHIFT(111),
  [488] = {.count = 1, .reusable = true}, SHIFT(112),
  [490] = {.count = 1, .reusable = true}, SHIFT(147),
};

void *tree_sitter_toml_external_scanner_create(void);
void tree_sitter_toml_external_scanner_destroy(void *);
bool tree_sitter_toml_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_toml_external_scanner_serialize(void *, char *);
void tree_sitter_toml_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_toml(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_toml_external_scanner_create,
      tree_sitter_toml_external_scanner_destroy,
      tree_sitter_toml_external_scanner_scan,
      tree_sitter_toml_external_scanner_serialize,
      tree_sitter_toml_external_scanner_deserialize,
    },
  };
  return &language;
}
