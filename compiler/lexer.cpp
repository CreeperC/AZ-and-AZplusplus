#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "tokens/tokens.cpp"

using namespace std;

// all classes
class SrcfileNotFoundErr : public exception
{
private:
    char *message;

public:
    const char *what()
    {
        return "Source file doesn't exist";
    }
};
class StrNoStr
{
public:
    bool isStr;
    string self;

    StrNoStr(string body = "", bool isSt = false)
    {
        isStr = isSt;
        self = body;
    };
    void addstring(string chunk)
    {
        self.append(chunk);
    }
};

// all functions
string chartostr(char *cha)
{
    string str = cha;
    return cha;
}
char *strtocha(string str)
{
    char *cha = new char[str.length()];
    for (int i = 0; i <= int(str.length()); i++)
    {
        cha[i] = str[i];
    }
    cha[str.length()] = '\0';
    return cha;
}
char *chaTochaStar(char cha)
{
    char *chastar = new char[1];
    chastar[0] = cha;
    chastar[1] = '\0';
    return chastar;
}
string replace(string str, string oldstr, string newstr)
{
    vector<int> sameIn;
    int oldlen = oldstr.length();
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == oldstr[0])
        {
            bool issame = true;
            for (int j = 0; j < oldlen; j++)
            {
                if (!(str[i + j] == oldstr[j]))
                {
                    issame = false;
                }
                if (issame == true)
                {
                    sameIn.push_back(i);
                    i = oldlen;
                }
            }
        }
    }
    for (int i = 0; i < sameIn.size(); i++)
    {
        str.replace(sameIn[i], oldlen, newstr);
    }
    return str;
}
string commentsOut(string lineOfCode)
{
    string linevar = "";
    for (int i = 0; i < lineOfCode.length(); i++)
    {
        if (lineOfCode[i] != tokens().commentTok[0] && lineOfCode[i + 1] != tokens().commentTok[1])
        {
            linevar = linevar + lineOfCode[i];
        }
        else
        {
            return linevar;
        }
    }
    return linevar;
}
string getSrcStr(char *filepath)
// dividing the code into strings & non strings & also excluding comments:
{
    if (fopen(filepath, "r"))
    {
        ifstream file(filepath);
        string filevar;
        string filestr;
        while (getline(file, filevar))
        {
            filestr = filestr + commentsOut(filevar) + string("\n");
        }
        return filestr;
    }
    else
    {
        throw SrcfileNotFoundErr();
    }
}
vector<StrNoStr> diviStrNoStr(string code)
{
    vector<StrNoStr> arr;
    string localstr;
    bool modeStr = false;
    string quote;
    string now;
    for (int i = 0; i < code.length(); i++)
    {
        now = code[i];
        if (code[i] == tokens().SingleLiQuo[0] || code[i] == tokens().SingleLiQuo[1] || !(now.compare(chartostr(tokens().DoubleLiQuo[0]))) || !(now.compare(chartostr(tokens().DoubleLiQuo[1]))))
        {
            if (modeStr == false && quote == "") // for start string quote.
            {
                quote = code[i];
                modeStr = true;
                arr.push_back(StrNoStr(localstr, false));
                localstr = "";
            }
            else if (modeStr == true && quote != "" && !(now.compare(quote))) // for end string quote.
            {
                quote = "";
                modeStr = false;
                arr.push_back(StrNoStr(localstr, true));
                localstr = "";
            }
            else // quotes inside the string.
            {
                localstr.append(chartostr(chaTochaStar(code[i])));
            }
        }
        else // rest of the code, string text(excluded quotes).
        {
            localstr.append(chartostr(chaTochaStar(code[i])));
        }
    }
    arr.push_back(StrNoStr(localstr, true));
    return arr;
}
vector<string> lexer(string code){
    // code = code.replace('\n','');
}
int main()
{
    // getting source code
    char filepath[] = ".\\AZC\\hello.azlang";
    string srcstr = getSrcStr(filepath);
    vector<StrNoStr> array = diviStrNoStr(srcstr);
    for (int i = 0; i<array.size(); i++){
        if (array[i].isStr == false){
            /*
            
            Lexer Function!
            
            */
        } else{
            array[i] = array[i].self;
        }
    }
    // cout<<tokens().DoubleLiQuo[0];
}