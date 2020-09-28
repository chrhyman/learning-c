/*
// Author: Chris Hyman, chris@wugs.me
// Date: 27 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 4 of C Programming: A Modern Approach by K. N. King
//
// 13. Which of `++i` or `i++` is exactly identical to `(i += 1);`?
//          ++i is exactly identical to (i += 1) because both will return the
//          value AFTER the increment. i++ will return the value of i BEFORE
//
// 14. Supply parentheses to show how a C compiler would interpret each of the
// following expressions.
//      (a) (((a * b) - (c * d)) + e)
//      (b) (((a / b) % c) / d)
//      (c) ((((- a) - b) + c) - (+ d))
//      (d) (((a * (- b)) / c) - d)
//
// 15. Assuming an initial value of `int i = 1; int j = 2;` give the value of
// `i` and `j` after the execution of the following expression statements:
//      (a) i += j;
//      (b) i--;
//      (c) i * j / i;
//      (d) i % ++j;
*/

#include <stdio.h>

int main(void)
{
    // using k to track the value of the expression statement on execution
    int i, j, k;

    // (a)
    i = 1; j = 2;
    k = (i += j);
    printf("%d %d %d\n", i, j, k);      // 3 2 3

    // (b)
    i = 1; j = 2;
    k = (i--);
    printf("%d %d %d\n", i, j, k);      // 0 2 1

    // (c)
    i = 1; j = 2;
    k = (i * j / i);
    printf("%d %d %d\n", i, j, k);      // 1 2 2

    // (d)
    i = 1; j = 2;
    k = (i % ++j);
    printf("%d %d %d\n", i, j, k);      // 1 3 1

    return 0;
}
