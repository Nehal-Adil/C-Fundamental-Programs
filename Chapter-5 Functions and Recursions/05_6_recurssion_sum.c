// Write a recursive function to calculate the sum of first n natural numbers.

#include <stdio.h>

int sum_func(int n)
{
    if (n != 0)
    {
        return n + sum_func(n - 1);
    }
    else
    {
        return n;
    }
}

int main()
{
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);
    printf("Sum of 1 to %d is: %d", num, sum_func(num));
    return 0;
}