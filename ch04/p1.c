/*
// Author: Chris Hyman, chris@wugs.me
// Date: 27 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 4 of C Programming: A Modern Approach by K. N. King
//
// 1. Write a program that asks the user to enter a two-digit number, then
// prints the number with its digits reversed. A session with the program
// should have the following appearance (`user input`):
//          Enter a two-digit number: `28`
//          The revesal is: 82
*/

#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter a two-digit number: ");
    scanf("%d", &i);

    printf("The reversal is: %d%d\n", i % 10, i / 10);

    return 0;
}
