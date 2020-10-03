/*
// Author: Chris Hyman, chris@wugs.me [includes copied code with notice]
// Date: 27 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 4 of C Programming: A Modern Approach by K. N. King
//
// 6. Rewrite the `upc.c` program of Section 4.1 so that it calculates the
// check digit for a European Article Number (EAN).
*/

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* (modified) upc.c (Chapter 4, page 57) */

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l,
        first_sum, second_sum, total;

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
        &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

    first_sum = b + d + f + h + j + l;
    second_sum = a + c + e + g + i + k;
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
