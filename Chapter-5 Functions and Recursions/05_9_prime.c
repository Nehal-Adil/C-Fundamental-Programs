// Write a function to find prime numbers in given range

#include <stdio.h>

// Function Declarations
int isprime(int num);
int printprimes(int lowerlimit, int upperlimit);

int main()
{
    int lowerlimit, upperlimit;
    printf("Enter the the Limits\n");
    printf("Lowerlimit: ");
    scanf("%d", &lowerlimit);
    printf("Upperlimit: ");
    scanf("%d", &upperlimit);
    printf("Prime Numbers between %d and %d are: ", lowerlimit, upperlimit);
    printprimes(lowerlimit, upperlimit);

    return 0;
}

//Function to print prime numbers
int printprimes(int lowerlimit, int upperlimit)
{
    while (lowerlimit <= upperlimit)
    {
        // Calling function to check if the lowerlimit is prime or not.
        
        if (isprime(lowerlimit)) 
        {
            printf("%d, ", lowerlimit);
        }
        lowerlimit++;
    }
}

//Function to check if the number is prime or not
int isprime(int num)
{
    int i;
    if (num<=1)
    {
        return 0;
    }
    
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}