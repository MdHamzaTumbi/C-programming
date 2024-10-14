/*WAP to find if entered number is even or odd.*/

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
