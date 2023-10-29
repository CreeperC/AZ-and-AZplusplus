#include <fstream>
using namespace std;


class SrcfileNotFoundErr : public exception
{
private:
    char *message;


    const char *what()
    {
        return "Source file doesn't exist";
    }};