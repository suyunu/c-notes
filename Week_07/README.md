# Week 7 Notes - 15.04.2020

<details><summary><bold>Function Syntax</bold></summary><img src='https://www.geeksforgeeks.org/wp-content/uploads/Function-Prototype-in-c.png'/></details>

### Question 1 - Number Pyramid

Write a function named **pyramid** which takes an integer as input: **num_of_rows**, then prints the pyramid of numbers increased by 1 shown below. This function shouldn't return anything.

```
Input:
4

Output:
   1
  2 3
 4 5 6
7 8 9 10


Input:
3

Output:
  1
 2 3
4 5 6
```

<br>

#### Question 2 - Minimum

Write a function **find_min** which takes three integers as parameters and returns **minimum** among them. Then, call this function in main() with the following inputs and print corresponding outputs.

| Input   | Output |
| ------- | ------ |
| 5 3 8   | 3      |
| 14 -1 9 | -1     |

<br>

### Question 3 - Word Up (LAB5 Q2)

Write a function named **toUpper** which takes a char as input, and returns the upper case version of the character if it is a lower case letter. Otherwise it should return the same character.

Then write a program which reads a word from the user, and prints it with upper case characters. Assume valid words will be given. 


|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| bogazici | BOGAZICI |
| CmpE | CMPE |

<br>

#### Question 4 - Reverse

Write a function named **reverse** that will take an integer number and return its reverse version as another integer. Then fill/write main() appropriately to see the result.		

| Input | Output |
| ----- | ------ |
| 1234  | 4321   |
| 68436 | 63486  |

<br>

#### Question 5 - The Perfect Question

Write a function **is_perfect()** that checks whether the given number is perfect. Perfect number is a positive integer that is equal to the sum of its positive divisors excluding the number itself. The function prints the positive divisors (excluding itself) and returns 1 if the number is perfect and returns 0 otherwise. 

* (These 0 (false) or 1 (true) returning functions are also known as "boolean functions")

| Input | Output     | Return |
| ----- | ---------- | ------ |
| 5     | 1          | 0      |
| 6     | 1 2 3      | 1      |
| 28    | 1 2 4 7 14 | 1      |
| 12    | 1 2 3 4 6  | 0      |

<br>

### Question 6 - Am I a Prime to You (LAB5 Q14)

Write a function named **isPrime** that takes an integer as a parameter and returns 1 if the number is prime, otherwise returns 0.

Then write main appropriately to see the result.  

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 17 | 1 |
| 345 | 0 |
| 1 | 0 |

<br>


### Question 7 - Am I TWO Prime to You

Write a function named **primeSum** that takes an integer to check if this integer can be expressed as the sum of two prime numbers of all possible combinations and prints them.

* NOTE: You can use **isPrime** function you wrote previously.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 34 | 3 31<br>5 29<br>11 23<br>17 17 |


<br>


#### Question 8 - Binary

Write a function that will take an integer as a parameter. Then calculates and returns its binary version as another integer. Then write main appropriately to see the result.	

| Input | Output     |
| ----- | ---------- |
| 25    | 11001      |
| 532   | 1000010100 |
| 5     | 101        |

<br>

#### Question 9 - Fibonacci

Write a function that will take a positive integer n, and returns the nth Fibonacci number. Then write main appropriately to see the result.

| Input | Output |
| ----- | ------ |
| 1     | 0      |
| 2     | 1      |
| 3     | 1      |
| 4     | 2      |
| 5     | 3      |
| 10    | 34     |
| 15    | 377    |