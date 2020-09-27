/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Projects from
// Chapter 2 of C Programming: A Modern Approach by K. N. King
//
// 7. Write a program that asks the user to enter a U.S. dollar amount and then
// shows how to pay that amount using the smallest number of $20, $10, $5, and
// $1 bills (`user input`):
//      Enter a dollar amount: `93`
//
//      $20 bills: 4
//      $10 bills: 1
//       $5 bills: 0
//       $1 bills: 3
//      = $93
*/

#include <stdio.h>

int main(void)
{
    int amount;
    int twenties, tens, fives, ones;
    int calculated_total;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    // int division in C yields the floor of the mathematical division
    twenties = amount / 20;
    amount = amount - twenties * 20;
    tens = amount / 10;
    amount = amount - tens * 10;
    fives = amount / 5;
    ones = amount - fives * 5;

    // what we actually calculated in case user gave weird input for `amount`
    calculated_total = twenties * 20 + tens * 10 + fives * 5 + ones;

    printf("\n$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", ones);
    printf("= $%d\n", calculated_total);

    return 0;
}
