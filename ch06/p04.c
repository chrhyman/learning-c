/*
// Author: Chris Hyman, chris@wugs.me [includes copied code with notice]
// Date: 5 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
//
// 4. Add a loop to the `broker.c` program of Section 5.2 so that the user can
// enter more than one trade and the program will calculate the commission on
// each. The program should terminate when the user enters `0` as the value:
//          Enter value of trade: `30000`
//          Commission: $166.00
//
//          Enter value of trade: `20000`
//          Commission: $144.00
//
//          Enter value of trade: `0`(exit)
*/

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* broker.c (Chapter 5, page 81) */
/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
    float commission, value;

    for (;;) {
        printf("\nEnter value of trade: ");
        scanf("%f", &value);

        if (value == 0)
            return 0;

        if (value < 2500.00f)
            commission = 30.00f + .017f * value;
        else if (value < 6250.00f)
            commission = 56.00f + .0066f * value;
        else if (value < 20000.00f)
            commission = 76.00f + .0034f * value;
        else if (value < 50000.00f)
            commission = 100.00f + .0022f * value;
        else if (value < 500000.00f)
            commission = 155.00f + .0011f * value;
        else
            commission = 255.00f + .0009f * value;

        if (commission < 39.00f)
            commission = 39.00f;

        printf("Commission: $%.2f\n", commission);
    }
}
