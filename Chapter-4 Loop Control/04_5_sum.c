// Write a program to sum the first n natural numbers using a while loop.

#include <stdio.h>

int main()
{

    int num, i = 1, sum = 0;
    printf("Enter the upperlimit: ");
    scanf("%d", &num);
    printf("Sum of natual numbers from 1 to %d is ", num);

    while (i <= num)
    {
        sum += i;
        i++;
    }
    printf("%d ", sum);

    return 0;
}