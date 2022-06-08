module.exports = grammar({
  name: 'pplh',

  word: $ => $.identifier,

  rules: {
    program: $ => seq(repeat1($.edges), repeat1($.imports), $.probability),

    edges: $ =>
      choice(
        seq($.identifier, choice('->', '→'), $.identifier),
        seq($.edges, choice('->', '→'), $.identifier)
      ),

    imports: $ => seq('import', '"', $.url, '"'),

    probability: $ => seq('Pr', '(', $.query, optional($.cond), ')'),
    cond: $ => seq('|', $.query),

    query: $ => commaSep1($.identifier),

    identifier: $ => /[a-zA-Z_]+/,

    url: $ => /[^\s"]+/,
  },
})

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}
