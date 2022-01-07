// Write a program to print first n natural numbers using for loop and also print n natural numbers in reverse order.

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the upperlimit: ");
    scanf("%d", &n);
    printf("Natural number from 1 to %d:\n", n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    printf("\nIn Reverse Order:\n");

    for (i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}