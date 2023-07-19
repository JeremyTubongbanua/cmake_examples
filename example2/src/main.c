

#include <stdio.h>
#include "math.h"

int main()
{
    double a = 2;
    double b = 3;
    printf("add(%f, %f)=%f\n", a, b, add(a, b));
    printf("subtract(%f, %f)=%f\n", a, b, subtract(a, b));
    printf("multiply(%f, %f)=%f\n", a, b, multiply(a, b));
    printf("power(%f, %f)=%f\n", a, b, power(a, b));

    return 0;
}