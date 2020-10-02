/*
// Author: Chris Hyman, chris@wugs.me
// Date: 30 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 5 of C Programming: A Modern Approach by K. N. King
//
// 11. Write a `switch` statement that prints the corresponding city name if
// present in the table in the textbook; otherwise display an error.
*/

#include <stdio.h>

int main(void)
{
    int area_code;

    printf("Enter an area code: ");
    scanf("%d", &area_code);

    switch (area_code) {
        case 229:
            printf("Albany");
            break;
        case 404:
        case 470:
        case 678:
        case 770:
            printf("Atlanta");
            break;
        case 478:
            printf("Macon");
            break;
        case 706:
        case 762:
            printf("Columbus");
            break;
        case 912:
            printf("Savannah");
            break;
        default:
            printf("Area code not recognized");
            break;
    }

    return 0;
}
