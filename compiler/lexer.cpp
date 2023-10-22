#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "tokens/tokens.cpp"
#include "errors/errors.cpp"
using namespace std;
using namespace tokenslist;


// all classes
class StrNoStr
// This class used to know while converting if its a string or not a string object.
{
public:
    bool isStr; // It should be type...
    string self;

    StrNoStr(string body = "", bool isSt = false)
    {
        isStr = isSt;
        self = body;
    };
    void addstring(string chunk)
    {
        self = chunk;
    }
};

// all functions

string chartostr(char *cha)
// to avoid complexcity related to converting char* to str
{
    string str = cha;
    return cha;
}
char *strtocha(string str)
// to avoid complexcity related to converting string to char*
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
// to avoid complexcity related to converting char to char*
{
    char *chastar = new char[1];
    chastar[0] = cha;
    chastar[1] = '\0';
    return chastar;
}
int findInVec(vector<string> Vec, string finding)
// return index where a string which we are finding is located
{
    for (int i = 0; i < Vec.size(); i++)
    {
        if (Vec.at(i) == finding)
        {
            return i;
        }
    }
    return -1;
}
// vector<string> splitStr(string str, string splitTerms[])
// {
//     vector<string> i;
//     vector<string> splitTerms1 = splitTerms;
//     for (int e = 0; e < str.length(); e++)
//     {
//         if (findInVec(splitTerms1, ))
//         {
//         }
//     }
// }
string replace(string str, string oldstr, string newstr)
// used to replace a part/parts of string in a big string
{
    vector<int> sameIn;
    int oldlen = oldstr.length();
    int newlen = newstr.length();
    int extra = newlen - oldlen;
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
            }
            if (issame == true)
            {
                sameIn.push_back(i);
            }
        }
    }
    int j = 0;
    for (int i = 0; i < sameIn.size(); i++)
    {
        str.replace(sameIn[i] + j, oldlen, newstr);
        j = extra + j;
    }
    return str;
}
string commentsOut(string lineOfCode)
// used to put the comments out of the code.
{
    string linevar = "";
    for (int i = 0; i < lineOfCode.length(); i++)
    {
        if (lineOfCode[i] != Extra().commentTok[0] && lineOfCode[i + 1] != Extra().commentTok[1])
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
// split the code into string objects & noString objects
{
    vector<StrNoStr> arr;
    string localstr;
    bool modeStr = false;
    string quote;
    string now;
    for (int i = 0; i < code.length(); i++)
    {
        now = code[i];
        if (code[i] == Extra().SingleLiQuo[0] || code[i] == Extra().SingleLiQuo[1] || !(now.compare(chartostr(Extra().DoubleLiQuo[0]))) || !(now.compare(chartostr(Extra().DoubleLiQuo[1]))))
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
string breakdown(string code) // its return type has to change to vector<string>
// used to do operations on code(noString)
{
    vector<string> strVec;
    string newline = "\n";
    code = replace(code, newline, "");
    return code;
}
int main()
{
    // getting source code
    char filepath[] = ".\\AZC\\hello.azlang";
    string srcstr = getSrcStr(filepath);
    vector<StrNoStr> array = diviStrNoStr(srcstr);
    vector<string> chunksList;
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i].isStr == false)
        {
            array[i].self = breakdown(array[i].self);
        }
        else
        {
            chunksList.push_back(array[i].self);
        }
    }
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i].self<<" "<<array[i].isStr<<endl;
        cout << "\n\n\n\n";
    }
}