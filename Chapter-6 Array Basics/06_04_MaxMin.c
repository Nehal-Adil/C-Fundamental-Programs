// Write a C program to find maximum and minimum element in array

#include <stdio.h>
#define MAX_SIZE 100

int main()
{

    int arr[MAX_SIZE];
    int i, size, max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array: \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

//assuming the first element of the array is the maximum and minimum value

    max = arr[0];
    min = arr[0];

// now every element will be compared to the first element for maximum and minimum values.

    for (i = 1; i < size; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum Element = %d\n", max);
    printf("Minimum Element = %d", min);

    return 0;
}