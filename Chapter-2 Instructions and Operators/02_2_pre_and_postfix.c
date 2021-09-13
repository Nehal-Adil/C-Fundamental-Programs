// Write a program to use prefix and postfix modes

#include <stdio.h>

int main()
{
    int a = 7, b = 10;
    printf("\n%d %d", a++, ++b);
    printf("\n%d %d", a, b);
    printf("\n%d %d", a--, --b);
    printf("\n%d %d", a, b);
    return 0;
}