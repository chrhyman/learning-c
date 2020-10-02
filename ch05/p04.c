/*
// Author: Chris Hyman, chris@wugs.me
// Date: 2 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 4. Using the simplified version of the Beaufort scale in the textbook, write
// a program that asks the user to enter a wind speed in knots, then displays
// the correct description.
*/

#include <stdio.h>

int main(void)
{
    float speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%f", &speed);

    if (speed < 1)
        printf("Calm\n");
    else if (speed < 3)
        printf("Light air\n");
    else if (speed < 27)
        printf("Breeze\n");
    else if (speed < 47)
        printf("Gale\n");
    else if (speed < 63)
        printf("Storm\n");
    else
        printf("Hurricane\n");

    return 0;
}
