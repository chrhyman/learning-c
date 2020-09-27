/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 5. Write a program that asks the user to enter the numbers from 1 to 16 (in
// any order) and then displays the numbers in a 4 by 4 arrangement, followed
// by the sums of the rwos, columns, and diagonals:
//
//      Enter the numbers from 1 to 16 in any order:
//      `16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1`
//      16  3  2 13
//       5 10 11  8
//       9  6  7 12
//       4 15 14  1
//
//      Row sums: 34 34 34 34
//      Column sums: 34 34 34 34
//      Diagonal sums: 34 34
*/

#include <stdio.h>

int main(void)
{
    // spacing used to show the "structure" of the numbers a-p
    int a, b, c, d,
        e, f, g, h,
        i, j, k, l,
        m, n, o, p;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a, &b, &c, &d,
                                              &e, &f, &g, &h,
                                              &i, &j, &k, &l,
                                              &m, &n, &o, &p);
    // input: `1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16`

    printf("%2d %2d %2d %2d\n", a, b, c, d);
    printf("%2d %2d %2d %2d\n", e, f, g, h);
    printf("%2d %2d %2d %2d\n", i, j, k, l);
    printf("%2d %2d %2d %2d\n", m, n, o, p);

    printf("Row sums: %d %d %d %d\n", a + b + c + d,
                                      e + f + g + h,
                                      i + j + k + l,
                                      m + n + o + p);

    printf("Column sums: %d %d %d %d\n", a + e + i + m,
                                         b + f + j + n,
                                         c + g + k + o,
                                         d + h + l + p);

    printf("Diagonal sums: %d %d\n", a + f + k + p,
                                     d + g + j + m);
    /*
    // output:
    //  1  2  3  4
    //  5  6  7  8
    //  9 10 11 12
    // 13 14 15 16
    // Row sums: 10 26 42 58
    // Column sums: 28 32 36 40
    // Diagonal sums: 34 34
    */

    return 0;
}
