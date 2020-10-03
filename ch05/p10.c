/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 10. Write a program that converts a numerical grade into a letter grade. Use
// a `switch` statement.
*/

#include <stdio.h>

int main(void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Error! Grade must be in range 0-100.\n");
        return 0;
    }

    printf("Letter grade: ");

    switch (grade / 10) {           // returns int of tens place value
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
            break;
    }

    return 0;
}
