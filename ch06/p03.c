/*
// Author: Chris Hyman, chris@wugs.me
// Date: 4 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
//
// 3. Write a program that asks the user to enter a fraction, then reduces the
// fraction to lowest terms:
//          Enter a fraction: `6/12`
//          In lowest terms: 1/2
*/

#include <stdio.h>

int main(void)
{
    int num, denom, m, n, rem;

    printf("Enter a fraction: ");
    scanf("%d /%d", &num, &denom);

    for (m = num, n = denom; n != 0; rem = m % n, m = n, n = rem)
        ;

    num /= m;
    denom /= m;

    printf("In lowest terms: %d/%d\n", num, denom);

    return 0;
}
