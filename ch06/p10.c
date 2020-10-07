/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 10. Generalize the program from Chapter 5 Programming Project 9 so that the
// user may enter any number of dates. The user will enter 0/0/0 to indicate
// that no more dates will be entered:
//          Enter a date (mm/dd/yy): `3/6/08`
//          Enter a date (mm/dd/yy): `5/17/07`
//          Enter a date (mm/dd/yy): `6/3/07`
//          Enter a date (mm/dd/yy): `0/0/0`
//          5/17/07 is the earliest date
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int early_mm = 0, early_dd = 0, early_yy = 0;
    int m_in, d_in, y_in;

    for (;;) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &m_in, &d_in, &y_in);

        if (d_in == 0 && m_in == 0 && y_in == 0) {      // input 0/0/0
            printf("%d/%d/%.2d is the earliest date\n",
                early_mm, early_dd, early_yy);
            return 0;
        }

        if ((early_mm == 0 && early_dd == 0 && early_yy == 0)
            || y_in < early_yy
            || (y_in == early_yy && m_in < early_mm)
            || (y_in == early_yy && m_in == early_mm && d_in < early_dd)
            ) {
            early_mm = m_in;
            early_dd = d_in;
            early_yy = y_in;
        }
    }
}
