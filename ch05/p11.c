/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 11. Write a program that asks the user for a two-digit number, then prints
// the English word for the number:
//          Enter a two-digit number: `45`
//          You entered the number forty-five.
*/

#include <stdio.h>

int main(void)
{
    int tens, ones;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &ones);
    printf("You entered the number ");

    if (tens == 1) {
        switch (ones) {
            case 0:
                printf("ten.\n");
                return 0;
            case 1:
                printf("eleven.\n");
                return 0;
            case 2:
                printf("twelve.\n");
                return 0;
            case 3:
                printf("thirteen.\n");
                return 0;
            case 4:
                printf("fourteen.\n");
                return 0;
            case 5:
                printf("fifteen.\n");
                return 0;
            case 6:
                printf("sixteen.\n");
                return 0;
            case 7:
                printf("seventeen.\n");
                return 0;
            case 8:
                printf("eighteen.\n");
                return 0;
            case 9:
                printf("nineteen.\n");
                return 0;
        }
    }
    else if (2 <= tens && tens <= 9) {
        switch (tens) {
            case 2:
                printf("twenty");
                break;
            case 3:
                printf("thirty");
                break;
            case 4:
                printf("forty");
                break;
            case 5:
                printf("fifty");
                break;
            case 6:
                printf("sixty");
                break;
            case 7:
                printf("seventy");
                break;
            case 8:
                printf("eighty");
                break;
            case 9:
                printf("ninety");
                break;
        }
    }
    else {
        printf("Error.\n");
        return 0;
    }

    switch (ones) {
        case 0:
            printf(".\n");
            break;
        case 1:
            printf("-one.\n");
            break;
        case 2:
            printf("-two.\n");
            break;
        case 3:
            printf("-three.\n");
            break;
        case 4:
            printf("-four.\n");
            break;
        case 5:
            printf("-five.\n");
            break;
        case 6:
            printf("-six.\n");
            break;
        case 7:
            printf("-seven.\n");
            break;
        case 8:
            printf("-eight.\n");
            break;
        case 9:
            printf("-nine.\n");
            break;
    }


    return 0;
}
