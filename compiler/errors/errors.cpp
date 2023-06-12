#include <fstream>
using namespace std;


class SrcfileNotFoundErr : public exception
{
private:
    char *message;

public:
    const char *what()
    {
        return "Source file doesn't exist";
    }};