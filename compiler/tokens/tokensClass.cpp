#include "tokens.cpp"

class Tokens
{
    class Operators
    {
        class Logical_Oprs
        {
            class and_opr
            {
                const char *signs[2] = {"and", "&"};
            };
            class eq_opr
            {
                const char *signs[1] = {"=="};
            };
            class belowThan
            {
                const char *signs[1] = {"<"};
            };
            class greaterThan
            {
                const char *signs[1] = {">"};
            };
            class belowThanOrEq
            {
                const char *signs[1] = {"<="};
            };
            class greaterThanOrEq
            {
                const char *signs[1] = {">="};
            };
            class notEq
            {
                const char *signs[1] = {"!="};
            };
            class Not
            {
                const char *signs[1] = {"!"};
            };
            class Or
            {
                const char *signs[2] = {"or", "|"};
            };
        };
        class Arithmetic
        {
            class addition
            {
                const char *signs[1] = {"+"};
            };
            class substract
            {
                const char *signs[1] = {"-"};
            };
            class divide
            {
                const char *signs[1] = {"/"};
            };
            class multiply
            {
                const char *signs[1] = {"*"};
            };
            class modulo
            {
                const char *signs[1] = {"%"};
            };
        };
        class Assignment
        {
            class assign
            {
                const char *signs[1] = {"="};
            };
        };
        class Punctuators{
            class semi_circular_brac{
                const char *signs[1][2] = {{"(",")"}}; 
            };
            class curvy_brac{
                const char *signs[1][2] = {{"{","}"}};
            };
            class sqr_brac{
                const char *signs[1][2] = {{"[","]"}};
            };
        };
    };
};
