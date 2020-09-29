/*
// Author: Chris Hyman, chris@wugs.me
// Date: 28 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 8. Simplify the unnecessarily complex if statement to a single assignment.
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int age;
    bool teenager;

    /* ... age = ... */

    teenager = 13 <= age && age <= 19 ? true : false;

    return 0;
}
