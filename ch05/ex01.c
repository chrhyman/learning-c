/*
// Author: Chris Hyman, chris@wugs.me
// Date: 28 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 1. Show the output produced by each of the following program fragments.
// Assume that `i`, `j`, and `k` are `int` variables.
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // (a)
    i = 2; j = 3;
    k = i * j == 6;
    printf("%d\n", k);                      // 1

    // (b)
    i = 5; j = 10; k = 1;
    printf("%d\n", k > i < j);              // 1

    // (c)
    i = 3; j = 2; k = 1;
    printf("%d\n", i < j == j < k);         // 1

    // (d)
    i = 3; j = 4; k = 5;
    printf("%d\n", i % j + i < k);          // 0

    return 0;
}
