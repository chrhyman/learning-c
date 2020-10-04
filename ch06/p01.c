/*
// Author: Chris Hyman, chris@wugs.me
// Date: 4 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
//
// 1. Write a program that finds the largest in a series of numbers entered by
// the user. The program must prompt the user to enter numbers one by one. When
// the user enters 0 or a negative number, the program must display the largest
// nonnegative number entered:
//          Enter a number: `60`
//          Enter a number: `38.3`
//          Enter a number: `4.89`
//          Enter a number: `100.62`
//          Enter a number: `75.2285`
//          Enter a number: `0`
//
//          The largest number entered was 100.62
*/

#include <stdio.h>

int main(void)
{
    float input, largest = 0.0f;

    do {
        printf("Enter a number: ");
        scanf("%f", &input);
        if (input > largest)
            largest = input;
    } while (input > 0.0f);

    printf("\nThe largest number entered was %f\n", largest);

    return 0;
}
