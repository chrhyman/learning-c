/*
// Author: Chris Hyman, chris@wugs.me
// Date: 26 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 3 of C Programming: A Modern Approach by K. N. King
//
// 3. Books are identified by an International Standard Book Number (ISBN).
// ISBNs assigned after January 1, 2007 contain 13 digits, arranged in five
// groups, such as 978-0-393-97950-3. (Older ISBNs use 10 digits.) The first
// group (the `GS1 prefix`) is currently either 978 or 979. The `group
// identifier` specifies the language or country of origin (for example, 0 and
// 1 are used in English-speaking countries). The `publisher code` identifies
// the publisher (393 is the code for W. W. Norton). The `item number` is
// assigned by the publisher to identify a specific book (97950 is the code for
// this book). An ISBN ends with a `check digit` that's used to verify the
// accuracy of the preceding digits. Write a program that breaks down an ISBN
// entered by the user:
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
