/*
Aim : WAP to find the factorial of a number using iterative function
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div:        : A
Department  : Artificial Intelligence & Data Science
*/

#include<stdio.h>
int factorial_iterative(int num){
int prod=1;
for (int i= 1; i <= num;i++)
{
    prod*=i;
}
 return prod;}

 int main(){
     printf("\t\t\t *** Iterative Factorial function *** \n\n");
 int num ;
 printf("Enter Number :");
 scanf("%d",&num);
 printf("The factorial of %d is %d",num,factorial_iterative(num));
return 0;
 }

