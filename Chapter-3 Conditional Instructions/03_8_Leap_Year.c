// Write a program to find whether a year entered by the user is a leap year or not. Take the year as input from the user.

#include<stdio.h>

int main(){
    int year;
    printf("Year: ");
    scanf("%d", &year);

    if (year%400 == 0)
    {
        printf("LEAP YAER");
    }
    else if(year%100 == 0)
    {
        printf("NOT A LEAP YEAR");
    }
    else if(year%4 == 0)
    {
        printf("LEAP YEAR");
    }
    else{
        printf("NOT A LEAP YEAR");
    }
    
    return 0;
}


//  ******* LOGIC *******
//  1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
//  2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
//  3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
//  4. The year is a leap year (it has 366 days).
//  5. The year is not a leap year (it has 365 days).