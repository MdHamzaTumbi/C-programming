/*
Aim : WAP to find the factorial of a number using recursive function
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div:        : A
Department  : Artificial Intelligence & Data Science
*/

#include<stdio.h>
int factorial_recursive(int num){
 if (num<=1){
    return 1;
 }
 return num*factorial_recursive(num-1);
 }
int main(){
     printf("\t\t\t *** Recursive Factorial function *** \n\n");
 int num ;
 printf("Enter Number :");
 scanf("%d",&num);
 printf("The factorial of %d is %d",num,factorial_recursive(num));
return 0;
 }
