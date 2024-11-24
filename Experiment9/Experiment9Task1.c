/*
Aim : Design a structure student_record to contain name, roll_number, and total marks obtained. Write a program to read 5 students
 data from the user and then display the topper on the screen
Name        : Tumbi Mohamed Hamza Sueb
UIN         : 241A015
Roll No     : 15
Div:        : A
Department  : Artificial Intelligence & Data Science
*/

#include <stdio.h>
#include <string.h>

// Structure to hold student details
struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record students[5];  // Array to store details of 5 students
    int i, topper_index = 0;
    float highest_marks=0;

    // Read data for 5 students
    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf("%[^\n]", students[i].name);  // Read student's name

        printf("Roll number: ");
        scanf("%d", &students[i].roll_number);  // Read student's roll number

        printf("Total marks: ");
        scanf("%f", &students[i].total_marks);  // Read student's total marks

        // Find the topper (the student with the highest marks)
        if (students[i].total_marks > highest_marks) {
            highest_marks=students[i].total_marks;
            topper_index = i;  // Update topper_index if current student has higher marks
        }
    }

    // Display the topper details
    printf("\t\t *** Topper Finder *** \n\n");
    printf("\nTopper Details:\n");
    printf("Name: %s\n", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll_number);
    printf("Total Marks: %.2f\n", students[topper_index].total_marks);

    return 0;
}
