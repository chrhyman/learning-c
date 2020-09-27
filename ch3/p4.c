/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 4. Write a program that prompts the user to enter a telephone number in the
// form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx:
//      Enter phone number [(xxx) xxx-xxxx]: `(404) 817-6900`
//      You entered 404.817.6900
*/

#include <stdio.h>

int main()
{
  int area_code, prefix, suffix;

  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf(" (%d )%d -%d", &area_code, &prefix, &suffix);
  // input: ` ( 123 ) 98 - 0 `

  printf("You entered %.3d.%.3d.%.4d\n", area_code, prefix, suffix);
  // output `123.098.0000`

  return 0;
}
