/*
Aim WAp to define a counter function to print how many times the function is called, use storage classes
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div:        : A
Department  : Artificial Intelligence & Data Science
*/

#include <stdio.h>

void counter()
{
    static int count=0;
    count++;
    printf("Counter Function Called : %d\n", count);
}

int main()
{
    printf("\t\t\t *** Storage Class *** \n\n");

     for(int i=1;i<=15;i++)
    {
        counter();
    }

    return 0;
}
