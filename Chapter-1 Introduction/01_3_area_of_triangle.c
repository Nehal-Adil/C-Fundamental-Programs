// Write a program to calculate the area of triangle.

#include<stdio.h>

int main()
{
    int base, height, area;
    printf("Base: ");
    scanf("%d", &base);
    printf("Height: ");
    scanf("%d", &height);
    area= (base*height)/2;
    printf("The area of the triangle is %d: ", area);
    return 0;
}

