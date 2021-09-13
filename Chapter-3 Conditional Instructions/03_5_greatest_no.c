// Write a Program to Find the Largest Number Among Three Numbers

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the value to check the largest number: \n");
    printf("Number1: ");
    scanf("%d", &num1);
    printf("Number2: ");
    scanf("%d", &num2);
    printf("Number3: ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is the largest number", num1);
        }
        else
        {
            printf("%d is the largest number", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is the largest number", num2);
        }
        else
        {
            printf("%d is the largest number", num3);
        }
    }
    return 0;
}