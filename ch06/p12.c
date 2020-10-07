/*
// Author: Chris Hyman, chris@wugs.me
// Date: 6 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
//
// 12. Modify Programming Project 11 so that the program continues adding terms
// until the current term becomes less than `epsilon`, where that is a small
// (floating-point) number entered by the user.
*/

#include <stdio.h>

int main(void)
{
    int denom = 1;
    float value, term, epsilon;

    printf("Enter a value for epsilon: ");
    scanf("%f", &epsilon);

    value = 1.0f;

    for (int i = 1; ; i++) {
        denom *= i;
        term = 1.0f / denom;
        value += term;
        if (term < epsilon)
            break;
    }

    printf("Value to achieve epsilon of %f was: %f\n", epsilon, value);

    return 0;
}
