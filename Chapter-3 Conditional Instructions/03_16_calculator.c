// Write a program to create Simple Calculator using switch case

#include <stdio.h>

int main()
{

    double num1, num2, ans;
    char op;

    printf("Choose your operator: ");
    scanf("%c", &op);
    printf("Enter the values of two numbers: \n");
    printf("Num1 = ");
    scanf("%lf", &num1);
    printf("Num2 = ");
    scanf("%lf", &num2);

    switch (op)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    default:
        printf("Invalid Operator!!");
        break;
    }

    printf("%0.2lf %c %0.2lf = %0.2lf", num1, op, num2, ans);

    return 0;
}