/*
// Author: Chris Hyman, chris@wugs.me
// Date: 4 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
//
// 2. Write a program that asks the user to enter two integers, then calculates
// and displays their greatest common divisor (GCD):
//          Enter two integers: `12 28`
//          Greatest common divisor: 4
*/

#include <stdio.h>

int main(void)
{
    int m = 0, n = 0, rem;

    printf("Enter two integers: ");

    for (scanf("%d%d", &m, &n); n != 0; rem = m % n, m = n, n = rem)
        ;

    /*                              // A more traditional `while` loop solution
    //  scanf("%d%d", &m, &n);
    //  while (n != 0) {
    //      rem = m % n;
    //      m = n;
    //      n = rem;
    //  }
    */

    printf("Greatest common divisor: %d\n", m);

    return 0;
}
