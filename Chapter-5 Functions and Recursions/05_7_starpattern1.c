// Write a program using functions to print the following pattern(first n lines)

#include<stdio.h>

void star_func(int n);

int main(){
    int row;
    printf("Enter number of rows: ");
    scanf("%d", &row);
    star_func(row);

    return 0;
}

void star_func(int n){
    if(n==1){
        printf("*\n");
        return;
    }
    star_func(n-1);
    for(int i=0; i<(2*n-1); i++){
        printf("*");
    }
    printf("\n");
}