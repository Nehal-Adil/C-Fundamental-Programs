// Write a program to calculate the factorial of a given number using for loop.

#include <stdio.h>

int main()
{
    int fact = 1, i, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The factorial of %d is %d", n, fact);
    return 0;
}