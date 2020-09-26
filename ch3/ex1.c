/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 1. What output do the following calls of `printf` produce?
// Note: Adding pipes to original format strings to visualize spaces.
*/

#include <stdio.h>

int main()
{
  // (a)
  printf("|%6d,%4d|\n", 86, 1040);    // |    86,1040|
  // (b)
  printf("|%12.5e|\n", 30.253);       // | 3.02530e+01|
  // (c)
  printf("|%.4f|\n", 83.162);         // |83.1620|
  // (d)
  printf("|%-6.2g|\n", .0000009979);  // |1e-06 | X: original guess |1e-6  |

  return 0;
}
