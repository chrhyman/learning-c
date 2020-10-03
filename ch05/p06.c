/*
// Author: Chris Hyman, chris@wugs.me [includes copied code with notice]
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 4 of C Programming: A Modern Approach by K. N. King
//
// 3. Modify the `upc.c` program of Section 4.1 so that it checks whether a
// UPC is valid. After the user enters a UPC, the program will display either
// VALID or NOT VALID.
*/

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* upc.c (Chapter 4, page 57) */
/* Computes a Universal Product Code check digit */

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, check,
        first_sum, second_sum, total;
    bool valid;


    printf("Enter a (12-digit) UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &check);

    first_sum = a + c + e + g + i + k;
    second_sum = b + d + f + h + j;
    total = 3 * first_sum + second_sum;

    valid = check == (9 - ((total - 1) % 10));

    if (valid)
        printf("VALID\n");
    else
        printf("NOT VALID\n");

    return 0;
}
