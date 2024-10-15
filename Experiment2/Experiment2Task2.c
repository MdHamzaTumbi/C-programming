/*
Aim: WAP to find the sum of all the odd numbers between numbers entered by the user.
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
    printf("\t\t\t***Sum of Odd Numbers***\n\n\n");
    int i,n,l,s=0,r;
    printf("Enter Start Number:");
    scanf("%d",&n);
    printf("Enter Ending Number");
    scanf("%d",&l);
    if(n<l)
    {
       for(i=n;i<=l;i++)
    {
        r=i%2;
        if(r!=0)
        {
            s=s+i;
        }
    }
     printf("Sum of all Odd Numbers between %d and %d = %d\n",n,l,s);
     return 0;
    }
    else
    {
        printf("The Program is having an Error");
    }

}
