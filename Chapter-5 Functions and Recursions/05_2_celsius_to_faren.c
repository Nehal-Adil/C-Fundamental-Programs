// Write a function to convert Celcius temperature into Fahrenheit.

#include<stdio.h>

float celsius_func(float c){
    float fahrenheit= (c*9)/5 +32;
    return fahrenheit;
}

int main(){
    float celsius;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("The temperature in Fahrenheit is %f", celsius_func(celsius));
    return 0;
}