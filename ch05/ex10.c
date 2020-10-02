/*
// Author: Chris Hyman, chris@wugs.me
// Date: 30 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 10. What output does the following program fragment produce?
*/

#include <stdio.h>

int main(void)
{
    int i;

    i = 1;

    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }                               //  output: onetwo
                                    // (no `break` statements)

    return 0;
}
