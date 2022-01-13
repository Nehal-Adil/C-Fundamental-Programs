// Write a C program to check whether triangle is valid or not if sides are given

#include <stdio.h>

int main()
{

    int side1, side2, side3;
    printf("Enter the values of the sides of the triangle: \n");
    printf("Side1 = ");
    scanf("%d", &side1);
    printf("Side2 = ");
    scanf("%d", &side2);
    printf("Side3 = ");
    scanf("%d", &side3);

    if ((side1 + side2) > side3)
    {
        if ((side2 + side3) > side1)
        {
            if ((side3 + side1) > side2)
            {
                printf("It's a valid Traingle");
            }
            else
            {
                printf("It's not a valid triangle");
            }
        }
        else
        {
            printf("It's not a valid triangle");
        }
    }
    else
    {
        printf("It's not a valid triangle");
    }

    return 0;
}