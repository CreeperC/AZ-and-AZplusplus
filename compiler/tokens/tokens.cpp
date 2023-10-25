
#include "tokensClass.cpp"
#include <vector>
using namespace std;

class Dict
{
public:
    class DNode
    {
    public:
        const char *value = value;
        const char *key = key;
    };

    int DSize = 0;
    vector<DNode> self;

    void add(const char *key, const char *value)
    {
        DNode newvar;
        newvar.key = key;
        newvar.value = value;
        self.push_back(newvar);
        DSize++;
    };
    void remove(const char *key)
    {
        for (int i = 0; i < self.size(); i++)
        {
            if (key == self[i].key)
            {
                self.erase(self.begin() + 1);
                DSize--;
                return;
            };
        };
    };
    DNode getbyPo(int position)
    {
        return self[position];
    };
    DNode getbyKey(const char *key)
    {
        int i;
        bool found = false;
        for (i = 0; i < self.size(); i++)
        {
            if (key == self[i].key)
            {
                found = true;
                break;
            };
        };
        return self[i];
    };
};

namespace tokenslist
{
    struct Extra
    {
        const char *commentTok[2] = {
            "/", "/"};
        const char *SingleLiQuo[2] = {
            "\"",
            "'"};
        const char *DoubleLiQuo[2] = {
            "'''",
            "\"\"\""};
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
            "True"};
        const char *nulls[4] = {
            "null",
            "void",
            "none",
            "nan"};
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
            "for"};
        const char *ifElse[3] = {
            "if",
            "else",
            "elif"};
        const char *processKeywords[3] = {
            "continue",
            "break",
            "return"};
    };

};

