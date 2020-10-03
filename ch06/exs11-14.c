/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
*/

#include <stdio.h>

int main(void)
{
    int i, sum, d, n;

// 11. What output does the following program fragment product?
    sum = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2)
            continue;
        sum += i;
    }
    printf("%d\n", sum);
                            // 20

// 12. Modify the loop from Section 6.4 to only check divisors 2 - sqrt(n)
    printf("Enter a value for n: ");
    scanf("%d", &n);
    for (d = 2; d * d < n; d++) {
        if (n % d == 0)
            break;
    }
    if (d * d <= n)
        printf("%d is divisible by %d\n", n, d);
    else
        printf("%d is prime\n", n);

    return 0;
}
