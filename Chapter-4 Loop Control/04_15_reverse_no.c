// Write a Program to Reverse a Number

#include <stdio.h>

int main()
{
    long num;
    int rev = 0, rem;
    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    printf("Reversed number is: %d", rev);
    return 0;
}