/*
Aim : WAP to add two numbers using pointers
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div:        : A
Department  : Artificial Intelligence & Data Science
*/

#include <stdio.h>

int main()
{
    int num1,num2,sum;
    int *ptr1, *ptr2;

    printf("\t\t *** Adding using Pointers *** \n\n");

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    ptr1=&num1;
    ptr2=&num2;

    sum=*ptr1 + *ptr2;

    printf("Sum of %d and %d is: %d\n", num1, num2, sum);\

    return 0;

}
