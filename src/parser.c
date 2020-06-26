#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 154
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  aux_sym_document_token1 = 1,
  sym_comment = 2,
  sym_open_sqr = 3,
  sym_clos_sqr = 4,
  sym_open_tba = 5,
  sym_clos_tba = 6,
  sym_open_crl = 7,
  sym_clos_crl = 8,
  sym_equal = 9,
  sym_dot = 10,
  sym_comma = 11,
  sym__bare_key = 12,
  anon_sym_DQUOTE = 13,
  aux_sym__basic_string_token1 = 14,
  anon_sym_DQUOTE2 = 15,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 16,
  aux_sym__multiline_basic_string_token1 = 17,
  aux_sym__multiline_basic_string_token2 = 18,
  anon_sym_DQUOTE_DQUOTE_DQUOTE2 = 19,
  sym_escape_sequence = 20,
  sym__escape_line_ending = 21,
  anon_sym_SQUOTE = 22,
  aux_sym__literal_string_token1 = 23,
  anon_sym_SQUOTE2 = 24,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 25,
  aux_sym__multiline_literal_string_token1 = 26,
  anon_sym_SQUOTE_SQUOTE_SQUOTE2 = 27,
  aux_sym_integer_token1 = 28,
  aux_sym_integer_token2 = 29,
  aux_sym_integer_token3 = 30,
  aux_sym_integer_token4 = 31,
  aux_sym_float_token1 = 32,
  aux_sym_float_token2 = 33,
  sym_boolean = 34,
  sym_offset_date_time = 35,
  sym_local_date_time = 36,
  sym_local_date = 37,
  sym_local_time = 38,
  sym__line_ending_or_eof = 39,
  sym_document = 40,
  sym_table = 41,
  sym_table_array_element = 42,
  sym_pair = 43,
  sym__inline_pair = 44,
  sym_key = 45,
  sym_dotted_key = 46,
  sym_quoted_key = 47,
  sym__inline_value = 48,
  sym_string = 49,
  sym__basic_string = 50,
  sym__multiline_basic_string = 51,
  sym__literal_string = 52,
  sym__multiline_literal_string = 53,
  sym_integer = 54,
  sym_float = 55,
  sym_array = 56,
  sym_inline_table = 57,
  aux_sym_document_repeat1 = 58,
  aux_sym_document_repeat2 = 59,
  aux_sym__basic_string_repeat1 = 60,
  aux_sym__multiline_basic_string_repeat1 = 61,
  aux_sym__multiline_literal_string_repeat1 = 62,
  aux_sym_array_repeat1 = 63,
  aux_sym_array_repeat2 = 64,
  aux_sym_inline_table_repeat1 = 65,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_document_token1] = "document_token1",
  [sym_comment] = "comment",
  [sym_open_sqr] = "open_sqr",
  [sym_clos_sqr] = "clos_sqr",
  [sym_open_tba] = "open_tba",
  [sym_clos_tba] = "clos_tba",
  [sym_open_crl] = "open_crl",
  [sym_clos_crl] = "clos_crl",
  [sym_equal] = "equal",
  [sym_dot] = "dot",
  [sym_comma] = "comma",
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
  [sym_boolean] = "boolean",
  [sym_offset_date_time] = "offset_date_time",
  [sym_local_date_time] = "local_date_time",
  [sym_local_date] = "local_date",
  [sym_local_time] = "local_time",
  [sym__line_ending_or_eof] = "_line_ending_or_eof",
  [sym_document] = "document",
  [sym_table] = "table",
  [sym_table_array_element] = "table_array_element",
  [sym_pair] = "pair",
  [sym__inline_pair] = "_inline_pair",
  [sym_key] = "key",
  [sym_dotted_key] = "dotted_key",
  [sym_quoted_key] = "quoted_key",
  [sym__inline_value] = "_inline_value",
  [sym_string] = "string",
  [sym__basic_string] = "_basic_string",
  [sym__multiline_basic_string] = "_multiline_basic_string",
  [sym__literal_string] = "_literal_string",
  [sym__multiline_literal_string] = "_multiline_literal_string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_array] = "array",
  [sym_inline_table] = "inline_table",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_document_repeat2] = "document_repeat2",
  [aux_sym__basic_string_repeat1] = "_basic_string_repeat1",
  [aux_sym__multiline_basic_string_repeat1] = "_multiline_basic_string_repeat1",
  [aux_sym__multiline_literal_string_repeat1] = "_multiline_literal_string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_array_repeat2] = "array_repeat2",
  [aux_sym_inline_table_repeat1] = "inline_table_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_document_token1] = aux_sym_document_token1,
  [sym_comment] = sym_comment,
  [sym_open_sqr] = sym_open_sqr,
  [sym_clos_sqr] = sym_clos_sqr,
  [sym_open_tba] = sym_open_tba,
  [sym_clos_tba] = sym_clos_tba,
  [sym_open_crl] = sym_open_crl,
  [sym_clos_crl] = sym_clos_crl,
  [sym_equal] = sym_equal,
  [sym_dot] = sym_dot,
  [sym_comma] = sym_comma,
  [sym__bare_key] = sym__bare_key,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__basic_string_token1] = aux_sym__basic_string_token1,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym__multiline_basic_string_token1] = aux_sym__multiline_basic_string_token1,
  [aux_sym__multiline_basic_string_token2] = aux_sym__multiline_basic_string_token2,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE2] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym__escape_line_ending] = sym_escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__literal_string_token1] = aux_sym__literal_string_token1,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym__multiline_literal_string_token1] = aux_sym__multiline_literal_string_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE2] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym_boolean] = sym_boolean,
  [sym_offset_date_time] = sym_offset_date_time,
  [sym_local_date_time] = sym_local_date_time,
  [sym_local_date] = sym_local_date,
  [sym_local_time] = sym_local_time,
  [sym__line_ending_or_eof] = sym__line_ending_or_eof,
  [sym_document] = sym_document,
  [sym_table] = sym_table,
  [sym_table_array_element] = sym_table_array_element,
  [sym_pair] = sym_pair,
  [sym__inline_pair] = sym__inline_pair,
  [sym_key] = sym_key,
  [sym_dotted_key] = sym_dotted_key,
  [sym_quoted_key] = sym_quoted_key,
  [sym__inline_value] = sym__inline_value,
  [sym_string] = sym_string,
  [sym__basic_string] = sym__basic_string,
  [sym__multiline_basic_string] = sym__multiline_basic_string,
  [sym__literal_string] = sym__literal_string,
  [sym__multiline_literal_string] = sym__multiline_literal_string,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_array] = sym_array,
  [sym_inline_table] = sym_inline_table,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_document_repeat2] = aux_sym_document_repeat2,
  [aux_sym__basic_string_repeat1] = aux_sym__basic_string_repeat1,
  [aux_sym__multiline_basic_string_repeat1] = aux_sym__multiline_basic_string_repeat1,
  [aux_sym__multiline_literal_string_repeat1] = aux_sym__multiline_literal_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_array_repeat2] = aux_sym_array_repeat2,
  [aux_sym_inline_table_repeat1] = aux_sym_inline_table_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_open_sqr] = {
    .visible = true,
    .named = true,
  },
  [sym_clos_sqr] = {
    .visible = true,
    .named = true,
  },
  [sym_open_tba] = {
    .visible = true,
    .named = true,
  },
  [sym_clos_tba] = {
    .visible = true,
    .named = true,
  },
  [sym_open_crl] = {
    .visible = true,
    .named = true,
  },
  [sym_clos_crl] = {
    .visible = true,
    .named = true,
  },
  [sym_equal] = {
    .visible = true,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
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
  [sym_boolean] = {
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
  [sym_local_time] = {
    .visible = true,
    .named = true,
  },
  [sym__line_ending_or_eof] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_array_element] = {
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
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_dotted_key] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_key] = {
    .visible = true,
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
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_table] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_document_repeat2] = {
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
  [aux_sym_array_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_table_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = sym_pair,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '"') ADVANCE(131);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(145);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(77)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(12)
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(129);
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(12)
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(135);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(135);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '\'') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(143);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(138);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(138);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(80);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '1') ADVANCE(153);
      if (lookahead == '2') ADVANCE(152);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(57);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(132);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '\'') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != 127) ADVANCE(143);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(146);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(168);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == '1') ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(165);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(43);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(65);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(44);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      END_STATE();
    case 22:
      if (lookahead == '6') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == '6') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(46);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 29:
      if (lookahead == ']') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(162);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(159);
      END_STATE();
    case 41:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(167);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(15);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(27);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(25);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(53);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(63);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(67);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(158);
      END_STATE();
    case 49:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 50:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(140);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(93);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(77)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '"') ADVANCE(125);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(139);
      if (lookahead == ',') ADVANCE(91);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(78)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_document_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_open_sqr);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_open_sqr);
      if (lookahead == '[') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_clos_sqr);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_open_tba);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_clos_tba);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_open_crl);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_clos_crl);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_equal);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_dot);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '_') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '_') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(92);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '_') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '_') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(119);
      if (lookahead == '1') ADVANCE(116);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '3') ADVANCE(114);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(120);
      if (lookahead == '-' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(115);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(101);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '_') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'l') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == 'u') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(101);
      if (lookahead == '-' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(97);
      if (lookahead == '-' ||
          ('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__bare_key);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(105);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__bare_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__bare_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 127) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if ((0 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= 31) ||
          lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 127) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__basic_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != 127) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token1);
      if (lookahead == '"') ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__multiline_basic_string_token2);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE2);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__escape_line_ending);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead == '#') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || 31 < lookahead) &&
          lookahead != '\'' &&
          lookahead != 127) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if ((0 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          lookahead == '\'' ||
          lookahead == 127) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__literal_string_token1);
      if (lookahead != 0 &&
          (lookahead < 0 || 8 < lookahead) &&
          (lookahead < '\n' || 31 < lookahead) &&
          lookahead != '\'' &&
          lookahead != 127) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      if (lookahead == '\'') ADVANCE(14);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__multiline_literal_string_token1);
      if (lookahead == '\'') ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(150);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(58);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_float_token2);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_offset_date_time);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_local_date_time);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_local_date);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_local_time);
      if (lookahead == '.') ADVANCE(55);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_local_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 78},
  [28] = {.lex_state = 78},
  [29] = {.lex_state = 78},
  [30] = {.lex_state = 78},
  [31] = {.lex_state = 78},
  [32] = {.lex_state = 78},
  [33] = {.lex_state = 78},
  [34] = {.lex_state = 78},
  [35] = {.lex_state = 78},
  [36] = {.lex_state = 78},
  [37] = {.lex_state = 78},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 78},
  [43] = {.lex_state = 78},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 78},
  [46] = {.lex_state = 78},
  [47] = {.lex_state = 78},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 78},
  [51] = {.lex_state = 78},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 78},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 78},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 78},
  [59] = {.lex_state = 78},
  [60] = {.lex_state = 78},
  [61] = {.lex_state = 78},
  [62] = {.lex_state = 78},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 78},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 78},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 78},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 78},
  [72] = {.lex_state = 78},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 78},
  [75] = {.lex_state = 78},
  [76] = {.lex_state = 78},
  [77] = {.lex_state = 78},
  [78] = {.lex_state = 78},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 78},
  [82] = {.lex_state = 78},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 78},
  [85] = {.lex_state = 78},
  [86] = {.lex_state = 78},
  [87] = {.lex_state = 78},
  [88] = {.lex_state = 78},
  [89] = {.lex_state = 78},
  [90] = {.lex_state = 78},
  [91] = {.lex_state = 78},
  [92] = {.lex_state = 78},
  [93] = {.lex_state = 78},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 13},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 13},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 10},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 10},
  [119] = {.lex_state = 10},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 0, .external_lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0, .external_lex_state = 1},
  [148] = {.lex_state = 0, .external_lex_state = 1},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 1},
  [152] = {.lex_state = 10},
  [153] = {.lex_state = 0, .external_lex_state = 1},
};

