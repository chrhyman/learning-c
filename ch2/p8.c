/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Projects from
// Chapter 2 of C Programming: A Modern Approach by K. N. King
//
// 8. Write a program that calculates the remaining balance on a loan after the
// first, second, and third monthly payments (`user input`):
//      Enter amount of loan: `20000.00`
//      Enter interest rate: `6.0`
//      Enter monthly payment: `386.66`
//
//      Balance remaining after first payment: $19713.34
//      Balance remaining after second payment: $19425.25
//      Balance remaining after third payment: $19135.71
// Display each balance with two digits after the decimal point.
*/

#include <stdio.h>

int main(void)
{
  float principal, yearly_rate, monthly_payment;
  float monthly_interest, balance;

  printf("Enter amount of loan: ");
  scanf("%f", &principal);
  printf("Enter interest rate: ");
  scanf("%f", &yearly_rate);
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  monthly_interest = 1 + yearly_rate / 100.0f / 12.0f;
  balance = principal * monthly_interest - monthly_payment;

// I can't wait until I can use loops and/or functions...
  printf("Balance remaining after first payment: $%.2f\n", balance);

  balance = balance * monthly_interest - monthly_payment;
  printf("Balance remaining after second payment: $%.2f\n", balance);

  balance = balance * monthly_interest - monthly_payment;
  printf("Balance remaining after third payment: $%.2f\n", balance);

  return 0;
}
