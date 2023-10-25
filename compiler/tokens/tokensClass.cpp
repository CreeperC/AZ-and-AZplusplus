#include <ostream>
#include <iostream>
using namespace std;


class Tokens
{
    public:
    class Extra
    {
        public:
        class commentTok
        {
            // //
        };
        class SingleLiQuo
        {
            public:
            class StartingSLiQuo
            {
                // "
            };
            class EndingSLiQuo
            {
                // "
            };
        };
        class DoubleLiQuo
        {
            public:
            class StartingDLiQuo{
                // """
            };
            class EndingDLiQuo{
                // """
            };
        };
    };
    class Operators
    {
        public:
        class Logical_Oprs
        {
            public:
            class and_opr
            {
                // & and
            };
            class eq_opr
            {
                // ==
            };
            class belowThan
            {
                // <
            };
            class greaterThan
            {
                // >
            };
            class belowThanOrEq
            {
                // <=
            };
            class greaterThanOrEq
            {
                // >=
            };
            class notEq
            {
                // !=
            };
            class Not
            {
                // !
            };
            class Or
            {
                // or |
            };
        };
        class Arithmetic
        {
            public:
            class addition
            {
                // +
            };
            class substract
            {
                // -
            };
            class divide
            {
                // /
            };
            class multiply
            {
                // *
            };
            class modulo
            {
                // %
            };
        };
        class Assignment
        {
            public:
            class assign
            {
                // this class is for assignment operator
            };
        };
        class Punctuators
        {
            public:
            class semi_circular_brac
            {
                public:
                class StartSemiCircleBrac
                {
                };
                class EndSemiCircleBrac
                {
                };
            };
            class curvy_brac
            {
                public:
                class StartCurvyBrac
                {
                };
                class EndCurvyBrac
                {
                };
            };
            class sqr_brac
            {
                public:
                class StartSqrBrac
                {
                };
                class EndSqrBrac
                {
                };
            };
        };
    };
    class Keywords
    {
        public:
        class fun
        {
            // this class is for function
        };
        class Class
        {
            // this class is for class
        };
        class Int
        {
            // this class is for int
        };
        class String
        {
            // this class is for strings
        };
        class Bool
        {
            public:
            // this class is for bool
            class True
            {
                // this class is for true bool
            };
            class False
            {
                // this class is for false bool
            };
        };
        class Float
        {
            // this class is for float
        };
        class Bytes
        {
            // this class is for bytes
        };
        class While
        {
            // this class is for while loop
        };
        class For
        {
            // this class is for for loop
        };
        class nulls
        {
            public:
            // this class is for full values
            class Null
            {
                // this class is for null
            };
            class Void
            {
                // this class is for void
            };
            class None
            {
                // this class is for none
            };
            class Nah
            {
                // this class if for Nah
            };
        };
        class controlflow
        {
            public:
            // this class is for "if","elif","else" statement
            class If
            {
                // this class is for "if" statement
            };
            class Else
            {
                // this class if for "else" statement
            };
            class Elif
            {
                // this class is for "elif" statement
            };
        };
        class ProcessKeywords
        {
            public:
            class Continue
            {
                // this class is for continue keyword
            };
            class Break
            {
                // this class is for break keyword
            };
            class Return
            {
                // this class is for return keyword
            };
        };
    };
};
