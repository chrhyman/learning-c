/*
// Author: Chris Hyman, chris@wugs.me
// Date: 27 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 4 of C Programming: A Modern Approach by K. N. King
//
// 3. Rewrite the program in ch04/p1.c to not use arithmatic.
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &i, &j, &k);

    printf("The reversal is: %d%d%d\n", k, j, i);

    return 0;
}
