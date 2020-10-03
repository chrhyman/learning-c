/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 7. Write a program that finds the largest and smallest of four integers
// entered by the user using four `if` statements or fewer.
//          Enter four integers: `21 43 10 35`
//          Largest: 43
//          Smallest: 10
*/

#include <stdio.h>

int main(void)
{
    int a, b, c, d, min1, min2, max1, max2, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a >= b)
    {
        max1 = a;
        min1 = b;
    }
    else
    {
        max1 = b;
        min1 = a;
    }

    if (c >= d)
    {
        max2 = c;
        min2 = d;
    }
    else
    {
        max2 = d;
        min2 = c;
    }

    if (min1 <= min2)
        smallest = min1;
    else
        smallest = min2;
 
    if (max1 >= max2)
        largest = max1;
    else
        largest = max2;

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);

    return 0;
}
