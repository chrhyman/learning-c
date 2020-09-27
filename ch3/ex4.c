/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 4. Suppose that we call `scanf` as follows:
//    scanf("%d%f%d", &i, &x, &j);
//
// If the user enters
//    `10.3 5 6`
// what will be the values of `int i`, `float x`, and `int j` after the call?
//
// Chris's guess: i = 10 x = .3 j = 5
// because the %d 'puts back' the "." character to be read by the %f
// There is " 6{return}" left in the input buffer, I presume without knowing
*/

#include <stdio.h>

int main()
{
  int i, j;
  float x;

  printf("input: ");
  scanf("%d%f%d", &i, &x, &j);

  printf("i = %d\nx = %f\nj = %d\n", i, x, j);
  /*
  // i = 10
  // x = 0.300000
  // j = 5
  */

  return 0;
}
