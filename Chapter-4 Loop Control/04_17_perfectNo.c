// Write a program to check if the number is perfect number or not

/*
Perfect number is a positive integer which is equal to the sum of its proper positive divisors.
For example: 6 is the first perfect number
Proper divisors of 6 are 1, 2, 3
Sum of its proper divisors = 1 + 2 + 3 = 6.
Hence 6 is a perfect number.
*/

#include <stdio.h>

int main()
{
    int i, num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num / 2; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }

    if(sum == num && num > 0)
    {
        printf("%d is a PERFECT NUMBER", num);
    }
    else
    {
        printf("%d is NOT A PERFECT NUMBER", num);
    }

    return 0;
}