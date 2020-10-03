/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 9. Write a program that prompts the user to enter two dates and then
// indicates which date comes earlier on the calendar:
//          Enter first date (mm/dd/yy): `3/6/08`
//          Enter second date (mm/dd/yy): `5/17/07`
//          5/17/07 is earlier than 3/6/08
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    int fst_mm, fst_dd, fst_yy, snd_mm, snd_dd, snd_yy;
    bool first_is_earlier;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &fst_mm, &fst_dd, &fst_yy);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &snd_mm, &snd_dd, &snd_yy);

    if (fst_yy == snd_yy) {
        if (fst_mm == snd_mm) {
            if (fst_dd == snd_dd) {
                printf("Both dates are the same!\n");
                return 0;                               // exit program
            }
            else if (fst_dd < snd_dd)
                first_is_earlier = true;
            else
                first_is_earlier = false;
        }
        else if (fst_mm < snd_mm)
            first_is_earlier = true;
        else
            first_is_earlier = false;
    }
    else if (fst_yy < snd_yy)
        first_is_earlier = true;
    else
        first_is_earlier = false;

    if (first_is_earlier)
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
            fst_mm, fst_dd, fst_yy, snd_mm, snd_dd, snd_yy);
    else
        printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n",
            snd_mm, snd_dd, snd_yy, fst_mm, fst_dd, fst_yy);

    return 0;
}
