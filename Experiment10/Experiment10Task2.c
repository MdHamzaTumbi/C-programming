/*
Aim : WAP to print the elements of an array in Reverse order using pointers.
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div:        : A
Department  : Artificial Intelligence & Data Science
*/


#include <stdio.h>

int main() {

    int n;

    printf("\t\t** Array Reverser ** \n\n");


    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    int *ptr = arr;


    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; i++) {

        scanf("%d", ptr + i);
    }


    printf("\nArray elements in reverse order:\n");

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));
    }

    printf("\n");

    return 0;
}
