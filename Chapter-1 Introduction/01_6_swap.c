// Write a program to Swap Two Numbers

#include <stdio.h>

int main()
{
    int num1, num2, temp;
    printf("Enter the value of number 1: ");
    scanf("%d", &num1);
    printf("Enter the value of number 2: ");
    scanf("%d", &num2);

    // Logic
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swapping");
    printf("\nNumber1 = %d", num1);
    printf("\nNumber2 = %d", num2);

    return 0;
}