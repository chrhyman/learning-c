/*
// Author: Chris Hyman, chris@wugs.me
// Date: 25-26 Sept 2020
// A solution to Programming Projects from
// Chapter 2 of C Programming: A Modern Approach by K. N. King
//
// 6. Modify `ch2/p5.c` so that the polynomial is evaluated using the following
// formula (Horner's Rule):
//      ((((3x + 2)x - 5)x - 1)x + 7)x - 6
*/

#include <stdio.h>

int main(void)
{
  int x, value;

  printf("Enter a value for x: ");
  scanf("%d", &x);

  value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

  printf("Value of polynomial at x=%d: %d\n", x, value);

  return 0;
}
