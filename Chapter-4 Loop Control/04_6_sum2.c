// Write a program to sum the first n natural numbers using a do while loop.

#include <stdio.h>

int main(){
    
    int i = 1, n, sum = 0;
    printf("Enter the upperlimit: ");
    scanf("%d", &n);
    printf("Sum of natual numbers from 1 to %d is ", n);

    do
    {
        sum += i;
        i++;
    } while (i <= n);

    printf("%d", sum);

    return 0;
}