
char DLQ1[] = "\"\"\"";
char DLQ2[] = {'\'', '\'', '\''};
namespace tokenslist
{
        struct Extra
        {
            char commentTok[2] = {
                '/',
                '/'};
            char SingleLiQuo[2] = {
                '"',
                '\''};
            char *DoubleLiQuo[2] = {
                DLQ1,
                DLQ2};
        };
    struct Operators
    {
        const char *logical[10] = {
            "and",
            "&",
            "==",
            "<",
            ">",
            "<=",
            ">=",
            "!=",
            "!",
            "or"};
        const char *arithmetic[5] = {
            "+",
            "-",
            "/",
            "*",
            "%"};
        const char *assignment[1] = {
            "="};
        const char *punctuators[3][2] = {
            {"(", ")"}, {"{", "}"}, {"[", "]"}};
    };
    struct Predefined
    {
        const char *boolean[4] = {
            "true",
            "false",
            "False",
            "True"
        };
        const char *nulls[4] = {
            "null",
            "void",
            "none",
            "nan"
        };
    };
    struct Keywords
    {
        const char *definition[9] = {
            "fun",
            "class",
            "int",
            "string",
            "bool",
            "float",
            "bytes",
            "while",
            "for"
        };
        const char * ifElse[3] = {
            "if",
            "else",
            "elif"
        };
        const char *processKeywords[3] = {
            "continue",
            "break",
            "return"
        };
    };
    
    
}
