// Write a Program to copy array elements to another array

#include<stdio.h>
#define MAX_SIZE 100

int main(){
    int arr[MAX_SIZE], copyarr[MAX_SIZE];  
    int i, size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements in the array: \n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array = ");
    for (i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }

    //Copy all elements from original array to copied array

    for ( i = 0; i < size; i++)
    {
        copyarr[i] = arr[i];
    }
    printf("\nCopied Array = ");
    for (i = 0; i < size; i++)
    {
        printf("%d, ", copyarr[i]);
    }

    return 0;
}