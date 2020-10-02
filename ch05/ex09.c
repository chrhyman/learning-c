/*
// Author: Chris Hyman, chris@wugs.me
// Date: 30 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 9. Are the following `if` statements equivalent? If not, why not?
//          The two if statements will yield the same output
*/

#include <stdio.h>

int main(void)
{
    int score;

    if (score >= 90)
        printf("A");
    else if (score >= 80)
        printf("B");
    else if (score >= 70)
        printf("C");
    else if (score >= 60)
        printf("D");
    else
        printf("F");

    if (score < 60)
        printf("F");
    else if (score < 70)
        printf("D");
    else if (score < 80)
        printf("C");
    else if (score < 90)
        printf("B");
    else
        printf("A");

    return 0;
}
