/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 2. Write calls of `printf` that display a `float` variable `x` in the
// following formats:
//
//  (a) Exponential notation; left-justified in a field of size 8; one digit
//      after the decimal point
//  (b) Exponential notation; right-justified in a field of size 10; six digits
//      after the decimal point
//  (c) Fixed decimal notation; left-justified in a field of size 8; three
//      digits after the decimal point
//  (d) Fixed decimal notation; right-justified in a field of size 6; no digits
//      after the decimal point
*/

#include <stdio.h>

int main(void)
{
  float x = 1.3590;
  // (a)
  printf("|%-8.1e|\n", x);    // |1.4e+00 |
  // (b)
  printf("|%10.6e|\n", x);    // |1.359000e+00| (exceeds 10, so no padding)
  // (c)
  printf("|%-8.3f|\n", x);    // |1.359   |
  // (d)
  printf("|%6.f|\n", x);      // |     1|

  // extra
  printf("|%6.0f|\n", x);     // |     1|
  printf("|%6f|\n", x);       // |1.359000|
  printf("|%.6f|\n", x);      // |1.359000|
  printf("|%0.6f|\n", x);     // |1.359000|
  printf("|%6.2f|\n", x);     // |  1.36|

  return 0;
}
