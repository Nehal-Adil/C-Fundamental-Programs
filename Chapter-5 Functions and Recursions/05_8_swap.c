// Write a function to swap two numbers.

#include <stdio.h>

int swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nNum1: %d", a);
    printf("\nNum2: %d", b);
}

int main()
{
    int num1, num2;
    printf("Num1: ");
    scanf("%d", &num1);
    printf("Num2: ");
    scanf("%d", &num2);
    printf("Swapped numbers are:");
    swap(num1, num2);    
    return 0;
}