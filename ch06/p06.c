/*
// Author: Chris Hyman, chris@wugs.me
// Date: 4 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
//
// 6. Write a program that prompts the user to enter a number `n`, then prints
// all even squares between 1 and `n`.
//          Value of n: `100`
//          Even squares: 4 16 36 64 100
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Value of n: ");
    scanf("%d", &n);

    for (int i = 2; i * i <= n; i += 2)
        printf("%d ", i * i);

    printf("\n");

    return 0;
}
