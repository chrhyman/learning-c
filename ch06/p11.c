/*
// Author: Chris Hyman, chris@wugs.me
// Date: 6 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
//
// 11. Use the following formula for the value of the constant `e`:
//          e = 1 + 1/1! + 1/2! + 1/3! + ... 1/n!
// Write a program that approximates `e` by computing the value of the above
// expression given a user's input for the value of `n`.
*/

#include <stdio.h>

int main(void)
{
    int n, denom = 1;
    float value;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    value = 1.0f;

    for (int i = 1; i <= n; i++) {
        denom *= i;
        value += 1.0f / denom;
    }

    printf("Value after n terms: %f\n", value);

    return 0;
}
