// Write a Program to find sum of array elements

#include <stdio.h>
#define MAX_SIZE 100
int main()
{

    int arr[MAX_SIZE];
    int i, n, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum of the elements in the araay is: %d", sum);

    return 0;
}