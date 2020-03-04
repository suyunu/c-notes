
# Week 4 Notes - 04.03.2020

---

### QUIZ: 15:30 - 15:50

---

## Last Week Refresher

## Star Items of the Last Week
<details>
<summary>Star Item 1</summary>
*** Zero => False, Nonzero => True ***
</details>

<details>
<summary>Star Item 2</summary>
*** Letters and digits are consecutive in ASCII table *** 
</details>

### Operators

* Assignment Operators (=, +=, -=, \*=, /=)
* Arithmetic Operators (+, -, \*, /, %)
* Increment-Decrement (++, --)
* Logical Operators (&&, ||, !)
  * Zero => False
  * Nonzero => True
* Relational Operators (>, <, >=, <=, ==, !=)
* Precedence: Parentheses > Arithmetic Operators > Comparison Operators > Logical Operators > Assignment Operators

### Char

- Represent characters (letters, digits, signs)

- 1 byte = 8 bits = 256 values.

- **Encoding:** Mapping characters to integer values

  - ASCII table: maps 256 characters.

    ![](http://www.asciitable.com/index/asciifull.gif)

### Only Thing You Should Remember About ASCII Table: Letters and digits are consecutive

- Variable stores corresponding integer value of character. The translation is done by i/o functions.

  | Syntax | Meaning       |
  | ------ | ------------- |
  | a      | variable name |
  | 'a'    | character     |
  | "a"    | string        |
  
  
### Char is a character and an integer at the same time!

---

## Warm-Up

### Question 1 - What's Next?
Write a program which reads a character from the user. Print the 3rd character that comes after the input character. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| c  | f  |
| M  | P  |
| !  | $  |

<!---

### Question 1 - Smol
Write a program which reads a lower-case char (character) from the user, then prints its upper-case version on the screen.

*Hint: Note that in the ASCII table, the distance between a lower-case letter and its corresponding upper-case version is the same for all letters.*

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| d   | D  |
| t   | T  |

-->

<br>


## Conditional Statements

The conditional statements **if**, **if-else**, and **switch** allow us to choose which statement will be executed next.

### The *if* statement

<details>
<summary>if Example 1</summary>
<br>

```c
    int a = 5;
    if(a > 0)
        printf("Positive\n");
    printf("a: \%d", a);
```

</details>

<br>

<details>
<summary>if Example 2</summary>
<br>

```c
    int a = 5;
    if(a > 0)
        printf("Positive\n");
        printf("Not Negative\n");
    printf("a: \%d", a);
```

</details>

<br>

<details>
<summary>if Example 3</summary>
<br>

```c
    int a = 5;
    if(a > 0){
        printf("Positive\n");
        printf("Not Negative\n");
    }
    printf("a: \%d", a);
```

</details>

<br>


### Switch

<details>
<summary>switch Example 1</summary>
<br>

```c
#include <stdio.h>

int main()
{
    char card = 'D';
    switch (day) {
        case 'C':
            printf("Clubs\n");
        case 'D':
            printf("Diamonds\n");
        case 'H':
            printf("Hearts\n");
        case 'S':
            printf("Spades\n");
        }

    return 0;
}
```

</details>

<br>

<details>
<summary>switch Example 2</summary>
<br>

```c
#include <stdio.h>

int main()
{
    char card = 'D';
    switch (day) {
        case 'C':
            printf("Clubs\n");
            break;
        case 'D':
            printf("Diamonds\n");
            break;
        case 'H':
            printf("Hearts\n");
            break;
        case 'S':
            printf("Spades\n");
            break;
        default:
            printf("WUT\n");
        }

    return 0;
}
```

</details>

<br>

<details>
<summary>switch Example 3</summary>
<br>


```c
#include <stdio.h>

int main()
{
    char day = 'W';
    int d;
    switch (day) {
        case 'M':
            printf("Monday\n");
            d = 1;
            break;
        case 'T':
            printf("Tuesday\n");
            d = 2;
            break;
        case 'W':
            printf("Wednesday\n");
            d = 3;
            break;
        case 't':
            printf("Thursday\n");
            d = 4;
            break;
        case 'F':
            printf("Friday\n");
            d = 5;
            break;
        case 'S':
            printf("Saturday\n");
            d = 6;
            break;
        case 's':
            printf("Sunday\n");
            d = 7;
            break;
        default:
            printf("Noday\n");
            d = 0;
        }
    printf("%d", d);

    return 0;
}
```

</details>

<br>

### Question 2 - Positivity

#### Question 2a
Write a program that reads an integer. If the integer is positive then print "positive", if it is not then print "not positive".

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 4  | positive   |
| -5  | not positive  |
| 0  | not positive  |

<br>

#### Question 2b
Write a program that reads an integer. If the integer is positive then print "positive", if it is negative then print "negative", if it is zero then print "zero".

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 4  | positive   |
| -5  | negative  |
| 0  | zero  |

<br>

#### Question 2c
Write a program that reads an integer. If the integer is positive then check if the number is odd or even and then print "odd" or "even", if it is negative then print the absolute value of the number, if it is zero then print "zero".

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 4  | even   |
| -5  | 5  |
| 0  | zero  |


<br />

### Question 3 - Divisible (Lab3 Q5)

Write a program that will take 2 numbers from the user and if the first number is divisible by the second number, your code should print "it is divisible", if it is not divisible, then print "it is not divisible". If any of your numbers are nonpositive, print "Incorrect Input" 


|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 45 5    | it is divisible   |
| 45 6    | it is not divisible  |
| -34 17  | Incorrect Input  |


<br />


### Question 4 - What am I to You

Write a program that will take 1 char from the user. If the char is a letter print "Lettuce", if the char is a digit (number) print "Durian", otherwise print "Nani!?"

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 2   | Durian   |
| b    | Lettuce  |
| ! | Nani!?  |



<br />

### Question 5 - Calculator (Lab3 Q4)

Write a basic calculator program (+, -, \*, /). The program takes three inputs: float, char, float, then prints the result. 

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 1 + 45  | 46.00   |
| 1 - 45  | -44.00  |
| 1 * 45  | 45.00   |
| 1 / 45  | 0.02    |
