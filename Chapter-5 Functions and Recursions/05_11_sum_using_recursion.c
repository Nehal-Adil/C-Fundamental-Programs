// Write a program to find sum of natural numbers from 1 to n using recursion

#include<stdio.h>

int sumfunc(int lowerlimit, int upperlimit);

int main(){
    int lowerlimit, upperlimit, sum;
    printf("Enter the the Limits\n");
    printf("Lowerlimit: ");
    scanf("%d", &lowerlimit);
    printf("Upperlimit: ");
    scanf("%d", &upperlimit);

    sum = sumfunc(lowerlimit, upperlimit);
    printf("Sum of Natural Numbers between %d and %d are: %d", lowerlimit, upperlimit, sum);
    return 0;
}

int sumfunc(int lowerlimit, int upperlimit){
    if(lowerlimit > upperlimit){
        return 0;
    }else{
        return lowerlimit + sumfunc(lowerlimit + 1, upperlimit);
    }
}