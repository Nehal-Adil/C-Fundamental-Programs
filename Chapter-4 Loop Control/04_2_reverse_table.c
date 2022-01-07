// Write a program to print a multiplication table of 10 in reversed order

#include <stdio.h>

int main()
{
    int i = 10, num;
    printf("Enter any number: ");
    scanf("%d", &num);

    while (i)
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i--;
    }

    return 0;
}