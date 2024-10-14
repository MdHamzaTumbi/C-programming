/*WAP to find the sum of all the odd numbers between numbers entered by the user.*/

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
