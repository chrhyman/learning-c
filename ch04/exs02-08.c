/*
// Author: Chris Hyman, chris@wugs.me
// Date: 27 Sept 2020
// A solution to Programming Exercises and Projects from
// Chapter 4 of C Programming: A Modern Approach by K. N. King
//
// 2. If `i` and `j` are positive integers, does `(-i)/j` always have the same
// value as `-(i/j)`? Justify your answer.
//          No. In C89, `(-i)/j` has two potential values depending on how the
//          compiler rounds (either toward zero or -inf), but `-(i/j)` has one.
//          In C99, result of div is always truncated toward zero so these two
//          expressions are identical.
//
// 3+4. What is the value of each of the following expressions
// in (3) C89 and (4) C99? (Give all possible values an expression may have.)
//          expr     |  C89         C99
//         - - - - - + - - - - - - - - - -
//          8 / 5    |  1           1
//          -8 / 5   |  -1, -2      -1
//          8 / -5   |  -1, -2      -1
//          -8 / -5  |  1, 2         1
//
// 5+6. What is the value of each of the following expressions
// in (5) C89 and (6) C99? (Give all possible values an expression may have.)
//          expr     |  C89         C99
//         - - - - - + - - - - - - - - - -
//          8 % 5    |  3           3
//          -8 % 5   |  -3, 2       -3
//          8 % -5   |  -3, 2       3
//          -8 % -5  |  -3, 2       -3
// nb: I'm just using notes for C89 guesses. I don't have a C89 compiler.
//
// 7. Demonstrate how `9 - ((x - 1) % 10)` is not equal to `10 - (x % 10)`.
//          ex. input of x=100 causes the first to yield
//              9 - (99%10) => 9 - 9 => 0
//          and the second to yield
//              10 - (100%10) => 10-0 => 10 (not a single digit!)
//
// 8. Would the `upc.c` program still work if the expression
// `9 - ((total - 1) % 10)` were replaced by `(10 - (total % 10)) % 10`?
//          Yes. This eliminates getting a result of 10 / lacking digit 0.
*/
