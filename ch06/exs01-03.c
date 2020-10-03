/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
*/

#include <stdio.h>

int main(void)
{
    int i, j;

// 1. What output does the following program fragment produce?
    i = 1;
    while (i <= 128)
    {
        printf("%d ", i);
        i *= 2;
    }
    printf("|\n");
                            // 1 2 4 8 16 32 64 128 |

// 2. What output does the following program fragment produce?
    j = 9384;
    do {
        printf("%d ", j);
        j /= 10;
    } while (j > 0);
    printf("|\n");
                            // 9384 938 93 9 |

// 3. What output does the following `for` statement produce?
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
        printf("%d ", i);
    printf("|\n");
                            // 5 4 3 2 |

    return 0;
}
