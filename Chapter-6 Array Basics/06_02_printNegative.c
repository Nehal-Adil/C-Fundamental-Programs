// Write a Program to print negative elements in array

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array: \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("All the negative numbers are: ");
    for (i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d, ", arr[i]);
        }
    }

    return 0;
}