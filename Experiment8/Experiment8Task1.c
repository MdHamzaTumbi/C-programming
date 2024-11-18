/*
Aim : WAP to find the length of a string without using library function.

Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div:        : A
Department  : Artificial Intelligence & Data Science
*/


#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    printf("\t\t\t*** String Length Finder ***\n\n\n");
    printf("Enter Your String: ");
    scanf("%[^\n]s", str);

    
    while (str[length] != '\0') {
        length++;
    }

    printf("String Length: %d Characters", length);

    return 0;
}
