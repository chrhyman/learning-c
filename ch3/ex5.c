/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 5. Suppose that we call `scanf` as follows:
//    scanf("%f%d%f", &x, &i, &y);
//
// If the user enters
//    `12.3 45.6 789`
// what will be the values of `float x`, `int i`, and `float y` after the call?
//
// Chris's guess: x = 12.3 i = 45 y = .6
// because the %d 'puts back' the "." character to be read by the %f
// There is " 789{return}" left in the input buffer, I presume without knowing
*/

#include <stdio.h>

int main(void)
{
  int i;
  float x, y;

  printf("input: ");
  scanf("%f%d%f", &x, &i, &y);

  printf("x = %f\ni = %d\ny = %f\n", x, i, y);
  /*
  // x = 12.300000
  // i = 45
  // y = 0.600000
  */

  return 0;
}
