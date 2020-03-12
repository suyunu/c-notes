# Week 5 Notes - 11.03.2020

## Star Items of the Last Week
<details>
<summary>Star Item 1</summary>
*** Indentation saves lives (and codes) ***
</details>

<details>
<summary>Star Item 2</summary>
*** No boolean expression after else *** 
</details>

## Warm-Up

### Question 1 - Chars from Hell

Write a program that reads a character.  Prints upper-case version of the entered letter if it is a lower-case letter and vice versa. If it is a numeric character, then prints 2 times of the entered number as an integer. If not a letter or number then prints "asdfasdf".

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| d  | D   |
| B  | b  |
| 7  | 14  |
| .  | asdfasdf  |

<br />


## Loops


**Conditional (if)**
 * Do it if the boolean-expression is true (Only once)
 
**Loops (while - for)**
 * Do it while the boolean-expression is true
 * Do it until the boolean-expression is not true

|  Conditional |  Loops |
|:-------:|:-------:|
| ![Conditional Statement](https://www.tutorialspoint.com/cplusplus/images/cpp_decision_making.jpg) &nbsp; &nbsp; | &nbsp; &nbsp;  ![Loops](https://www.tutorialspoint.com/cplusplus/images/loop_architecture.jpg)   |

<br />

<br />

|  while( ) |  for( ; ; ) |
|:-------:|:-------:|
| ![while](https://www.tutorialspoint.com/cplusplus/images/cpp_while_loop.jpg) &nbsp; &nbsp; | &nbsp; &nbsp;  ![for](https://www.tutorialspoint.com/cplusplus/images/cpp_for_loop.jpg)|

<br />


```c
#include <stdio.h>

int main(){			
    
    /* WHILE LOOP */
    i = 0;   // i is the loop control variable, initialize before using
    while ( i < 10) // executes 0 or more times, each execution is called iteration
    {
        /* statements */ 
        i++; // do NOT forget to update the control variable

    } 
    
    /* FOR LOOP */
    int j; // declare the control variable
    for ( j = 0; j < 10; j++)  // control variable initialization, control statement, and update
    {                         // in the same line 
        /* statements*/

    }
    
    /* DO-WHILE LOOP */
    int z=0; // initialize the control variable
    do  // executes 1 or more times!!
    {
        /* statements */
        z++;

    } while ( z < 10 ); // do not forget ;  

}
 ```
 
<br>

* Control only happens at the if(), while(), for() statement rows. Not a continuous control.

```c
int i = 5;
if(i > 0){
	printf('A');
	i = -5;
	printf('B');
}
```

<br />

### Question 2 - Staaaars

#### Question 2a
Write a program that prints 1 star ('*') to the screen.

#### Question 2b
Write a program that prints 10 stars ('*') next to each other to the screen.

#### Question 2c
Write a program that reads an integer N and prints N stars ('*') next to each other to the screen.

#### Question 2d
Write a program that reads an integer N and prints N stars ('*') vertically to the screen.

<br />

### Question 3 - Numbeeeers

Write a program that reads an integer N and prints numbers from 1 to N to the screen.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 5  | 1 2 3 4 5   |
| 2  | 1 2  |

<br />

### Question 4 - Hooping Numbers

Write a program that reads 3 integers A, B and t from the user. Then prints numbers from B to A with decrement of t.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 7 16 3  | 16 13 10 7 |
| 2 30 6  | 30 24 18 12 6 |

<br />

### Question 5 - Even Numbeeeers

Write a program that reads two integers A and B. Then prints the sum of even numbers between A and B. Assume that B > A.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 3 8  | 10 |
| 2 13 | 40  |
| 3 5 | 4  |

<br />

### Question 6 - Boom Boom POW (LAB4 Q6)

Write a program that takes 2 integers a and b, then prints the result of a^b (a\*a\*a...\*a\*a). 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 3 4  | 81 |
| 2 10  | 1024 |






