#include "math.h"

#ifdef USE_RECURSIVE
double power(double a, double b)
{
    if(b <= 1)
        return a;
    return a * power(a, b-1);
}
#else
double power(double a, double b)
{
    double result = 1;
    for(int i = 0; i < b; i++)
        result *= a;
    return result;
}
#endif