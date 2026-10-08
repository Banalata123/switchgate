#include<stdio.h>
int main()
{
    int num1,num2;
    char op;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    printf("Enter an operator (+, -, *, /): ");  
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
            printf("Result= %d",num1+num2);
            break;
        case '-':
            printf("Result= %d",num1-num2);
            break;
        case '*':
            printf("Result= %d",num1*num2);
            break;
        case '/':
            printf("Result= %d",num1/num2);
            break;
        default:
            printf("Invalid operator.");
    }
    return 0;
}