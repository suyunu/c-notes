
# Week 12 Notes - 11.12.2019

## Multi Dimensional Arrays

### Question 1 - Interstellar

Given a 4x4 matrix consisting of * and lowercase English alphabets, the task is to find the character which has the maximum number of * around it (including diagonal elements too). If two characters have same maximum count, print lexicographically smallest character.

```
Input      Output
b***       a
**c*       
*a**       
***d       

Input      Output
*r**       f
maz*       
l*fk       
***d       
```

<br>

### Question 2 - Rook and Pawns (Lab9 Q2)
Write a program which reads a chessboard as an 8x8 matrix from the user. In the chessboard, there will be one rook (kale) represented by integer: 8, and multiple pawns (piyonlar) represented by integer: 1. The rest will be empty: 0.

The rook will capture the closest possible pawn. Your program should print the chessboard to the screen after the capture. 

```
Input               Output
0 0 0 0 0 0 0 1     0 0 0 0 0 0 0 1
0 0 0 0 1 0 0 0     0 0 0 0 1 0 0 0
0 0 8 0 0 0 0 1     0 0 0 0 0 0 0 1
0 1 0 0 0 0 0 0     0 1 0 0 0 0 0 0
0 0 1 0 0 0 0 0     0 0 8 0 0 0 0 0
0 0 0 0 0 0 0 0     0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0     0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0     0 0 0 0 0 0 0 0
```

## String

* #include <string.h>
* How to read Strings:
  * scanf("%s") --> Until space
  * gets        --> Until enter
* Functions
  * strlen()
    * Try to put \0 in a string.
      * char s1[100] = "01234 56789", s2[100] = "abc defg";
  * strcpy()
    * The destination should be large enough!
    * May not be null-terminated if s2 is longer than n.
    * Try to put \0 in a string.
      * char s1[100] = "01234 56789", s2[100] = "ab\0c defg";
    * Try to copy s2+2 to s1+1
  * strcmp()
    * Take difference of each character in s1 and s2 respectively (diff = s1[i] - s2[i]). If all same print 0, else print diff. 
      * char s1[100] = "abc zefg", s2[100] = "abc defg";
    * Try to put \0 in a string.
      * char s1[100] = "ab\0c defg", s2[100] = "abc defg";
    * Try to copy s1+1 to s2
      * char s1[100] = "abc defg", s2[100] = "abc defg";
    * s2 < s1 --> strcmp(s1, s2) ?==? strncmp(s1, s2, strlen(s2));
      * char s1[100] = "hello", s2[100] = "hello";
      * char s1[100] = "hellol", s2[100] = "hello";
  * strcat()
    * The destination should be large enough!
    * Puts \0 at the end after copy even with if s2 is longer than n.
    * (n) Try to put \0 in a string.
      * char s1[100] = "ab\0cdef ghjkl", s2[100] = "012 3456";
    * (n) Try to copy s2+2 to s1

<br>

### Question 3 - MyStrcmp

Write strcmp function.

<br>


### Question 4 - Get Me Out Of Here

Write a program which reads a sentence as a string, and a word as a string. Then the program should exclude this word from the sentence if the sentence contains the word, then print the new version to the screen. Assume no punctuation will occur, and every letter is lower case.

|  INPUT  |  OUTPUT |
|-------|-------|
| merhaba dunyali nasilsin<br>dunyali | merhaba nasilsin |