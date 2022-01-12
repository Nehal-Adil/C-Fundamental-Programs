// Write a C program to count even and odd elements in array

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size, even, odd;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array: \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Assuming that there are 0 even and odd elements

    even = 0;
    odd = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    // for every iteration if the element is even or odd the count will increase.

    printf("The number of even element in this array is %d", even);
    printf("\nThe number of odd element in this array is %d", odd);

    return 0;
}