/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 8. Write a program that asks the user to enter a time (24h format) and
// displays the departure and arrival times for the flight whose departure is
// closest to that entered by the user.
//          Enter a 24-hour time: `13:15`
//          Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
*/

#include <stdio.h>

int main(void)
{
    int user_hr, user_min, since_midnight;
    int a, b, c, d, e, f, g;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &user_hr, &user_min);
    printf("Closest departure time is ");

    since_midnight = user_hr * 60 + user_min;

    /*
    // departing 8:00 a.m., arriving 10:16 a.m.
    // departing 9:43 a.m., arriving 11:52 a.m.
    // departing 11:19 a.m., arriving 1:31 p.m.
    // departing 12:47 p.m., arriving 3:00 p.m.
    // departing 2:00 p.m., arriving 4:08 p.m.
    // departing 3:45 p.m., arriving 5:55 p.m.
    // departing 7:00 p.m., arriving 9:20 p.m.
    // departing 9:45 p.m., arriving 11:58 p.m.
    */

    // "closest" minute threshholds ~ midpoint between departures
    a = (( 8 * 60 +  0) + ( 9 * 60 + 43)) / 2;
    b = (( 9 * 60 + 43) + (11 * 60 + 19)) / 2;
    c = ((11 * 60 + 19) + (12 * 60 + 47)) / 2;
    d = ((12 * 60 + 47) + (14 * 60 +  0)) / 2;
    e = ((14 * 60 +  0) + (15 * 60 + 45)) / 2;
    f = ((15 * 60 + 45) + (19 * 60 +  0)) / 2;
    g = ((19 * 60 +  0) + (21 * 60 + 45)) / 2;

    if (since_midnight <= a)
        printf("8:00 a.m., arriving at 10:16 a.m.\n");
    else if (since_midnight <= b)
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    else if (since_midnight <= c)
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    else if (since_midnight <= d)
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    else if (since_midnight <= e)
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    else if (since_midnight <= f)
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    else if (since_midnight <= g)
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}
