// Write a program using recursion to calculate the nth element of the Fibonacci series.

#include<stdio.h>

int fibo_func(int n);

int main(){
    int num,i=0;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    for(int c=0; c<=num; c++){
        printf("%d ", fibo_func(i));
        i++;
    }
    return 0;   
}

int fibo_func(int n){
    {
    if(n<=1){
        return n;
    }
    else{
        return fibo_func(n-1)+fibo_func(n-2);
    }
}

}