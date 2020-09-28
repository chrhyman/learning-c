/*
// Author: Chris Hyman, chris@wugs.me
// Date: 27 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 4 of C Programming: A Modern Approach by K. N. King
//
// 2. Rewrite the program in ch04/p1.c to handle three-digit numbers.
*/

#include <stdio.h>

int main(void)
{
    int i;

    printf("Enter a three-digit number: ");
    scanf("%d", &i);

    printf("The reversal is: %d%d%d\n", i % 10, (i / 10) % 10, i / 100);

    return 0;
}
