// Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

#include<stdio.h>

int main(){

    float Celsius, Fahrenheit;
    printf("Enter the Celsius: ");
    scanf("%f", &Celsius);
    Fahrenheit =((Celsius*9)/5)+32;
    printf("Celsius in Farenheit is %f", Fahrenheit);
    return 0;
}