/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 2. Write a program that formats product information entered by the user. A
// session with the program should look like this:
//      Enter item number: `583`
//      Enter unit price: `13.5`
//      Enter purchase date (mm/dd/yyyy): `10/24/2010`
//
//      Item        Unit        Purchase
//                  Price       Date
//      583         $  13.50    10/24/2010
//
// The item number and date should be left justified; the unit price should be
// right justified. Allow dollar amounts up to $9999.99.
*/

#include <stdio.h>

int main(void)
{
  int item_num, day, month, year;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_num);
  printf("Enter unit price: ");
  scanf("%f", &unit_price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d /%d /%d", &month, &day, &year);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n",
    item_num, unit_price, month, day, year);

  return 0;
}
