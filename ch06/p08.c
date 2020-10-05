/*
// Author: Chris Hyman, chris@wugs.me
// Date: 5 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
//
// 8. Write a program that prints a one-month calendar.
//          Enter number of days in month: `31`
//          Enter starting day of the week (1=Sun, 7=Sat): `3`
//
//                  1   2   3   4   5
//          6   7   8   9   10  11  12
//          13  14  15... etc
*/

#include <stdio.h>

int main(void)
{
    int days_in_month, start_day, day_of_week;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);
    printf("\nSun\tMon\tTues\tWed\tThur\tFri\tSat\n");

    for (day_of_week = 1; day_of_week < start_day; day_of_week++)
        printf("\t");

    for (int i = 1; i <= days_in_month; i++) {
        printf("%2d", i);
        day_of_week++;
        if (day_of_week > 7) { // meaning day 7 was just printed
            printf("\n");
            day_of_week = 1;
        }
        else
            printf("\t");
    }

    printf("\n");

    return 0;
}
