/*
// Author: Chris Hyman, chris@wugs.me
// Date: 28 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 4. Write a single expression whose value is either -1, 0, or +1, depending
// on whether `i` is less than, equal to, or greater than `j`, respectively.
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    int my_answer, book_answer;

    /* ... */

    my_answer = (i < j ? -1 : 1) * (i == j ? 0 : 1);
    // multiplies the sign (i less/greater than j) by 0 if eq or 1 if inequal

    book_answer = (i > j) - (i < j);
    // if equal, 0-0=0; if i<j then 0-1=-1; if i>j then 1-0=1
    // two comparisons for both of them but
    // one subtraction versus my two conditionals and a multiplication

    return 0;
}
