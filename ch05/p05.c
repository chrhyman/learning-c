/*
// Author: Chris Hyman, chris@wugs.me
// Date: 2 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 5. Using the tax bracket provided in the textbook, write a program that asks
// the user to enter a the amount of taxable income, then displays the tax due.
*/

#include <stdio.h>

int main(void)
{
    float income, tax;

    printf("Enter taxable income: $");
    scanf("%f", &income);

    if (income < 750)
        tax = income * .01f;
    else if (income <= 2250)
        tax = 7.50f + (income - 750) * .02f;
    else if (income <= 3750)
        tax = 37.50f + (income - 2250) * .03f;
    else if (income <= 5250)
        tax = 82.50f + (income - 3750) * .04f;
    else if (income <= 7000)
        tax = 142.50f + (income - 5250) * .05f;
    else
        tax = 230.00f + (income - 7000) * .06f;

    printf("Tax due: $%.2f\n", tax);

    return 0;
}
