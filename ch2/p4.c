/*
// Author: Chris Hyman, chris@wugs.me
// Date: 25 Sept 2020
// A solution to Programming Projects from
// Chapter 2 of C Programming: A Modern Approach by K. N. King
//
// 4. Write a program that asks the user to enter a dollars-and-cents amount,
// then displays the amount with 5% tax added (`user input`):
//      Enter an amount: `100.00`
//      With tax added: $105.00
*/

#include <stdio.h>

int main(void)
{
  float after_tax, dollars;
  float tax = 0.05;

  printf("Enter an amount: ");
  scanf("%f", &dollars);

  after_tax = dollars * (1 + tax);
  printf("With tax added: $%.2f\n", after_tax);

  return 0;
}
