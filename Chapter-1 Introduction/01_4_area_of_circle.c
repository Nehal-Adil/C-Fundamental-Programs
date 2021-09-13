// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

#include<stdio.h>

int main()
{
    float r, h, area;
    printf("Radius: ");
    scanf("%f", &r);
    area= 3.14*r*r;
    printf("The radius of the circle is %0.2f", area);

    printf("\nNow enter the height of the cylinder: ");
    scanf("%f", &h);
    area= 3.14*r*r*h;
    printf("The area of the cylinder is %0.2f", area);
}