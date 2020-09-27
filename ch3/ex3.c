/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 3. For each of the following pairs of `scanf` format strings, indicate
// whether or not the two strings are equivalent. If they're not, show how they
// can be distinguished.
//
//  (a) "%d"        versus " %d"
//  (b) "%d-%d-%d"  versus "%d -%d -%d"
//  (c) "%f"        versus "%f "
//  (d) "%f,%f"     versus "%f, %f"
*/

#include <stdio.h>

int main(void)
{
  int a_i1, a_i2, b_i1, b_i2, b_i3, b_i4, b_i5, b_i6;
  float c_f1, c_f2, d_f1, d_f2, d_f3, d_f4;

  // Playground for (a) "%d" versus " %d"
  printf("(a) input for \"%%d\": ");
  scanf("%d", &a_i1);
  printf("(a) input for \" %%d\": ");
  scanf("%d", &a_i2);

  printf("\n(a) int 1: %d\n(a) int 2: %d\n", a_i1, a_i2);
  // I found these format strings to be equivalent.

  // Playground for (b) "%d-%d-%d" versus "%d -%d -%d"
  printf("(b) input for \"%%d-%%d-%%d\": ");
  scanf("%d-%d-%d", &b_i1, &b_i2, &b_i3);
  printf("(b) input for \"%%d -%%d -%%d\": ");
  scanf("%d-%d-%d", &b_i4, &b_i5, &b_i6);

  printf("\n(b) \"%%d-%%d-%%d\": %d-%d-%d\n", b_i1, b_i2, b_i3);
  printf("(b) \"%%d -%%d -%%d\": %d-%d-%d\n", b_i4, b_i5, b_i6);
  /*
  // I found that "1- 2- 3" was handled identically but "1 -2 -3" causes the
  // first format string to fail.
  // These strings are not equivalent.
  */

  // Playground for (c) "%f" versus "%f "
  printf("(c) input for \"%%f \": ");
  scanf("%f ", &c_f1);
  printf("(c) input for \"%%f\": ");
  scanf("%f", &c_f2);

  printf("\n(c) float 1: %f\n(c) float 2: %f\n", c_f1, c_f2);
  /*
  // Note I swapped the order so "%f " is inputted first. This is to illustrate
  // that if the user inputs `1{return}`, the program will hang. For this exact
  // setup, I provided the first (c) input a value of "1{return}" and the
  // program hanged, so I then entered "{space}{return}" and the program
  // continued to hang. I then entered "2{return}" and the program completed by
  // printing this way in terminal (`user input`, {invisible character
  // descriptive name}):
  //
  //      (c) input for "%f ": `1{return}`
  //      `{space}{return}`
  //      `2{return}`                   // note that program doesn't hang again
  //      (c) input for "%f":
  //      (c) float 1: 1.000000
  //      (c) float 2: 2.000000
  //
  // Ergo, these format strings are NOT identical.
  */

  // Playground for (d) "%f,%f"     versus "%f, %f"
  printf("(d) input for \"%%f,%%f\": ");
  scanf("%f,%f", &d_f1, &d_f2);
  printf("(d) input for \"%%f, %%f\": ");
  scanf("%f,%f", &d_f3, &d_f4);

  printf("\n(d) \"%%f,%%f\": %f,%f\n(d) \"%%f, %%f\": %f,%f\n",
    d_f1, d_f2, d_f3, d_f4);
  // I found these format strings to be equivalent.

  return 0;
}
