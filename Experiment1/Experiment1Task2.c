/*
Aim: WAP to get students PCM marks from the user and find the average. Use conditional
operator to print if the student is eligible for admission. Eligibility criteria is 50% in
PCM.
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241015
Roll No.    : 15
Div         : A
Department  : Artificial Intelligence & Data Science
*/

#include <stdio.h>

int main()
{
    int p,c,m,avg;
    printf("Enter Physics Marks:\t");
    scanf("%d",&p);
    printf("Enter Maths Marks:\t");
    scanf("%d",&m);
    printf("Enter Chemistry Marks:\t");
    scanf("%d",&c);
    avg=(p+c+m)/3;
    (avg>=50)?printf("You are eligible for admission"):printf("You are not eligible for admission");
    return 0;
}
