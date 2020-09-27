/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 3. Books are identified by an International Standard Book Number (ISBN).
// Write a program that breaks down an ISBN entered by the user:
//
//      Enter ISBN: `978-0-393-97950-3`
//      GS1 prefix: 978
//      Group identifier: 0
//      Publisher code: 393
//      Item number: 97950
//      Check digit: 3
//
// Note: The number of digits in each group may vary.
*/

#include <stdio.h>

int main()
{
  int gs1, group, publisher, item, check;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item, &check);

  printf("GS1 prefix: %d\n", gs1);
  printf("Group identifier: %d\n", group);
  printf("Publisher code: %d\n", publisher);
  printf("Item number: %d\n", item);
  printf("Check digit: %d\n", check);

  return 0;
}
