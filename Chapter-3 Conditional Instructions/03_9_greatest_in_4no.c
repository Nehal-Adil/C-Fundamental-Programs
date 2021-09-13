// Write a program to find the greatest of four numbers entered by the user.

#include<stdio.h>

int main(){

    int num1, num2, num3, num4;
    printf("Enter the value of all the numbers\n");
    
    printf("Number 1 = ");
    scanf("%d", &num1);
    printf("Number 2 = ");
    scanf("%d", &num2);    
    printf("Number 3 = ");
    scanf("%d", &num3);
    printf("Number 4 = ");
    scanf("%d", &num4);
    
    if (num1>num2)
    {
        if (num1>num3)
        {
            if (num1>num4)
            {
                printf("%d is the greatest", num1);
            }
            else{
                printf("%d is the greatest", num4);
            }
        }
        
    }
    else if (num2>num3)
    {
        if (num2>num4)
        {
            printf("%d is the greatest", num2);
        }
        else{
            printf("%d is the greatest", num4);
        }
    }   
        else if (num3>num4)
        {
        printf("\n%d is the greatest", num3);
        }
        else{
        printf("\n%d is the greatest", num4);
        }
    

    return 0;
}