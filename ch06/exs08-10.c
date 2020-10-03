/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
*/

#include <stdio.h>

int main(void)
{
    int i, condition;

// 8. What output does the following `for` statement product?
    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);
                            // 10 5 3 2 1 1 1 1 1 1 1 1 1 ... (infinity)

/*
// 9. Translate the `for` statement of Exercise 8 into an equivalent `while`
// statement.
*/
    i = 10;
    while (i >= 1) {
        printf("%d ", i++);
        i /= 2;
    }

/*
// 10. Show how to replace a `continue` statement by an equivalent `goto`
// statement.
*/
    for (;;) {
        // statements
        if (condition)
            continue;
        // statements
    }
    // is equivalent to
    for (;;) {
        // statements
        if (condition)
            goto end_of_loop;
        // statements
        end_of_loop: ; // null statement
    }

    return 0;
}
