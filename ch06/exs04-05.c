/*
// Author: Chris Hyman, chris@wugs.me
// Date: 3 Oct 2020
// A solution to Programming Exercises and Projects from
// Chapter 6 of C Programming: A Modern Approach by K. N. King
//
// 4. Which one of the following statements is not equivalent to the other two
// (assuming that the loop bodies are the same)?
//      (a) for (i = 0; i < 10; i++) ...
//      (b) for (i = 0; i < 10; ++i) ...
//      (c) for (i = 0; i++ < 10; ) ...
//
//              (c) is not equivalent because the increment takes place before
//              the loop executes, thus altering the value of i. Whereas (a)
//              and (b) increment i at the end of the loop.
//
// 5. Which one of the following statements is not equivalent to the other two
// (assuming that the loop bodies are the same)?
//      (a) while (i < 10) {...}
//      (b) for (; i < 10; ) {...}
//      (c) do {...} while (i < 10);
//
//              (c) is not equivalent because it always executes the loop body
//              once, whereas (a) and (b) would not execute the loop body at
//              all if i was never less than 10.
*/
