/*
// Author: Chris Hyman, chris@wugs.me
// Date: 25 Sept 2020
// A solution to Programming Projects from
// Chapter 2 of C Programming: A Modern Approach by K. N. King
//
// 3. Modify `ch2/p2.c` so that it prompts the user to enter the radius
// of the sphere.
*/

#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    float radius, volume;

    printf("Enter a radius: ");
    scanf("%f", &radius);

    volume = 4.0f / 3.0f * PI * radius * radius * radius;
    printf("Volume of a sphere with radius %.2fm: %.2fm^3\n", radius, volume);

    return 0;
}
