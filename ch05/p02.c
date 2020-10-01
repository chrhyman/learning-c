/*
// Author: Chris Hyman, chris@wugs.me
// Date: 28 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 2. Write a program that asks the user for a 24-hour time, then displays the
// time in 12-hour form:
//          Enter a 24-hour time: `21:11`
//          Equivalent 12-hour time: 9:11 PM
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    printf("Equivalent 12-hour time: ");

    if (hour == 0)
        printf("12:%.2d AM\n", minute);
    else if (1 <= hour && hour <= 11)
        printf("%d:%.2d AM\n", hour, minute);
    else if (hour == 12)
        printf("12:%.2d PM\n", minute);
    else
        printf("%d:%.2d PM\n", hour - 12, minute);

    return 0;
}
