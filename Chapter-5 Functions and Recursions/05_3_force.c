// Write a function to calculate the force of attraction on a body of mass m exerted by earth. (g=9.8m/S2)

#include <stdio.h>

float cal_force(float mass)
{
    float force, g = 9.8;
    force = mass * g;
    return force;
}

int main()
{
    float m, g = 9.8;
    printf("Enter the mass of the body: ");
    scanf("%f", &m);
    printf("The force of attraction on the body is: %f", cal_force(m));
    return 0;
}