enum {
  ts_external_token__line_ending_or_eof = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__line_ending_or_eof] = sym__line_ending_or_eof,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__line_ending_or_eof] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_document_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_open_sqr] = ACTIONS(1),
    [sym_clos_sqr] = ACTIONS(1),
    [sym_open_tba] = ACTIONS(1),
    [sym_open_crl] = ACTIONS(1),
    [sym_clos_crl] = ACTIONS(1),
    [sym_equal] = ACTIONS(1),
    [sym_dot] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
    [sym__bare_key] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [aux_sym__multiline_basic_string_token2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym__escape_line_ending] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_local_date] = ACTIONS(1),
    [sym_local_time] = ACTIONS(1),
    [sym__line_ending_or_eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(146),
    [sym_table] = STATE(52),
    [sym_table_array_element] = STATE(52),
    [sym_pair] = STATE(27),
    [sym__inline_pair] = STATE(144),
    [sym_key] = STATE(113),
    [sym_dotted_key] = STATE(113),
    [sym_quoted_key] = STATE(106),
    [sym__basic_string] = STATE(105),
    [sym__literal_string] = STATE(105),
    [aux_sym_document_repeat1] = STATE(27),
    [aux_sym_document_repeat2] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_document_token1] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_open_sqr] = ACTIONS(9),
    [sym_open_tba] = ACTIONS(11),
    [sym__bare_key] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_document_token1,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(23), 1,
      sym_clos_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    STATE(11), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(41), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [66] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(45), 1,
      aux_sym_document_token1,
    ACTIONS(47), 1,
      sym_clos_sqr,
    STATE(16), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(51), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(49), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(60), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [132] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(55), 1,
      sym_clos_sqr,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(57), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [198] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(61), 1,
      sym_clos_sqr,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(65), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(63), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(59), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [264] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(67), 1,
      sym_clos_sqr,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(57), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [330] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(69), 1,
      aux_sym_document_token1,
    ACTIONS(71), 1,
      sym_clos_sqr,
    STATE(6), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(41), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [396] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(71), 1,
      sym_clos_sqr,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(57), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [462] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(73), 1,
      aux_sym_document_token1,
    ACTIONS(75), 1,
      sym_clos_sqr,
    STATE(14), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(41), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [528] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(77), 1,
      aux_sym_document_token1,
    ACTIONS(79), 1,
      sym_clos_sqr,
    STATE(5), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(83), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(81), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(61), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [594] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(85), 1,
      sym_clos_sqr,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(57), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [660] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(75), 1,
      sym_clos_sqr,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(57), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [726] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(87), 1,
      sym_clos_sqr,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(57), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [792] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(89), 1,
      sym_clos_sqr,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(57), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [858] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(89), 1,
      sym_clos_sqr,
    ACTIONS(91), 1,
      aux_sym_document_token1,
    STATE(19), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(41), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [924] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(93), 1,
      sym_clos_sqr,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(97), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(95), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(64), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [990] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(99), 1,
      aux_sym_document_token1,
    ACTIONS(101), 1,
      sym_clos_sqr,
    STATE(13), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(41), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1056] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(67), 1,
      sym_clos_sqr,
    ACTIONS(103), 1,
      aux_sym_document_token1,
    STATE(4), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(41), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1122] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(23), 1,
      sym_clos_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(57), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1188] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(87), 1,
      sym_clos_sqr,
    ACTIONS(105), 1,
      aux_sym_document_token1,
    STATE(8), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(41), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1254] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(107), 1,
      aux_sym_document_token1,
    ACTIONS(109), 1,
      sym_clos_sqr,
    STATE(12), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(41), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1320] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(59), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(57), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(77), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1383] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(111), 1,
      aux_sym_document_token1,
    STATE(22), 1,
      aux_sym_array_repeat1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(43), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(41), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(69), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1446] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_open_sqr,
    ACTIONS(115), 1,
      sym_open_crl,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_SQUOTE,
    ACTIONS(123), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(125), 1,
      aux_sym_integer_token1,
    ACTIONS(129), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(133), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(127), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(131), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(127), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(128), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1503] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_open_sqr,
    ACTIONS(25), 1,
      sym_open_crl,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(35), 1,
      aux_sym_integer_token1,
    ACTIONS(39), 2,
      aux_sym_float_token1,
      aux_sym_float_token2,
    ACTIONS(137), 2,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(37), 3,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
    ACTIONS(135), 3,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
    STATE(91), 4,
      sym__basic_string,
      sym__multiline_basic_string,
      sym__literal_string,
      sym__multiline_literal_string,
    STATE(124), 6,
      sym__inline_value,
      sym_string,
      sym_integer,
      sym_float,
      sym_array,
      sym_inline_table,
  [1560] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(144), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_integer_token1,
      sym_local_date_time,
      sym_local_date,
    ACTIONS(142), 14,
      sym_open_sqr,
      sym_clos_sqr,
      sym_open_crl,
      sym_comma,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_integer_token2,
      aux_sym_integer_token3,
      aux_sym_integer_token4,
      aux_sym_float_token1,
      aux_sym_float_token2,
      sym_boolean,
      sym_offset_date_time,
      sym_local_time,
  [1593] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_open_sqr,
    ACTIONS(11), 1,
      sym_open_tba,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    STATE(106), 1,
      sym_quoted_key,
    STATE(144), 1,
      sym__inline_pair,
    STATE(28), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(113), 2,
      sym_key,
      sym_dotted_key,
    STATE(49), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [1641] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      aux_sym_document_token1,
    ACTIONS(155), 1,
      sym_open_sqr,
    ACTIONS(157), 1,
      sym__bare_key,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym_quoted_key,
    STATE(144), 1,
      sym__inline_pair,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      sym_open_tba,
    STATE(28), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(113), 2,
      sym_key,
      sym_dotted_key,
  [1682] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    ACTIONS(168), 1,
      sym_open_sqr,
    STATE(106), 1,
      sym_quoted_key,
    STATE(144), 1,
      sym__inline_pair,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      sym_open_tba,
    STATE(28), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(113), 2,
      sym_key,
      sym_dotted_key,
  [1723] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(148), 1,
      aux_sym_document_token1,
    ACTIONS(172), 1,
      sym_open_sqr,
    STATE(106), 1,
      sym_quoted_key,
    STATE(144), 1,
      sym__inline_pair,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      sym_open_tba,
    STATE(28), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(113), 2,
      sym_key,
      sym_dotted_key,
  [1764] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(176), 1,
      aux_sym_document_token1,
    ACTIONS(178), 1,
      sym_open_sqr,
    STATE(106), 1,
      sym_quoted_key,
    STATE(144), 1,
      sym__inline_pair,
    ACTIONS(174), 2,
      ts_builtin_sym_end,
      sym_open_tba,
    STATE(29), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(113), 2,
      sym_key,
      sym_dotted_key,
  [1805] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(182), 1,
      aux_sym_document_token1,
    ACTIONS(184), 1,
      sym_open_sqr,
    STATE(106), 1,
      sym_quoted_key,
    STATE(144), 1,
      sym__inline_pair,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      sym_open_tba,
    STATE(30), 2,
      sym_pair,
      aux_sym_document_repeat1,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(113), 2,
      sym_key,
      sym_dotted_key,
  [1846] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(186), 1,
      sym_clos_crl,
    STATE(102), 1,
      sym__inline_pair,
    STATE(106), 1,
      sym_quoted_key,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(110), 2,
      sym_key,
      sym_dotted_key,
  [1876] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(188), 1,
      sym_clos_crl,
    STATE(98), 1,
      sym__inline_pair,
    STATE(106), 1,
      sym_quoted_key,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(110), 2,
      sym_key,
      sym_dotted_key,
  [1906] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym_quoted_key,
    STATE(115), 1,
      sym__inline_pair,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(110), 2,
      sym_key,
      sym_dotted_key,
  [1933] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__bare_key,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(114), 1,
      sym_quoted_key,
    STATE(111), 2,
      sym_key,
      sym_dotted_key,
    STATE(120), 2,
      sym__basic_string,
      sym__literal_string,
  [1957] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(106), 1,
      sym_quoted_key,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
    STATE(123), 2,
      sym_key,
      sym_dotted_key,
  [1981] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(41), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(198), 2,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
    ACTIONS(200), 3,
      aux_sym__multiline_basic_string_token2,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2000] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(41), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(198), 2,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
    ACTIONS(200), 3,
      aux_sym__multiline_basic_string_token2,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2019] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(210), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(39), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(206), 2,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
    ACTIONS(208), 3,
      aux_sym__multiline_basic_string_token2,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2038] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(41), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(212), 2,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
    ACTIONS(215), 3,
      aux_sym__multiline_basic_string_token2,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_open_sqr,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      aux_sym_document_token1,
      sym_open_tba,
      sym__bare_key,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2072] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym__bare_key,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      sym_key,
    STATE(106), 1,
      sym_quoted_key,
    STATE(105), 2,
      sym__basic_string,
      sym__literal_string,
  [2095] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE2,
    STATE(38), 1,
      aux_sym__multiline_basic_string_repeat1,
    ACTIONS(224), 2,
      aux_sym__basic_string_token1,
      aux_sym__multiline_basic_string_token1,
    ACTIONS(226), 3,
      aux_sym__multiline_basic_string_token2,
      sym_escape_sequence,
      sym__escape_line_ending,
  [2114] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym__bare_key,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      anon_sym_SQUOTE,
    STATE(114), 1,
      sym_quoted_key,
    STATE(122), 1,
      sym_key,
    STATE(120), 2,
      sym__basic_string,
      sym__literal_string,
  [2137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 6,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_equal,
      sym_dot,
      sym_comma,
  [2149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 6,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_equal,
      sym_dot,
      sym_comma,
  [2161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(236), 1,
      sym_open_sqr,
    ACTIONS(239), 1,
      sym_open_tba,
    STATE(48), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2179] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_open_sqr,
    ACTIONS(11), 1,
      sym_open_tba,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    STATE(48), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 6,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_equal,
      sym_dot,
      sym_comma,
  [2209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 6,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_equal,
      sym_dot,
      sym_comma,
  [2221] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_open_sqr,
    ACTIONS(11), 1,
      sym_open_tba,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(48), 3,
      sym_table,
      sym_table_array_element,
      aux_sym_document_repeat2,
  [2239] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__multiline_basic_string_token2,
    ACTIONS(252), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE2,
    STATE(55), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(250), 2,
      aux_sym__literal_string_token1,
      aux_sym__multiline_literal_string_token1,
  [2256] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(75), 1,
      sym_clos_sqr,
    ACTIONS(254), 1,
      sym_comma,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(95), 1,
      aux_sym_array_repeat2,
  [2275] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym__multiline_basic_string_token2,
    ACTIONS(260), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE2,
    STATE(65), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(258), 2,
      aux_sym__literal_string_token1,
      aux_sym__multiline_literal_string_token1,
  [2292] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(87), 1,
      sym_clos_sqr,
    ACTIONS(262), 1,
      sym_comma,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(107), 1,
      aux_sym_array_repeat2,
  [2311] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(256), 1,
      aux_sym__multiline_basic_string_token2,
    ACTIONS(264), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE2,
    STATE(65), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(258), 2,
      aux_sym__literal_string_token1,
      aux_sym__multiline_literal_string_token1,
  [2328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(109), 1,
      sym_clos_sqr,
    ACTIONS(266), 1,
      sym_comma,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(100), 1,
      aux_sym_array_repeat2,
  [2347] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_clos_sqr,
    ACTIONS(266), 1,
      sym_comma,
    ACTIONS(268), 1,
      aux_sym_document_token1,
    STATE(54), 1,
      aux_sym_array_repeat1,
    STATE(100), 1,
      aux_sym_array_repeat2,
  [2366] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_clos_sqr,
    ACTIONS(270), 1,
      aux_sym_document_token1,
    ACTIONS(272), 1,
      sym_comma,
    STATE(62), 1,
      aux_sym_array_repeat1,
    STATE(96), 1,
      aux_sym_array_repeat2,
  [2385] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_clos_sqr,
    ACTIONS(274), 1,
      aux_sym_document_token1,
    ACTIONS(276), 1,
      sym_comma,
    STATE(58), 1,
      aux_sym_array_repeat1,
    STATE(108), 1,
      aux_sym_array_repeat2,
  [2404] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    ACTIONS(101), 1,
      sym_clos_sqr,
    ACTIONS(278), 1,
      sym_comma,
    STATE(26), 1,
      aux_sym_array_repeat1,
    STATE(104), 1,
      aux_sym_array_repeat2,
  [2423] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(280), 1,
      aux_sym__multiline_basic_string_token2,
    ACTIONS(284), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE2,
    STATE(57), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(282), 2,
      aux_sym__literal_string_token1,
      aux_sym__multiline_literal_string_token1,
  [2440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_clos_sqr,
    ACTIONS(278), 1,
      sym_comma,
    ACTIONS(286), 1,
      aux_sym_document_token1,
    STATE(56), 1,
      aux_sym_array_repeat1,
    STATE(104), 1,
      aux_sym_array_repeat2,
  [2459] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym__multiline_basic_string_token2,
    ACTIONS(294), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE2,
    STATE(65), 1,
      aux_sym__multiline_literal_string_repeat1,
    ACTIONS(291), 2,
      aux_sym__literal_string_token1,
      aux_sym__multiline_literal_string_token1,
  [2476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2486] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym__basic_string_token1,
    ACTIONS(300), 1,
      anon_sym_DQUOTE2,
    ACTIONS(302), 1,
      sym_escape_sequence,
    STATE(80), 1,
      aux_sym__basic_string_repeat1,
  [2502] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym__basic_string_token1,
    ACTIONS(302), 1,
      sym_escape_sequence,
    ACTIONS(304), 1,
      anon_sym_DQUOTE2,
    STATE(80), 1,
      aux_sym__basic_string_repeat1,
  [2518] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym_document_token1,
    STATE(75), 1,
      aux_sym_array_repeat1,
    ACTIONS(308), 2,
      sym_clos_sqr,
      sym_comma,
  [2532] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(310), 1,
      aux_sym__basic_string_token1,
    ACTIONS(312), 1,
      anon_sym_DQUOTE2,
    ACTIONS(314), 1,
      sym_escape_sequence,
    STATE(68), 1,
      aux_sym__basic_string_repeat1,
  [2548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2568] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(298), 1,
      aux_sym__basic_string_token1,
    ACTIONS(302), 1,
      sym_escape_sequence,
    ACTIONS(320), 1,
      anon_sym_DQUOTE2,
    STATE(80), 1,
      aux_sym__basic_string_repeat1,
  [2584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(324), 2,
      sym_clos_sqr,
      sym_comma,
  [2608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym_document_token1,
    STATE(82), 1,
      aux_sym_array_repeat1,
    ACTIONS(324), 2,
      sym_clos_sqr,
      sym_comma,
  [2632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2642] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym__basic_string_token1,
    ACTIONS(334), 1,
      anon_sym_DQUOTE2,
    ACTIONS(336), 1,
      sym_escape_sequence,
    STATE(73), 1,
      aux_sym__basic_string_repeat1,
  [2658] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(338), 1,
      aux_sym__basic_string_token1,
    ACTIONS(341), 1,
      anon_sym_DQUOTE2,
    ACTIONS(343), 1,
      sym_escape_sequence,
    STATE(80), 1,
      aux_sym__basic_string_repeat1,
  [2674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      aux_sym_document_token1,
    STATE(26), 1,
      aux_sym_array_repeat1,
    ACTIONS(348), 2,
      sym_clos_sqr,
      sym_comma,
  [2698] = 5,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(350), 1,
      aux_sym__basic_string_token1,
    ACTIONS(352), 1,
      anon_sym_DQUOTE2,
    ACTIONS(354), 1,
      sym_escape_sequence,
    STATE(67), 1,
      aux_sym__basic_string_repeat1,
  [2714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 4,
      aux_sym_document_token1,
      sym_clos_sqr,
      sym_clos_crl,
      sym_comma,
  [2814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_clos_crl,
    ACTIONS(378), 1,
      sym_comma,
    STATE(103), 1,
      aux_sym_inline_table_repeat1,
  [2827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_clos_sqr,
    ACTIONS(380), 1,
      sym_comma,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2840] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_clos_sqr,
    ACTIONS(278), 1,
      sym_comma,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2853] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_comma,
    ACTIONS(382), 1,
      sym_clos_crl,
    STATE(103), 1,
      aux_sym_inline_table_repeat1,
  [2866] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_comma,
    ACTIONS(384), 1,
      sym_clos_crl,
    STATE(97), 1,
      aux_sym_inline_table_repeat1,
  [2879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 3,
      sym_clos_sqr,
      sym_equal,
      sym_dot,
  [2888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_clos_sqr,
    ACTIONS(254), 1,
      sym_comma,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2901] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_clos_sqr,
    ACTIONS(388), 1,
      sym_comma,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2914] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_comma,
    ACTIONS(391), 1,
      sym_clos_crl,
    STATE(94), 1,
      aux_sym_inline_table_repeat1,
  [2927] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_clos_crl,
    ACTIONS(395), 1,
      sym_comma,
    STATE(103), 1,
      aux_sym_inline_table_repeat1,
  [2940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_clos_sqr,
    ACTIONS(262), 1,
      sym_comma,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 3,
      sym_clos_sqr,
      sym_equal,
      sym_dot,
  [2962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 3,
      sym_clos_sqr,
      sym_equal,
      sym_dot,
  [2971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym_clos_sqr,
    ACTIONS(402), 1,
      sym_comma,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_clos_sqr,
    ACTIONS(266), 1,
      sym_comma,
    STATE(101), 1,
      aux_sym_array_repeat2,
  [2997] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(404), 1,
      aux_sym__literal_string_token1,
    ACTIONS(406), 1,
      anon_sym_SQUOTE2,
  [3007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_equal,
    ACTIONS(410), 1,
      sym_dot,
  [3017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_clos_tba,
    ACTIONS(414), 1,
      sym_dot,
  [3027] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(416), 1,
      aux_sym__literal_string_token1,
    ACTIONS(418), 1,
      anon_sym_SQUOTE2,
  [3037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_dot,
    ACTIONS(420), 1,
      sym_equal,
  [3047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      sym_clos_tba,
      sym_dot,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      sym_clos_crl,
      sym_comma,
  [3063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 2,
      sym_clos_tba,
      sym_dot,
  [3071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym_clos_tba,
      sym_dot,
  [3079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      sym_clos_tba,
      sym_dot,
  [3087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 2,
      sym_clos_tba,
      sym_dot,
  [3095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 2,
      sym_clos_tba,
      sym_dot,
  [3103] = 3,
    ACTIONS(196), 1,
      sym_comment,
    ACTIONS(424), 1,
      aux_sym__literal_string_token1,
    ACTIONS(426), 1,
      anon_sym_SQUOTE2,
  [3113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      sym_clos_tba,
      sym_dot,
  [3121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_dot,
    ACTIONS(428), 1,
      sym_clos_sqr,
  [3131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 2,
      sym_clos_crl,
      sym_comma,
  [3139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__line_ending_or_eof,
  [3146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SQUOTE2,
  [3153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym__line_ending_or_eof,
  [3160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym__line_ending_or_eof,
  [3167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      sym__line_ending_or_eof,
  [3174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym__line_ending_or_eof,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym__line_ending_or_eof,
  [3188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym__line_ending_or_eof,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym__line_ending_or_eof,
  [3202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym__line_ending_or_eof,
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_SQUOTE2,
  [3216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      sym__line_ending_or_eof,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym__line_ending_or_eof,
  [3230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym__line_ending_or_eof,
  [3237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      sym__line_ending_or_eof,
  [3244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym__line_ending_or_eof,
  [3251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__line_ending_or_eof,
  [3258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym__line_ending_or_eof,
  [3265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      sym__line_ending_or_eof,
  [3272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      sym__line_ending_or_eof,
  [3279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym__line_ending_or_eof,
  [3286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      ts_builtin_sym_end,
  [3293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym__line_ending_or_eof,
  [3300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym__line_ending_or_eof,
  [3307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym__line_ending_or_eof,
  [3314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym__line_ending_or_eof,
  [3321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym__line_ending_or_eof,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_SQUOTE2,
  [3335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym__line_ending_or_eof,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 66,
  [SMALL_STATE(4)] = 132,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 330,
  [SMALL_STATE(8)] = 396,
  [SMALL_STATE(9)] = 462,
  [SMALL_STATE(10)] = 528,
  [SMALL_STATE(11)] = 594,
  [SMALL_STATE(12)] = 660,
  [SMALL_STATE(13)] = 726,
  [SMALL_STATE(14)] = 792,
  [SMALL_STATE(15)] = 858,
  [SMALL_STATE(16)] = 924,
  [SMALL_STATE(17)] = 990,
  [SMALL_STATE(18)] = 1056,
  [SMALL_STATE(19)] = 1122,
  [SMALL_STATE(20)] = 1188,
  [SMALL_STATE(21)] = 1254,
  [SMALL_STATE(22)] = 1320,
  [SMALL_STATE(23)] = 1383,
  [SMALL_STATE(24)] = 1446,
  [SMALL_STATE(25)] = 1503,
  [SMALL_STATE(26)] = 1560,
  [SMALL_STATE(27)] = 1593,
  [SMALL_STATE(28)] = 1641,
  [SMALL_STATE(29)] = 1682,
  [SMALL_STATE(30)] = 1723,
  [SMALL_STATE(31)] = 1764,
  [SMALL_STATE(32)] = 1805,
  [SMALL_STATE(33)] = 1846,
  [SMALL_STATE(34)] = 1876,
  [SMALL_STATE(35)] = 1906,
  [SMALL_STATE(36)] = 1933,
  [SMALL_STATE(37)] = 1957,
  [SMALL_STATE(38)] = 1981,
  [SMALL_STATE(39)] = 2000,
  [SMALL_STATE(40)] = 2019,
  [SMALL_STATE(41)] = 2038,
  [SMALL_STATE(42)] = 2057,
  [SMALL_STATE(43)] = 2072,
  [SMALL_STATE(44)] = 2095,
  [SMALL_STATE(45)] = 2114,
  [SMALL_STATE(46)] = 2137,
  [SMALL_STATE(47)] = 2149,
  [SMALL_STATE(48)] = 2161,
  [SMALL_STATE(49)] = 2179,
  [SMALL_STATE(50)] = 2197,
  [SMALL_STATE(51)] = 2209,
  [SMALL_STATE(52)] = 2221,
  [SMALL_STATE(53)] = 2239,
  [SMALL_STATE(54)] = 2256,
  [SMALL_STATE(55)] = 2275,
  [SMALL_STATE(56)] = 2292,
  [SMALL_STATE(57)] = 2311,
  [SMALL_STATE(58)] = 2328,
  [SMALL_STATE(59)] = 2347,
  [SMALL_STATE(60)] = 2366,
  [SMALL_STATE(61)] = 2385,
  [SMALL_STATE(62)] = 2404,
  [SMALL_STATE(63)] = 2423,
  [SMALL_STATE(64)] = 2440,
  [SMALL_STATE(65)] = 2459,
  [SMALL_STATE(66)] = 2476,
  [SMALL_STATE(67)] = 2486,
  [SMALL_STATE(68)] = 2502,
  [SMALL_STATE(69)] = 2518,
  [SMALL_STATE(70)] = 2532,
  [SMALL_STATE(71)] = 2548,
  [SMALL_STATE(72)] = 2558,
  [SMALL_STATE(73)] = 2568,
  [SMALL_STATE(74)] = 2584,
  [SMALL_STATE(75)] = 2594,
  [SMALL_STATE(76)] = 2608,
  [SMALL_STATE(77)] = 2618,
  [SMALL_STATE(78)] = 2632,
  [SMALL_STATE(79)] = 2642,
  [SMALL_STATE(80)] = 2658,
  [SMALL_STATE(81)] = 2674,
  [SMALL_STATE(82)] = 2684,
  [SMALL_STATE(83)] = 2698,
  [SMALL_STATE(84)] = 2714,
  [SMALL_STATE(85)] = 2724,
  [SMALL_STATE(86)] = 2734,
  [SMALL_STATE(87)] = 2744,
  [SMALL_STATE(88)] = 2754,
  [SMALL_STATE(89)] = 2764,
  [SMALL_STATE(90)] = 2774,
  [SMALL_STATE(91)] = 2784,
  [SMALL_STATE(92)] = 2794,
  [SMALL_STATE(93)] = 2804,
  [SMALL_STATE(94)] = 2814,
  [SMALL_STATE(95)] = 2827,
  [SMALL_STATE(96)] = 2840,
  [SMALL_STATE(97)] = 2853,
  [SMALL_STATE(98)] = 2866,
  [SMALL_STATE(99)] = 2879,
  [SMALL_STATE(100)] = 2888,
  [SMALL_STATE(101)] = 2901,
  [SMALL_STATE(102)] = 2914,
  [SMALL_STATE(103)] = 2927,
  [SMALL_STATE(104)] = 2940,
  [SMALL_STATE(105)] = 2953,
  [SMALL_STATE(106)] = 2962,
  [SMALL_STATE(107)] = 2971,
  [SMALL_STATE(108)] = 2984,
  [SMALL_STATE(109)] = 2997,
  [SMALL_STATE(110)] = 3007,
  [SMALL_STATE(111)] = 3017,
  [SMALL_STATE(112)] = 3027,
  [SMALL_STATE(113)] = 3037,
  [SMALL_STATE(114)] = 3047,
  [SMALL_STATE(115)] = 3055,
  [SMALL_STATE(116)] = 3063,
  [SMALL_STATE(117)] = 3071,
  [SMALL_STATE(118)] = 3079,
  [SMALL_STATE(119)] = 3087,
  [SMALL_STATE(120)] = 3095,
  [SMALL_STATE(121)] = 3103,
  [SMALL_STATE(122)] = 3113,
  [SMALL_STATE(123)] = 3121,
  [SMALL_STATE(124)] = 3131,
  [SMALL_STATE(125)] = 3139,
  [SMALL_STATE(126)] = 3146,
  [SMALL_STATE(127)] = 3153,
  [SMALL_STATE(128)] = 3160,
  [SMALL_STATE(129)] = 3167,
  [SMALL_STATE(130)] = 3174,
  [SMALL_STATE(131)] = 3181,
  [SMALL_STATE(132)] = 3188,
  [SMALL_STATE(133)] = 3195,
  [SMALL_STATE(134)] = 3202,
  [SMALL_STATE(135)] = 3209,
  [SMALL_STATE(136)] = 3216,
  [SMALL_STATE(137)] = 3223,
  [SMALL_STATE(138)] = 3230,
  [SMALL_STATE(139)] = 3237,
  [SMALL_STATE(140)] = 3244,
  [SMALL_STATE(141)] = 3251,
  [SMALL_STATE(142)] = 3258,
  [SMALL_STATE(143)] = 3265,
  [SMALL_STATE(144)] = 3272,
  [SMALL_STATE(145)] = 3279,
  [SMALL_STATE(146)] = 3286,
  [SMALL_STATE(147)] = 3293,
  [SMALL_STATE(148)] = 3300,
  [SMALL_STATE(149)] = 3307,
  [SMALL_STATE(150)] = 3314,
  [SMALL_STATE(151)] = 3321,
  [SMALL_STATE(152)] = 3328,
  [SMALL_STATE(153)] = 3335,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_array_element, 5),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_array_element, 5),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_array_element, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_array_element, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(41),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2), SHIFT_REPEAT(41),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_basic_string_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_string, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(37),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat2, 2), SHIFT_REPEAT(36),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_string, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_string, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(65),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2), SHIFT_REPEAT(65),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multiline_literal_string_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 7),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 8),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 4, .production_id = 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(80),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 2),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_string_repeat1, 2), SHIFT_REPEAT(80),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_literal_string, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_basic_string, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 3, .production_id = 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_literal_string, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_basic_string, 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_table, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dotted_key, 3),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat2, 2), SHIFT_REPEAT(23),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2), SHIFT_REPEAT(35),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_key, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inline_table_repeat1, 2, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_pair, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [442] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
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
#ifdef __cplusplus
}
#endif
