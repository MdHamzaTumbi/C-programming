/*
Aim : WAP to find the largest number in an array
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div:        : A
Department  : Artificial Intelligence & Data Science
*/

#include <stdio.h>

int main()
{
    int n,i,a[100],large;
    printf("Enter the number of elements ");
    scanf("%d",&n);

    for(i=0;i<=n-1;i++)
    {
        printf("Enter a value ");
        scanf("%d",&a[i]);
    }

    large=a[0];
    for(i=0;i<=n-1;i++)
    {
        if(large<a[i])
            large=a[i];
    }

    printf("The largest number is %d",large);
    return 0;
}
