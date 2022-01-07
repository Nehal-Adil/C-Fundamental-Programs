// Write a Program to Check Whether a Number is Palindrome or Not

// An integer is a palindrome if the reverse of that number is equal to the original number.

#include<stdio.h>

int main(){
    int num, rev=0, rem, original;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if(original == rev){
        printf("PALINDROME NUMBER");
    }
    else{
        printf("NOT PALINDROME");
    }

    return 0;
}