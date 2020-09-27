/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 4 of C Programming: A Modern Approach by K. N. King
//
// 1. Show the output produced by each of the following program fragments.
// Assume that `i`, `j`, and `k` are `int` variables.
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;
    // (a)
    i = 5; j = 3;
    printf("%d %d\n", i / j, i % j);        // =1 2
    // (b)
    i = 2; j = 3;
    printf("%d\n", (i + 10) % j);           // 12%3=0
    // (c)
    i = 7; j = 8; k = 9;
    printf("%d\n", (i + 10) % k / j);       // 17%9/8=1
    // (d)
    i = 1; j = 2; k = 3;
    printf("%d\n", (i + 5) % (j + 2) / k);  // 6%4/3=0

    return 0;
}
