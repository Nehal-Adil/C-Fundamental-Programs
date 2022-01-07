// Write a Program to Find LCM of two Numbers

#include <stdio.h>

int main()
{
    int num1, num2, max;
    printf("Enter two numbers\n");
    printf("Number1: ");
    scanf("%d", &num1);
    printf("Number2: ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM of %d and %d is %d", num1, num2, max);
            break;
        }
        max++;
    }
    return 0;
}