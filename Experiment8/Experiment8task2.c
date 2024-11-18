/*
Aim : WAP to check if the entered string is palindrome or not.
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div:        : A
Department  : Artificial Intelligence & Data Science
*/


#include <stdio.h>

int main() {
    char str[100];
    int start = 0, end = 0, isPalindrome = 1;
    printf("\t\t\t*** Palindrome Finder ***\n\n\n");
    printf("Enter Your String: ");
    scanf("%[^\n]s", str);
    while (str[end] != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome) {
        printf("The String is a palindrome.\n");
    } else {
        printf("The String is not a palindrome.\n");
    }

    return 0;
}
