/*
// Author: Chris Hyman, chris@wugs.me
// Date: 28 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 1. Write a program that calculates how many digits a number contains. You
// may assume the number has no more than four digits. Use `if` statements.
*/

#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter a number: ");
    scanf("%d", &i);
    printf("The number %d has ", i);

    if (i < 0)
        i = -i;

    if (0 <= i && i <= 9)
        printf("1 digit\n");
    else if (10 <= i && i <= 99)
        printf("2 digits\n");
    else if (100 <= i && i <= 999)
        printf("3 digits\n");
    else if (1000 <= i && i <= 9999)
        printf("4 digits\n");
    else
        printf("some number of digits\n");

    return 0;
}
