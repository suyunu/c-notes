# Week 13 Notes - 18.12.2019

## Strings

```c
#include <stdio.h>

int main() {
  int i;
  char x[] = "12345";
  char arr[100];
  gets(arr); // read 12345
  
  printf("%u %u\n", strlen(x), strlen(arr));
  for(i = 0 ; i < 7 ; i++)
    printf("%c-", x[i]);
  printf("\n");
  for(i = 0 ; i < 7 ; i++)
    printf("%c-", arr[i]);


  return 0;
}

```

### Question 1 - Find Me

Write a function which takes a sentence as a string (char array) with size at most 150, and one integer (x), and another empty string with size at most 30. The function should put the x.th word of the sentence to the empty string.

In the main program read a sentence, and an integer from the user, then call the function and print the resulting word to the screen. Assume every letter is lower case, and no punctuation will occur, and the sentence will have enough words to return the requested one.

|  INPUT  |  OUTPUT |
|-------|-------|
| aksam oldu huzunlendim ben yine<br>3 | huzunlendim |



## Structs

### Question 2 - Letter Grades (LAB10 Q1)
The given code defines a struct: Student. The program currently reads an integer: n, then reads midterm 1, midterm 2 and final grades of n students. Assigns an id to each student from 1000 to 1000+n-1, and gives a letter grade 'I' to each of them. Then prints their id's, average grades and letter grades.

You should complete the given section to assign an appropriate letter grade to each student. Like:

* 100-75: A
* 74-50: B
* 49-25: C
* 24-0: F

Exam weights are 30%, %30, %40, respectively. 

|  INPUT  |  OUTPUT |
|-------|-------|
| 3<br>100 0 100<br>27 25 92<br>82 77 100| 1000 70.0 B<br>1001 52.4 B<br>1002 87.7 A |



### Question 3 - Book Prices (LAB10 Q2)
Define a struct named: Book. Each book should have a name with exactly 3 letters (abbreviation). Each book should also have a page count (integer), and a price (integer).

Write a program which reads an integer n first, then read page counts, the names and prices of n books.

Write a function which takes an array of books, and sorts them according to their prices.

Using that function, your program should print the names and page counts of each book with the order of their prices. Like:

1. LOT: 528 pages.
2. THG: 727 pages.
3. MSB: 340 pages.
4. etc..

Reading and printing format is up to you.

|  INPUT  |  OUTPUT |
|-------|-------|
| 3<br>727 THG 32<br>528 LOT 15<br>340 MSB 120| LOT: 528 pages - 15 gold<br>THG: 727 pages - 32 gold<br>MSB: 340 pages - 120 gold |


### Question 4 - Smaller Better Faster Stronger (2018 Fall Final Q4)
Mossy Land's department of science and technology started a competition to find the rectangle with the smallest area. All the participants submitted their rectangles. Then a group of scientists calculated edge lengths of each rectangle and send them to you. Your task is to find the rectangle with the smallest area.

You will write a function (min_rectangle_area) that takes two parameters (a Rectangle array and an integer) then returns a Rectangle.

**Input:**
* The first line of the input contains: N (1 <= N <= 100) the number of rectangles.
* The next N lines contains 2 numbers that describes the edge lengths of each rectangle: edge_1 edge_2. (0 < edge_1, edge_2 < 100000)

**Output:**
* The area of the rectangle that has the smallest area.


|  INPUT  |  OUTPUT |
|-------|-------|
| 2<br>2 5<br>3 4| 10.00 |
| 3<br>4.2 2.1<br>1.8 5.3<br>2 8.2  | 8.82 |
| 8<br>12 684<br>485 684<br>48 542<br>158 48<br>564 12<br>21 188<br>126 441<br>1200 1450 | 3948.00 |
| 4<br>1.1 2.2<br>2.2 3.3<br>1.1 3.3<br>1.1 2.2 | 2.42 |


```c
#include <stdio.h>

typedef struct rectangle{
    float edge1;
    float edge2;
}Rectangle;

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main(){
    Rectangle r_min;
    int i;
    int N;
    Rectangle r[100];
    
    scanf("%d", &N);

    // Reads Rectangles
    for(i = 0 ; i < N ; i++)
        scanf("%f %f", &r[i].edge1, &r[i].edge2);
    
    r_min = min_rectangle_area(
    // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

    // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
    );
    
    // Prints the area of the rectangle that has the smallest area
    printf("%.2f\n", r_min.edge1*r_min.edge2);
        
    return 0;
}
```
