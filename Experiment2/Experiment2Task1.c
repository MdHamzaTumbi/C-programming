
/*
Aim: WAP to find if entered number is even or odd.
/*
WAP to find the sum of all the odd numbers between numbers entered by the user.
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div         : A
Department  : Artificial Intelligence & Data Science
*/

#include <stdio.h>

int main()
{
    int n;
    printf("***Even Odd Finder***\n\n\n");

    printf("Enter Number:");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("%d is Even",n);
        return 0;
    }
    else
    {
        printf("%d is Odd",n);
        return 0;

    }
}
