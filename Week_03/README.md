# Week 3 - 09.10.2019

---

## Warm-Up

### Question 1 - Odd Enough

Write a program that takes 3 integer from the user and then pronts the sum of odd numbers.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 3 4 5   | 8  |
| 2 2 4   | 0  |
| 1 9 15   |  25  |

<br />


## Char

### Question 2 - Number the Letter

Write a program which reads an upper-case char (character) from the user, then prints its rank in the alphabet.

    input:
    D
    
    output:
    4

<br />

### Question 3 - Bigger is Better (Lab2 Q2)
Write a program which reads a lower-case char (character) from the user, then prints its upper-case version on the screen.

*Hint: Note that in the ASCII table, the distance between a lower-case letter and its corresponding upper-case version is the same for all letters.*

    input:
    d
    
    output:
    D

<br />

---

## Operators

### Short Circuit

#### OR

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

#### AND

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

