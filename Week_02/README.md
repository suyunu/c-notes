# Week 2 Notes - 19.02.2020


## Star Items of the Last Week
<details>
<summary>Star Item 1</summary>
*** Indentation ***
</details>

<details>
<summary>Star Item 2</summary>
*** Read Errors and Warnings *** 
</details>

---

## Last Week Refresher


### Output

```c 
#include <stdio.h>
int main()
{
    printf("Hello world!");
	return 0;    
}
```

<br>

### Integer variables

```c 
#include <stdio.h>
int main()
{
    int number_1, number_2, sum;
    number_1 = 3;
    number_2 = 5;
    sum = number_1 + number_2;
    printf("Number1: %d Number2: %d Sum: %d \n", number_1, number_2, sum);
	return 0;    
}
```

<br>

### Variable names

* It can contain alphanumeric characters and underscore(_)
* It cannot start with number.
* Case-sensitive.


<br>

### Getting Input: Scanf()

* Format: ```scanf("%d", &number);```  *the variable **number** must be declared before.*
* Requires  *stdio.h*: ```#include <stdio.h>```

```c
#include <stdio.h>
int main(){
    // Declare variables
    int number_1, number_2, product;
    
    //Read first value
    scanf("%d", &number_1);
    
    //Read second value
    scanf("%d", &number_2);
    product = number_1 * number_2;
    
    // Display output
    printf("The product of %d and  %d is %d\n", number_1, number_2, product);
    return 0;
}
```

<br>

---


## Warm-Up

### Question 1 - Triple Sum

Write a program that takes 3 integers from the user and then prints the sum of the numbers.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 3 4 5   | 12  |
| 2 2 4   | 8 |
| 1 9 15   |  25  |

<br>

---




# Data Types

### Bit vs Byte

* **Bit:** the smallest unit, *0 or 1*.
* **Byte:** a collection of bits: *8 bits.* *(i.e. 01010111)* 

<br>

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

### Integer Representation

<img src="https://www.allaboutcircuits.com/uploads/articles/TwoComplementCircleV2.jpg" alt="Image result for two's complement" style="zoom: 50%;" />

<br>


#### Two's Complement

* Leftmost bit represents the sign (0 for positive, 1 for negative).
* If positive, value is the numeric value of the remaining binary pattern.
* If negative, value is the numeric value of the complement(\*) of the remaining binary pattern, plus one. (*) complement: Switch 0's to 1's, and vice versa.
* Example: 0 100 0001
  * Sign bit is 0 ⇒ positive.
  * Absolute value is 100 0001B = 65D (D: Decimal; B: Binary)
  * The represented value is +65D
* Example: 1 000 0001
  * Sign bit is 1 ⇒ negative
  * Absolute value is the complement of 000 0001B plus 1, i.e., 111 1110B + 1B = 127D
  * Hence, the represented value is -127D

------

* If an integer type is stored in N bits
  * Signed range: -2^(N-1) and 2^(N-1) -1
  * Unsigned range: 0 to 2^N - 1.
  * Example: int: 4 bytes = 32 bits
    * int: - 2^(31) and 2^(31) -1.
    * unsigned int: 0 and 2^(32) - 1.
* The sizeof() function returns the number of bytes occupied by each type. Returns *long*, so the identifier: *%lu*

<br>

#### Overflow: Outside of the range.

```c 
#include <stdio.h>
int main()
{
    // the sizes of data types
    printf("size of int = %lu\n", sizeof(int));
    printf("size of long int  = %lu\n", sizeof(long));
    printf("size of unsigned int = %lu\n", sizeof(unsigned int));
    printf("size of char = %lu\n", sizeof(char));
    int a; // declaration
    a = 2147483647; // assignment of largest int
    printf("%d\n", a+1);
    return 0;
}
```

<br>

### Floating Point Representation

Stores nonintegers. 

|    Type     | Storage size |      Value range       |     Precision     |
| :---------: | :----------: | :--------------------: | :---------------: |
|    float    |    4 byte    |   1.2E-38 to 3.4E+38   | 6 decimal places  |
|   double    |    8 byte    |  2.3E-308 to 1.7E+308  | 15 decimal places |
| long double |   10 byte    | 3.4E-4932 to 1.1E+4932 | 19 decimal places |

<br>

---

# Questions

## Q2 - Rectangle

Write a program that reads two integers as the side lengths of a rectangle. Then outputs the perimeter and the area of the rectangle.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 3 5   | 16 15  |

<br>

## Q3 - Circle

Write a program that reads a float as the radius of a circle. Then outputs the circumference and the area of the circle. (pi = 3.14)

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 4.5  | 28.260 63.585 |

<br>
    
## Q4 - Average

Write a program that reads three integers from the user. Then outputs the average of these three numbers. (Hint: Type Casting)

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 2 3 5   | 3.33  |

<br>

## Question 5 - Odd Enough

Write a program that takes 3 integer from the user and then pronts the sum of odd numbers.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 3 4 5   | 8  |
| 2 2 4   | 0  |
| 1 9 15   |  25  |

