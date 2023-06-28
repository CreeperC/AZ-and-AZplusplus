class func
{
private:
    char *name;
    char *code;
    struct parameters
    {
    };
    func(char *name, char *code, char *parameters[])
    {
        
    }
};

char DLQ1[] = "\"\"\"";
char DLQ2[] = {'\'', '\'', '\''};
// if you make this only char* it gives warning.
const char *keywords[] = {"and", "any", "bool", "break", "case", "char", "class", "continue", "else", "false", "False", "float", "for", "if", "int", "or", "private", "protected", "public", "return", "switch", "void", "null", "none", "true", "True", "while"};
struct tokens
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
    // if you make this only char* it gives warning.
    const char *keywords[28] = {
        "and", "any", "bool", "break", "case", "char", "class", "continue", "else", "false", "False", "float", "for", "if", "int", "or", "private", "protected", "public", "return", "switch", "void", "null", "none", "true", "True", "while"};
};
