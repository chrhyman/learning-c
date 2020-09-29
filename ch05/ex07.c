/*
// Author: Chris Hyman, chris@wugs.me
// Date: 28 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 7. What does the following statement print if `i` has the value 17? What if
// it has the value -17?
*/

#include <stdio.h>

int main(void)
{
    int i;

    i = 17;
    printf("%d\n", i >= 0 ? i : -i);            // 17

    i = -17;
    printf("%d\n", i >= 0 ? i : -i);            // 17
}
