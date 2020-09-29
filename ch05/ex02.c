/*
// Author: Chris Hyman, chris@wugs.me
// Date: 28 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 2. Show the output produced by each of the following program fragments.
// Assume that `i`, `j`, and `k` are `int` variables.
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // (a)
    i = 10; j = 5;
    printf("%d\n", !i < j);                 // 1
        // gcc warns that logical not is only applied to i and not i<j

    // (b)
    i = 2; j = 1;
    printf("%d\n", !!i + !j);               // 1

    // (c)
    i = 5; j = 0; k = -5;
    printf("%d\n", i && j || k);            // 1
        // gcc warns that && is within || and suggests () around the && expr.

    // (d)
    i = 1; j = 2; k = 3;
    printf("%d\n", i < j || k);             // 1

    return 0;
}
