/*
// Author: Chris Hyman, chris@wugs.me [includes copied code with notice]
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 6. Show how to modify the `addfrac.c` program of Section 3.2 so that the
// user is allowed to enter fractions that contain spaces before and after each
// `/` character.
*/

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* addfrac.c (Chapter 3, page 46) */
/* Adds two fractions */

#include <stdio.h>

int main(void)
{
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter first fraction: ");
  scanf("%d /%d", &num1, &denom1);    // EXERCISE SIX ANSWER: SPACE BEFORE /

  printf("Enter second fraction: ");
  scanf("%d /%d", &num2, &denom2);    // EXERCISE SIX ANSWER: SPACE BEFORE /

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;
  printf("The sum is %d/%d\n", result_num, result_denom);

  return 0;
}
