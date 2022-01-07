// Write a Program to Find GCD of two Numbers

#include<stdio.h>

int main(){
    int i, num1, num2, gcd;
    printf("Enter the values of numbers to find GCD\n");
    printf("Number1: ");
    scanf("%d", &num1);
    printf("Number2: ");
    scanf("%d", &num2);

        for(i=0; i<=num1 && i<=num2; i++){
            if(num1%i==0 && num2%i==0){
                gcd=i;
            }
        }
        printf("GCD of %d and %d is %d", num1, num2, gcd);

    return 0;
}