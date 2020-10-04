/*
// Author: Chris Hyman, chris@wugs.me
// Date: 4 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
//
// 5. Programming Project 1 in Chapter 4 had you create a program to reverse a
// two-digit number. Generalize that program to more digits with a loop.
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The reversal is: ");

    do {
        printf("%d", n % 10);
        n /= 10;
    } while (n > 0);

    printf("\n");

    return 0;
}
