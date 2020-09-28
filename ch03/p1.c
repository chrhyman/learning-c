/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 1. Write a program that accepts a date from the user in the form mm/dd/yyyy
// and then displays it in the form yyyymmdd:
//      Enter a date (mm/dd/yyyy): `2/17/2011`
//      You entered the date 20110217
*/

#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %.4d%.2d%.2d\n", year, month, day);

    return 0;
}
