
char DLQ1[] = "\"\"\"";
char DLQ2[] = {'\'', '\'', '\''};
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
};

