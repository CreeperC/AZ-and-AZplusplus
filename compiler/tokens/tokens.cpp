
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
        /* data */
    };
};
