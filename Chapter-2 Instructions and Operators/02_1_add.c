// Write a program to add two integers

#include <stdio.h>

int main()
{
    int num1, num2, sum;
    printf("Enter the value of number1: ");
    scanf("%d", &num1);
    printf("Enter the value of number2: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Sum is %d", sum);
    return 0;
}