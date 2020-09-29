/*
// Author: Chris Hyman, chris@wugs.me
// Date: 28 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 3. Show the output produced by each of the following program fragments.
// Assume that `i`, `j`, and `k` are `int` variables.
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;

    // (a)
    i = 3; j = 4; k = 5;
    printf("%d ", i < j || ++j < k);
    printf("%d %d %d\n", i, j, k);          // 1 3 4 5

    // (b)
    i = 7; j = 8; k = 9;
    printf("%d ", i - 7 && j++ < k);
    printf("%d %d %d\n", i, j, k);          // 0 7 8 9

    // (c)
    i = 7; j = 8; k = 9;
    printf("%d ", (i = j) || (j = k));
    printf("%d %d %d\n", i, j, k);          // 1 8 8 9

    // (d)
    i = 1; j = 1; k = 1;
    printf("%d ", ++i || ++j && ++k);
    printf("%d %d %d\n", i, j, k);          // 1 2 1 1
    /*
    // note that && binds more closely than ||, so evaluating ++i is enough
    // to short-circuit the evaluation of the || expression to 1.
    // if the expression were instead `(++i || ++j) && ++k`
    // then the output would be: 1 2 1 2
    */

    return 0;
}
