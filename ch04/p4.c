/*
// Author: Chris Hyman, chris@wugs.me
// Date: 27 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 4 of C Programming: A Modern Approach by K. N. King
//
// 4. Write a program that reads an integer entered by the user and displays it
// in octal (base 8) {`user input`}:
//          Enter a number between 0 and 32767: `1953`
//          In octal, your number is: 03641
// The output should be displayed using five digits (0-pad).
*/

#include <stdio.h>

int main(void)
{
    int i, a, b, c, d, e;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);

    e = i % 8;
    i /= 8;
    d = i % 8;
    i /= 8;
    c = i % 8;
    i /= 8;
    b = i % 8;
    i /= 8;
    a = i % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", a, b, c, d, e);

    return 0;
}
