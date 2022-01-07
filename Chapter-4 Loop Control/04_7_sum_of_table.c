// Write a program to calculate the sum of the numbers occurring in the multiplication table of 8.(Consider 8x1 to 8x10)

#include <stdio.h>

int main()
{
    int i = 1, num, sum = 0;
    printf("Enter any number: ");
    scanf("%d", &num);

    while (i <= 10)
    {
        sum = sum + num * i;
        i++;
    }
    printf("%d", sum);

    return 0;
}