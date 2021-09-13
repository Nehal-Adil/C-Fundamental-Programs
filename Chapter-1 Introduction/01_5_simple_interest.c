// Write a program to calculate simple interest for a set of values representing principle, no of years, and rate of interest.

#include<stdio.h>

int main()
{
    float p, r, t, SI;
    printf("Enter the following details to calculate Simple Interset\n");
    printf("Principle: ");
    scanf("%f", &p);
    printf("Rate of interset: ");
    scanf("%f", &r);
    printf("No. of Years: ");
    scanf("%f", &t);
    SI= (p*r*t)/100;
    printf("Simple Interest is: %f ", SI);
    return 0;
}