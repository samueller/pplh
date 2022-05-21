module.exports = grammar({
    name: 'pplh',

    word: $ => $.identifier,

    rules: {
        program: $ => seq(repeat1($.edges), $.import),

        edges: $ => choice(
            seq($.identifier, choice('->', '→'), $.identifier),
            seq($.edges, choice('->', '→'), $.identifier)
        ),

        import: $ => seq('import', '"', $.url, '"'),

        identifier: $ => /[a-zA-Z_]+/,

        url: $ => /[^\s"]+/
    }
})
