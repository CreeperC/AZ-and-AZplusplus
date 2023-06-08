#include <iostream>
#include <fstream>
#include <string>
#include "tokens/tokens.cpp"

using namespace std;




// all functions
string commentsOut(string lineOfCode)
{
    string linevar = "";
    for (int i = 0; i<lineOfCode.length();i++)
    {
        if (lineOfCode[i] != tokens().commentTok[0] && lineOfCode[i+1] !=  tokens().commentTok[1]){
            linevar = linevar + lineOfCode[i];
        } else{
            return linevar;
        }
    }
    return linevar;
    
}
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
string getSrcStr(char *filepath)
// dividing the code into strings & non strings & also excluding comments:
{
    ifstream file(filepath);
    string filevar;
    string filestr;
    while (getline(file, filevar))
    {
        // char prev;
        filestr = filestr + commentsOut(filevar) + string("\n");
    }
    return filestr;
}
int main()
{
    // getting source code
    char filepath[] = "hello.azlang";
    string srcstr = getSrcStr(filepath);
    cout<<srcstr<<endl;
}