// Write a Program to Count Number of Digits in an Integer

#include<stdio.h>

int main(){
    long num;
    int count=0;
    printf("Enter a number: ");
    scanf("%lld", &num);

    while (num!=0)
    {
        num /= 10;
        count++;
    }

    printf("Number of digits: %d", count);
    
    return 0;
}