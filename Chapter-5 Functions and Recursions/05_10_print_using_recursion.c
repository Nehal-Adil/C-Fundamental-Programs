// Write a program to print all natural numbers from 1 to n using recursion.

#include <stdio.h>

void printNaturalNum(int lowerlimit, int upperlimit);

int main()
{
    int lowerlimit, upperlimit;
    printf("Enter the the Limits\n");
    printf("Lowerlimit: ");
    scanf("%d", &lowerlimit);
    printf("Upperlimit: ");
    scanf("%d", &upperlimit);
    printf("Natural Numbers between %d and %d are: ", lowerlimit, upperlimit);
    printNaturalNum(lowerlimit, upperlimit);
    return 0;
}

void printNaturalNum(int lowerlimit, int upperlimit)
{
    if(lowerlimit > upperlimit){
        return;
    }
    printf("%d, ", lowerlimit);
    printNaturalNum(lowerlimit + 1, upperlimit);
}