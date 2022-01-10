/* 
Write a function that can compute b^e for fairly large e in, at  worst, O(log2 e) time.
Bonus points if it's recursive. Double bonus points if it's tail recursive.
And triple bonus points if it works for any numeric type b and returns the same type as the answer.
It's permissable for the result to be undefined behavior if the answer would overflow b.

e is an unsigned int.
*/
#include <iostream>

template<typename T>
T exponent(const T& base, unsigned int exp);

int main(){

    return 0;
}

template<typename T>
T exponent(const T& base, unsigned int exp)
{
    if(exp == 0)
    {
        return 1;
    }
    if(exp == 1)
    {
        return base;
    }
    return exponent(base, exp/2) * exponent(base, exp/2) * (exp%2 * base);
}