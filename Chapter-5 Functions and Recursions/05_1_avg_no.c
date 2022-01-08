// Write a program using functions to find the average of three numbers.

#include<stdio.h>

float avgfunc(int a, int b, int c);

int main(){
    int num1, num2, num3; 
    float avg;
    printf("Enter three numbers\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);

    avg= avgfunc(num1, num2, num3);

    printf("The average is %f", avg);
    return 0;
}

float avgfunc(int a, int b, int c){
    float result;
    result = (float)(a+b+c)/3;
    return result;
}