
# Week 12 Notes - 20.05.2020

### Question 1 - Put My Words (String)

Write a program which reads a **sentence (string)**  a **word (string)** and a **positive integer number (int)**. Insert the word to the sentence as the given numbered word. Then modified sentence and the word **Cool** will be printed next to each other separated with one space.

A sentence consists of words separated by spaces. There will be at least one word in a sentence. There will be exactly one space between each word in a sentence. A word consists of only letters (both lowercase and uppercase is possible). A sentence cannot be longer than 1000 characters. A word cannot be longer than 20 letters. The number can't be larger than the number of words in the sentence + 1.

**Reminder:** A string is a char array that has \0 character at the end.

**Reminder 2:** There shouldn’t be spaces or new lines at the end or the beginning of the sentence.


|  INPUT  |  OUTPUT |
|-------|-------|
| is my life now <br>1 <br>this | this is my life now Cool |
| WHeN LiFe GiVeS You MaKe LeMoNaDe <br>5 <br>LeMoNs | WHeN LiFe GiVeS You LeMoNs MaKe LeMoNaDe Cool |
| dont Wait for <br>4 <br>Opportunity | dont Wait for Opportunity Cool |


```c
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char sentence[1001], word[21];

    fgets(sentence, 1000, stdin);
    scanf("%d %s", &n, word);

    // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE


    // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

    printf("%s Cool", sentence);

    return 0;
}
```

<br>

### Question 2 - Sorted Sentence (String)

Write a program which takes a string as parameter and sorts words of this string and prints the resulting string. Assume initial string has maximum 100 characters and the length of each word is at most 10.

Hint: You can use bubble sort algorithm.

|  INPUT  |  OUTPUT |
|-------|-------|
| is this a jojo reference | a is jojo reference this |

<br>

### Question 3 - Frequentist Character (String)

Write a program which reads a string and finds the maximum occurring character of that string. Then print the  
maximum occurring character and the number of occurrence. If two characters have same maximum count, print smallest character  in terms of ASCII value.

|  INPUT  |  OUTPUT |
|-------|-------|
| Is this a pigeon? | i 2 |
| 6<br>3 5 -10 4 -2 6 -1 | 8 3 3 |

<br>

### Question 4 - Largest Sub Array (Array)

Write a program which reads an integer N from the user, then reads N integers from the user. Find the largest sum of contiguous subarray of the array. Print the sum, starting index and the size of the subarray. Assume N is smaller than 50.

If there is a tie in sum, accept the subarray with the bigger size. If sizes are also equal, accept the subarray with the greater starting index.

|  INPUT  |  OUTPUT |
|-------|-------|
| 9<br>8 3 8 -5 4 3 -4 -3 5 | 21 0 6 |
| 6<br>3 5 -10 4 -2 6 -1 | 8 3 3 |

<br>


### Question 5 - Shift the Array (Array)

Write a function called **rightShiftA()** that takes the size of the array (N), an integer array (arr) and an integer variable (T) as parameters. The function right shifts the array T times.

Write a proper main function to see the effect of **rightShiftA()**.

|  INPUT  |  OUTPUT |
|-------|-------|
| 5 <br>1 2 3 4 5 <br>3 | 3 4 5 1 2 |
| 4 <br>1 2 3 4 <br>10 | 3 4 1 2 |

<br>

### Question 6 - Shift the Matrix (2D Array)

Write a function called **rightShiftM()** that takes two integers as the sizes of the 2D array (N and M), a integer 2D array (arr) and an integer variable (T) as parameters. The function right shifts the 2D array T times.

Write a proper main function to see the effect of **rightShiftM()**.

|  INPUT  |  OUTPUT |
|-------|-------|
| 2 3 <br>1 2 3 <br>4 5 6 <br>4 | 3 4 5 <br>6 1 2 |
| 2 3 <br>1 2 3 <br>4 5 6 <br>8 | 5 6 1 <br>2 3 4 |

<br>

### Question 7 - Interstellar (2D Array)

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


