
# Week 9 Notes - 20.11.2019

## Call by Reference - Pointers

* We want to change the value of variable inside function.

* We pass a reference to the parameter

![](figures/W08-ptr1.png)

![](figures/W08-ptr2.png)

![](figures/W08-ptr3.png)


```c
#include <stdio.h>

void increment(int z)
{
  (z)++;
  printf("In increment function: %d\n", z);
}

void incrementRef(int *zPtr)
{
  (*zPtr)++;
  printf("In incrementRef function: %d\n", *zPtr);
}

int main()
{
  int a = 1;
  printf("%d\n", a);
  increment(a);
  printf("%d\n", a);
  incrementRef(&a);
  printf("%d\n", a);
  return 0;
}
```

<br />

### Question 1 - Divide and Remain Still

Write a function named divideWithRemainder which takes two integer and two integer pointer variables (addresses of two integers) as parameters:

number and divisor as integers; result and remainder as integer pointers.

This function should divide the **number** by **divisor**, then write the result into the address given by **result**, and write the remainder into the address given by **remainder**.

|  INPUT  |  OUTPUT |
|:-------:|:-------:|
| 8 3 | 2 2 |
| 27 4 | 6 3 |
| 10 2 | 5 0 |


```c
#include <stdio.h>

// DO NOT EDIT ANYTHING ABOVE

// DO NOT EDIT ANYTHING BELOW

int main()
{
    int n, d, res, rem;
    
    scanf("%d %d", &n, &d);
    
    divideWithRemainder(
    // DO NOT EDIT ANYTHING ABOVE

    // DO NOT EDIT ANYTHING BELOW
        );
        
    printf("%d %d", res, rem);
    return 0;
}
```

# Arrays

https://www.programiz.com/c-programming/c-arrays

* Declaration
  * const int
* Initialization
  * int mark[5] = {19, 10, 8, 17, 9};
  * int mark[] = {19, 10, 8, 17, 9};
  * int mark[5] = {19, 10, 8};
* Access
* Runtime iinitialization


### Question 2 - Collect and Sum


### Question 3 - Biggest

