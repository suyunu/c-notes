
# Week 3 - 26.02.2020

## Last Week Refresher

### Bit vs Byte

* **Bit:** the smallest unit, *0 or 1*.
* **Byte:** a collection of bits: *8 bits.* *(i.e. 01010111)* 


### Fundamental Data Types

![img](https://qph.fs.quoracdn.net/main-qimg-7852cd4b11648b9ec8029a5df338bc2b)



| Type                     | Size (bytes)                  | Format Specifier |
| :----------------------- | :---------------------------- | :--------------: |
| `int`                    | at least 2, usually 4         |       `%d`       |
| `char`                   | 1                             |       `%c`       |
| `float`                  | 4                             |       `%f`       |
| `double`                 | 8                             |      `%lf`       |
| `short int`              | 2 usually                     |      `%hd`       |
| `unsigned int`           | at least 2, usually 4         |       `%u`       |
| `long int`               | at least 4, usually 8         |      `%li`       |
| `long long int`          | at least 8                    |      `%lli`      |
| `unsigned long int`      | at least 4                    |      `%lu`       |
| `unsigned long long int` | at least 8                    |      `%llu`      |
| `signed char`            | 1                             |       `%c`       |
| `unsigned char`          | 1                             |       `%c`       |
| `long double`            | at least 10, usually 12 or 16 |      `%Lf`       |

## Star Items of the Last Week
<details>
<summary>Star Item 1</summary>
*** Always use  the correct format specifier (%d %f ..)***
</details>

<details>
<summary>Star Item 2</summary>
*** Type Casting *** 
</details>


## Warm-Up

### Question 1 - Time Flies

Write a program to convert a given integer (in seconds) to hours, minutes and seconds.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 25300   | 7 1 40  |
| 18000   | 5 0 0  |
| 155  | 0 2 35  |

<br>

---

### Constant

```c
#define constant_name constant_value
```

## Operators

### Assignment Operators (=, +=, -=, *=, /=)

* \<variable> = \<expression>
* Assign the value of the expression to the variable
* Right to left associative:  
  * ```a = b = c = 10;```  ``` a = (b = (c = 10));```
* Initialization:
  * int a = 3, b = 4;
    float x = 2.75;
* Compound assignment operator: 
  * a = a + b;
    a += b;
    

#### Compound assignment (+=, -=, *=, /=)

```c
#include <stdio.h>

int main(){
  int x=5, y=3;
   x +=y /* same as x = x + y */
  printf("x:%d\n",x);

  y *= x /* same as y = x * y */
  printf("y:%d x:%d\n",y,x);
    
  return 0;
}
```

<br>

#### Type Conversion

* Narrow to broader (i.e. int to float, 3 => 3.0): no loss of information. 

* Broad to narrower (i.e. float to int, 3.5 => 3): lost info. 

<br>

### Arithmetic Operators (+, -, *, /, %)

* The results of an operator expression is of the "wider" type (int < float < double)

* Integer division vs Float division

* Float division of integers: Multiply with 1.0 or cast into float. 

* Left to right associative: ```a/b/c```  <=>```(a/b)/c```

* Variable updates: 

  * x = x +1, 

  * ++, --: pre/post 
  
#### Increment-Decrement (++, --)

```c
#include <stdio.h>

int main(){
    int n = 5, x;
    n++;     /* n = 6 */
    printf("n:%d\n",n);
    // n = n+1 OR n += 1 OR n++

    x=n++; 
    printf("x:%d n:%d\n",x,n);
    /* equals to following two commands:
    * x = n;
    * n++;
    */

    x=n--;   
    printf("x:%d n:%d\n",x,n);
    /* equals to following two commands:
    * x = n;
    * n--;
    */  

    x=++n;   
    printf("x:%d n:%d\n",x,n);
    /* equals to following two commands:
    * n++;
    * x = n;
    */  

    x=--n;   
    printf("x:%d n:%d\n",x,n);
    /* equals to following two commands:
    * n--;
    * x = n;
    */  


    return 0;
}
 ```

<br>


### Logical Operators

* Boolean operations (true vs false) 
  * Zero => False
  * Nonzero => True
* Operators: 
  * "&&" logical-AND
  *  "||" logical-OR 
  *  "!" negation

![](https://camo.githubusercontent.com/8f75228b5905e61ee55f141a940b3bb8a836d15a/68747470733a2f2f76696367726f75742e66696c65732e776f726470726573732e636f6d2f323031342f30372f74727574687461626c65732e676966)    

#### Short Circuit

##### OR

```c
#include <stdio.h>
int main()
{
    int a = 2, b = 5;
    printf("%d %d %d\n", a++ || ++b, a, b);
    printf("%d %d", a, b);
    
    return 0;
}
```
<br />

##### AND

```c
#include <stdio.h>
int main()
{
    int a = -1, b = 5;
    printf("%d %d %d\n", ++a && ++b, a, b);
    printf("%d %d", a, b); 
    
    return 0;
}
```

<br>

### Relational Operators

* Value comparisons: 0 if False, otherwise True

| **Operators** | **Example/Description**                  |
| ------------- | ---------------------------------------- |
| >             | x > y (x is greater than y)              |
| <             | x < y (x is less than y)                 |
| >=            | x >= y (x is greater than or equal to y) |
| <=            | x <= y (x is less than or equal to y)    |
| ==            | x == y (x is equal to y)                 |
| !=            | x != y (x is not equal to y)             |

<br>

### Expressions and precedence

- Highest precedence: Parentheses
- *, /, % are evaluated before +, -
- **Arithmetic Operators > Comparison Operators > Logical Operators > Assignment Operators**
- Associativity is used when there are two or more operators of same precedence



<br>

---

## Char

- Represent characters (letters, digits, signs)

- 1 byte = 8 bits = 256 values.

- **Encoding:** Mapping characters to integer values

  - ASCII table: maps 256 characters.

    ![](http://www.asciitable.com/index/asciifull.gif)

## Only Thing You Should Remember About ASCII Table: Letters and digits are consecutive

- Variable stores corresponding integer value of character. The translation is done by i/o functions.

  | Syntax | Meaning       |
  | ------ | ------------- |
  | a      | variable name |
  | 'a'    | character     |
  | "a"    | string        |
  
  
## Char is special!! It is a character and an integer at the same time!


<br>

---

# Questions

### Question 2 - Number the Letter

Write a program which reads an upper-case char (character) from the user, then prints its rank in the alphabet.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| D   | 4  |
| G   | 7  |

<br>

### Question 3 - Bigger is Better (Lab2 Q2)
Write a program which reads a lower-case char (character) from the user, then prints its upper-case version on the screen.

*Hint: Note that in the ASCII table, the distance between a lower-case letter and its corresponding upper-case version is the same for all letters.*

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| d   | D  |
| t   | T  |

<br>

### Question 4 - Characteristic Numbers

Write a program that reads two numeric **characters** and prints their multiplication.

| INPUT      | OUTPUT    |         
| ---------  |:---------:| 
| 9 8      | 72| 
| 1 3     | 3| 


```c
#include <stdio.h>

int main(){
    
    char ch1, ch2;
    scanf("%c %c", &ch1, &ch2);
    
    /*
    *  YOUR SOLUTION HERE
    *
    */

    return 0;
}
 ```
