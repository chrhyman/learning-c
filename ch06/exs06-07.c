/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
*/

#include <stdio.h>

int main(void)
{
// 6. Translate the program of Exercise 1 into a single `for` statement.
    for (int i = 1; i <= 128; i *= 2)
        printf("%d ", i);
    printf("|\n");
                            // 1 2 4 8 16 32 64 128 |

// 7. Translate the program of Exercise 2 into a single `for` statement.
    for (int j = 9384; j > 0; j /= 10)
        printf("%d ", j);
    printf("|\n");
                            // 9384 938 93 9 |
    return 0;
}
