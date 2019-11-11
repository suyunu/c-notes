# Week 7 Notes - 06.11.2019

## Warmup

### Question 1 - NoOdd (LAB4 Q12)

Write a program that will take integers until the user enters an odd number. Then print the average of the even numbers. (Assume only positive numbers will be entered by the user.)

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 2 4 12 6 7  | 6.00 |
| 3  | 0.00 |
| 2 22 44 24 46 3 | 27.60 |

<br />

### Question 2 - NoBig

Write a program that reads numbers until the entered number is greater than the previous entered number. Then print the sum of all entered numbers less than the last one. (At least two numbers will be entered)

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 5 4 3 3 8 | 15 |
| 5 4 3 3 8 7 5 9 | 15 |
| 1 2 | 1 |
| 100 54 46 2 3 50| 202 |

<br />

### Question 3 - NoBigger

Write a program that reads numbers until the entered number is greater than the sum of two previous entered numbers. Then print the sum of all entered numbers except the last one. (At least three numbers will be entered)

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 5 4 3 3 8 | 15 |
| 5 4 3 3 8 7 5 9 | 15 |
| 1 2 3 6  | 6 |
| 100 54 46 200 3| 200 |

<br />


## Functions

https://www.geeksforgeeks.org/functions-in-c/

### What is it?
* Kod parcalarinin toparlanip isim verilmis hali.
* A function is a set of statements that take inputs, do some specific computation and produces output.
* The idea is to put some commonly or repeatedly done task together and make a function so that instead of writing the same code again and again for different inputs, we can call the function.

### Why Functions

#### Reusability
* Functions help us in reducing code redundancy. 
* If functionality is performed at multiple places in software, then rather than writing the same code, again and again, we create a function and call it everywhere.
* This also helps in maintenance as we have to change at one place if we make future changes to the functionality.

#### Abstraction
* In order to use a particular function you need to know the following things: 
  * The name of the function
  * What the function does
  * What arguments you must give to the function
  * What kind of result the function returns
**But notice:** If you just want to use the function in your program, you don't have to know how it works inside! 

#### Style and Modular
* Functions make code modular. Consider a big file having many lines of codes. It becomes really simple to read and use the code if the code is divided into functions.


### Function Declaration

```c
return_type function_name  (parameter_list) {
	local_variable_definitions
	statement(s)    
}
```

![Function Declaration](https://www.geeksforgeeks.org/wp-content/uploads/Function-Prototype-in-c.png)


## Scopes

* Typically there are three types of variables:
  * Local variables (also called as automatic variables in C)
  * Global variables
  * Static variables


* Memory is divided into four segments: code, data(uninitialized(bss) and initialized), heap, stack
  * global and static variables -------> data 
  * local variables(declared and defined in functions) --------> stack
  * dynamically allocated space --------> heap


* Data kutusu icinde global degiskenler var, bunlar yok olmuyor

* Her fonksiyon olusturulunca da,
  * Stack kutusu icinde yeni fonksiyon kutulari aciliyor.
  * Fonksiyon bitince bu kutu yok ediliyo.
  * Program bir degisken ararken once en icteki kutudan aramaya basliyo.


**Scope of Varibles**

```c
#include <stdio.h>
 
/* function declaration */
void swap(int a, int b);

/* function definition to swap the values */
void swap(int a, int b) {

   int temp;

   temp = a; /* save the value of a */
   a = b;    /* put b into a */
   b = temp; /* put temp into b */
  
   return;
}
 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
 
   printf("Before swap, value of a : %d\n", a );
   printf("Before swap, value of b : %d\n", b );
 
   /* calling a function to swap the values */
   swap(a, b);
 
   printf("After swap, value of a : %d\n", a );
   printf("After swap, value of b : %d\n", b );
 
   return 0;
}

```

<br />

### Question 4 - Get RECT (LAB5 Q8)

Write a function that takes two integers as parameters n and m, and prints out a rectangle nxm using '\*'s.

Then write main() appropriately to see the result.


|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 2 3 | \*\*\* <br>\*\*\* |
| 3 7 | \*\*\*\*\*\*\* <br>\*\*\*\*\*\*\* <br>\*\*\*\*\*\*\* |

<br />

### Question 5 - Sum (LAB5 Q4)

Write a function which takes two integers as function parameters and returns their summation as an integer.

The main function reads two integers from the user, and calls the function using these integers as parameters, and finally prints the returned result.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 12 24 | 36 |
| -11 11 | 0 |
