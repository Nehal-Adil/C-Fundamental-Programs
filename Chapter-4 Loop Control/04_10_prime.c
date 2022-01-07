// Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main()
{

    int num, i, prime = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            prime = 1;
        }
    }
    if (num == 1)
    {
        printf("1 is not a prime number");
    }
    else if (num == 0)
    {
        printf("0 is not a prime number");
    }

    else
    {
        if (prime == 0)
        {
            printf("%d is a prime number", num);
        }
        else
        {
            printf("%d is not a prime number", num);
        }
    }

    return 0;
}