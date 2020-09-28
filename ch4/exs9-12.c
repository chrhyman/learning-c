/*
// Author: Chris Hyman, chris@wugs.me
// Date: 27 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 4 of C Programming: A Modern Approach by K. N. King
//
// 9-12. Show the output produced by each of the following program fragments.
// Assume that `i`, `j`, and `k` are `int` variables.
*/

#include <stdio.h>

int main(void)
{
    int i, j, k;

    printf("Exercise 9\n");

    // (9a)
    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d\n", i, j);            // 63 8

    // (9b)
    i = j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);      // 3 2 1

    // (9c)
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d\n", i, j, k);      // 2 -1 3

    // (9d)
    i = 2; j = 1; k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i, j, k);      // 0 0 0

    printf("Exercise 10\n");

    // (10a)
    i = 6;
    j = i += i;
    printf("%d %d\n", i, j);            // 12 12

    // (10b)
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i, j);            // 3 4

    // (10c) -- causes warning in gcc: implicit conversion from double to int
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i, j);            // 2 8

    // (10d) -- causes warning in gcc: multiple unsequenced modifications to j
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i, j);            // 6 9

    printf("Exercise 11\n");

    // (11a)
    i = 1;
    printf("%d ", i++ - 1);
    printf("%d\n", i);                  // 0 2

    // (11b)
    i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d\n", i, j);            // 4 11 6

    // (11c)
    i = 7; j = 8;
    printf("%d ", i++ - --j);
    printf("%d %d\n", i, j);            // 0 8 7

    // (11d)
    i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d\n", i, j, k);      // 3 4 5 4

    printf("Exercise 12\n");

    // (12a)
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);            // 6 16

    // (12b)
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i, j);            // 6 -7

    // (12c)
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);            // 6 23

    // (12d)
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i, j);            // 6 15

    return 0;
}
