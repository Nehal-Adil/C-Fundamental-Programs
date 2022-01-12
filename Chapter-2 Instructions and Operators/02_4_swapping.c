// Write a C program to swap two numbers without using third variable.

#include<stdio.h>

int main(){
    int num1, num2;
    printf("Num1 = ");
    scanf("%d", &num1);
    printf("Num2 = ");
    scanf("%d", &num2);
    
    num1 = num1 + num2;
    num2= num1-num2;
    num1=num1-num2;

    printf("After Swapping: \n");
    printf("Num1 = %d", num1);
    printf("\nNum2 = %d", num2);

    return 0;
}