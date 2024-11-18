/*
Aim: WAp to design menu driven calculator using switch and goto
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div:        : A
Department  : Artificial Intelligence & Data Science
*/

#include <stdio.h>

int main()
{
    float num1,num2,result;
    int mod_result;
    char operator;

    printf("\t\t\t *** Calculator *** \n\n");
    printf("\t Operators: \n");
    printf("\t\t + : Addition \n");
    printf("\t\t - : Subtraction \n");
    printf("\t\t * : Multiplication \n");
    printf("\t\t / : Division \n");
    printf("\t\t % : Modulus \n\n");

    repeat:

    printf("Enter First Operand : ");
    scanf("%f",&num1);
    printf("Enter Second  Operand : ");
    scanf("%f",&num2);
    printf("Enter Operator : ");
    scanf(" %c",&operator);

    switch(operator)
    {
        case '+':
            result=num1+num2;
            printf("%.1f + %.1f = %.1f ", num1,num2,result);
        case '-':
            result=num1-num2;
            printf("%.1f - %.1f = %.1f ", num1,num2,result);
            break;
        case '*':
            result=num1*num2;
            printf("%.1f * %.1f = %.1f ", num1,num2,result);
            break;
        case '/':
            if(num2 == 0)
            {
                printf("Cannot divide by Zero");
                break;
            }
            result=num1/num2;
            printf("%.1f / %.1f = %.1f ", num1,num2,result);
            break;
        case '%':
            mod_result = (int)num1 % (int)num2;
            printf("%.0f % % %.0f = %d ", num1,num2,mod_result);
            break;
        default:
            printf("Invalid Operator. Try Again");
    }
    printf("\nContinue? (Y/N) : ");
    scanf(" %c", &operator);
    if(operator == 'N' || operator == 'n')
    {
        printf("Thank You for using Calculator");
        return 0;
    }
    else
        goto repeat;
        return 0;

}
