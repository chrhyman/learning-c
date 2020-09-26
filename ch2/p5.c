/*
// Author: Chris Hyman, chris@wugs.me
// Date: 25 Sept 2020
// A solution to Programming Projects from
// Chapter 2 of C Programming: A Modern Approach by K. N. King
//
// 5. Write a program that asks the user to enter a value for x and then
// displays the value of the following polynomial:
//      3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
*/

#include <stdio.h>

int main(void)
{
  int x, value;

  printf("Enter a value for x: ");
  scanf("%d", &x);

  value = 3 * x * x * x * x * x
        + 2 * x * x * x * x
        - 5 * x * x * x
        - 1 * x * x
        + 7 * x
        - 6;

  printf("Value of polynomial at x=%d: %d\n", x, value);

  return 0;
}
