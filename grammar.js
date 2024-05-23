module.exports = grammar({
  name: 'kcl',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.function_definition,
      $.nonfn_definition
    ),

    function_definition: $ => seq(
      'fn',
      $.identifier,
      '=',
      $.parameter_list,
      '=>',
      '{',
      $.function_body,
      '}'
    ),

    identifier: $ => /[a-zA-Z][a-zA-Z0-9]*/,

    parameter_list: $ => seq(
      '(',
      repeat($.val),
      ')',
    ),

    nonfn_definition: $ => seq(
      choice('const', 'let'),
      $.identifier,
      '=',
      $.val
    ),

    function_body: $ => seq(
      repeat($._definition),
      $.return_stmt
    ),

    return_stmt: $ => seq(
      'return',
      $.val
    ),

    val: $ => choice(
      $._int,
      $.string,
      // TODO: other kinds of value
    ),

    _int: $ => {
      const decimalDigits = /\d+/;
      const signedInteger = seq(optional('-'), decimalDigits);

      return token(signedInteger);
    },

    string: $ => choice(
      seq('"', '"'),
      seq('\'', '\''),
      seq('"', $._string_content, '"'),
      seq('\'', $._string_content, '\''),
    ),

    _string_content: $ => repeat1(choice(
      $.string_content,
    )),

    string_content: _ => token.immediate(prec(1, /[^\\"\n]+/)),
  }
});

