/*
// Author: Chris Hyman, chris@wugs.me
// Date: 25 Sept 2020
// A solution to Programming Projects from
// Chapter 2 of C Programming: A Modern Approach by K. N. King
//
// 2. Write a program that computes the volume of a sphere with a 10-meter
// radius, using the formula v = 4/3(pi)r^3. Write the fraction 4/3 as
// `4.0f/3.0f`.
*/

#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    float radius = 10.0f, volume;

    volume = 4.0f / 3.0f * PI * radius * radius * radius;
    printf("Volume of a sphere with 10m radius: %.2fm^3\n", volume);

    return 0;
}
