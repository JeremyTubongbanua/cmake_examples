#include <stdio.h>
#include "add.h"

int main()
{
    printf("Hello, World!\n");
    int a = 3;
    int b = 1;
    int c = add(a, b);
    printf("c=%d\n", c);
    return 0;
}