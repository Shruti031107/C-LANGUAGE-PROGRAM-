#include<stdio.h>
#include<conio.h>
int main()
{
    char op;
    double num1,num2;
    
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&op);
    printf("Enter two numbers:");
    scanf("%f %f,&num1,&num2");

    switch(op)
    {
        case '+':
        printf("Result=%.21f \n",num1+num2);
        break;

        case '-':
        printf("Result=%.21f \n",num1-num2);
        break;

        case '*':
        printf("Result=%.21f \n",num1*num2);
        break;

        case '/':
        printf("Result=%.2f1 \n",num1/num2);
        break;

        default :
        printf("Invalid operator \n");

    }  

    getch();
    return 0;

}