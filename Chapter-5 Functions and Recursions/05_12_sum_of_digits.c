// Write a program to find sum of digits using recursion

#include <stdio.h>

int sum_of_digits(int num);

int main()
{
    int num, sum;
    printf("Enter any number: ");
    scanf("%d", &num);

    sum = sum_of_digits(num);
    printf("Sum of %d is %d", num, sum);
    return 0;
}

int sum_of_digits(int num)
{   
    // this condition will stop the recursion once the number is 0
    if(num == 0){
        return 0;
    }
    return ((num % 10) + sum_of_digits(num / 10));
}