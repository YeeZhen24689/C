/* Filename: Exercise_4.c
   Description: Converter from numerical grade into a letter grade.
   Author: Yee Zhen
   Date: 16/02/24
   I/O: Grade
   Version: 1
*/

#include <stdio.h>

int main() {
    float marks;
    char grade;
    printf("/***********************************/\n");
    printf("Enter numerical grade:");
    scanf("%f",&marks);
    if (marks < 30 && marks >= 0) {
        grade = 'F';
    }
    else if (marks <= 39 && marks >= 0) {
        grade = 'D';
    }
    else if (marks <= 59 && marks >= 0) {
        grade = 'C';
    }
    else if (marks <= 79 && marks >= 0) {
        grade = 'B';
    }
    else if (marks <= 100 && marks >= 0){
        grade = 'A';
    }
    else {
        printf("That is an invalid grade\n");
        grade = 'U'; // Ungraded
    }
    printf("Letter grade is: %c\n",grade);
    printf("/***********************************/");
    return 0;
}
