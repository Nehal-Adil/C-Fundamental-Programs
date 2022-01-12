// Write a Program to input and print array elements

#include <stdio.h>
#define MAX_SIZE 100  //max array size

int main()
{
    int arr[MAX_SIZE];  //declaring array
    int i, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

// taking inputs of array from the user

    printf("Enter %d elements in the array: \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

// printing the array

    printf("\nArray = ");
    for (i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}