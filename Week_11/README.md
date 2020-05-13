# Week 11 Notes - 13.05.2020
    
### Warm Up Question 1 - Rook and Pawns (Lab9 Q2)
Write a program which reads a chessboard as an 8x8 matrix from the user. In the chessboard, there will be one rook (kale) represented by integer: 8, and multiple pawns (piyonlar) represented by integer: 1. The rest will be empty: 0.

The rook will capture the closest possible pawn. Your program should print the chessboard to the screen after the capture. 

```
Input               Output
0 0 0 0 0 0 0 1     0 0 0 0 0 0 0 1
0 0 0 0 1 0 0 0     0 0 0 0 1 0 0 0
0 0 8 0 0 0 0 1     0 0 0 0 0 0 0 1
0 1 0 0 0 0 0 0     0 1 0 0 0 0 0 0
0 0 1 0 0 0 0 0     0 0 8 0 0 0 0 0
0 0 0 0 0 0 0 0     0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0     0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0     0 0 0 0 0 0 0 0
```
    
## Strings

* character array. `char str[101];`
* ends with the null character (`'\0'`).
* `char str[] = "Hello";` = `char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};`

**Single quotes for characters, double quotes for strings!**

* No need to track size of it. (Because it ends with null)

  * ```c
    char str[] = "Hello World!";
    for(int i=0; str[i] != '\0'; i++)
      printf("%c-", str[i]);
    ```

### Output

* `printf("%s\n", str);`

* `puts(str);`

### Input

* `char str[101];`

* `scanf("%s", str); // Reads until space`

* `gets(str); // Reads until enter`

* **Safer**: `fgets(str, 21, stdin); // Reads until enter or specified numbers of chars`

### Passing strings to functions
* Same as arrays: pass by reference.
* No need to pass the size.

#### Reading Problems - String Normalization
When reading a string from user with `gets()` or `fgets()`, `\r` or `\n` characters can be appended at the end of the string before `\0`. It is always good to check your string after reading it and get rid of extra characters.

```c
void normalizeString(char s[]){
    if(s[strlen(s)-2] == '\r' || s[strlen(s)-2] == '\n')
        s[strlen(s)-2] = '\0';
    else if(s[strlen(s)-1] == '\r' || s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}
```

### Reminder about Array-Pointer relation

```c
int main()
{
    int myArr[5] = {1, 5, 6, 2, 2};
    int i;
    
    for(i = 0; i < 5; i++)
        printf("%d ", *(myArr+i)); // Output: 1 5 6 2 2

    return 0;
}
```
<br>

![Array-Pointer](figures/array_pointer.png)


### Built-in string library
* **`#include <string.h>`**
* **`strlen()`: Length of a string**
  * `size_t strlen(const char *str);`
  * The size of a string, not counting the terminating zero '\0'.
  * Example 1:
  ```c
  int main(){
      int i;
      char s1[100] = "01234 56789";
      
      printf("strlen(s1): %d\n", strlen(s1)); // strlen(s1): 11
      
      1[3] = '\0';
      printf("strlen(s1): %d\n", strlen(s1)); // strlen(s1): 3
      
      for(i = 0 ; i < 12 ; i++)
          printf("%c-", s1[i]); // 0-1-2- -4- -5-6-7-8-9- -
      // output is actually: 0-1-2-\0-4- -5-6-7-8-9-\0-
      
      return 0;
  }
  ```
  <br>
  
* **`strcpy()` and `strncpy()`: Copy strings**
  * `char *strcpy(char *s1, const char *s2); `
  * `char *strncpy(char *s1, const char *s2, size_t n)`
  * The destination should be large enough!
  * `strcpy()` copies and pastes null (`\0`) character. But `strncpy()` does not automaticly puts a null (`\0`) character at the end of the pasted part. You should be aware of that. (see Example 2 and 3)
  * Example 1:
    ```c
    int main(){
        int i;
        char s1[100] = "01234 56789", s2[100] = "abc defg";

        strcpy(s1, s2);

        printf("s1: %s\n", s1); // s1: abc defg
        printf("s2: %s\n", s2); // s2: abc defg

        printf("\ns1: ");
        for(i = 0 ; i < 12 ; i++)
            printf("%c-", s1[i]); // s1: a-b-c- -d-e-f-g-\0-d-e-f-g-\0-8-9-\0-

        return 0;
    }
    ```
    <br>
  * Example 2:
    ```c
    int main(){
        int i;
        char s1[100] = "01234 56789", s2[100] = "abc defg";

        strcpy(s1+2, s2+5);

        printf("s1: %s\n", s1); // s1: 01efg

        for(i = 0 ; i < 12 ; i++)
          printf("%c-", s1[i]); //0-1-e-f-g-\0-5-6-7-8-9-\0-

        return 0;
    }
    ```
  * Example 3:
    ```c
    int main(){
        int i;
        char s1[100] = "01234 56789", s2[100] = "abc defg";

        strncpy(s1+2, s2+5, 2);

        printf("s1: %s\n", s1); // s1: 01ef4 56789

        for(i = 0 ; i < 12 ; i++)
          printf("%c-", s1[i]); // 0-1-e-f-4- -5-6-7-8-9-\0-

        return 0;
    }
    ```
    <br>
  
* **`strcmp()` and `strncmp()`: Compare strings**
  * `int strcmp(const char *s1, const char *s2);`
  * `int strncmp(const char *s1, const char *s2, size_t n);`
  * Returns `s1[i] - s2[i]` where the $i^{th}$ character is the first character that is not same except null.
   * In other words, takes difference of each character in `s1` and `s2` respectively (`diff = s1[i] - s2[i]`). If all same returns `0`, else returns `diff`.
     * Returns `< 0` if `s1` comes before `s2` alphabetically.
     * Returns `0` if `s1` is identical to `s2` alphabetically.
     * Returns `> 0` if `s1` comes after `s2` alphabetically.
  * Example 1:
    ```c
    int main(){
        char s1[100] = "abc fefg", s2[100] = "abc defg";

        printf("%d", strcmp(s1, s2)); // 2 -> ('f' - 'd')

        return 0;
    }
    ```
    <br>
  * Example 2:
    ```c
    int main(){
        char s1[100] = "a1234", s2[100] = "b11234";

        printf("%d\n", strcmp(s1, s2)); // -1 -> ('a' - 'b')
        printf("%d\n", strcmp(s1+1, s2+2)); // 0 -> Same

        return 0;
    }
    ```
    <br>
  * Example 3:
    ```c
    int main(){
        char s1[100] = "9HELLO", s2[100] = "HELLOL";

        printf("%d\n", strcmp(s1, s2)); // -15 -> ('9' - 'H')
        printf("%d\n", strcmp(s1+1, s2)); // -76 -> ('\0' - 'L')
        printf("%d\n", strncmp(s1+1, s2, 5)); // 0 -> Same

        return 0;
    }
    ```
    <br>
* **`strcat()`, `strncat()`: Append a string to the end of another**
  * `char *strcat(char *s1, const char *s2);`
  * `char *strncat(char *s1, const char *s2, size_t n);`
  * The destination should be large enough!
  * Example 1:
    ```c
    int main(){
        char s1[100] = "01234 56789", s2[100] = "abc defg";

        strcat(s1, s2);

        printf("s1: %s\n", s1); // s1: 01234 56789abc defg
        printf("s2: %s\n", s2); // s2: abc defg

        return 0;
    }
    ```
    <br>
  * Example 2:
    ```c
    int main(){
        char s1[100] = "01234 56789", s2[100] = "abc defg";

        strcat(s1, s2+5);

        printf("s1: %s\n", s1); // s1: 01234 56789efg

        return 0;
    }
    ```
    <br>
  * Example 3:
    ```c
    int main(){
        char s1[100] = "01234 56789", s2[100] = "abc defg";

        strncat(s1, s2+5, 1);

        printf("s1: %s\n", s1); // s1: 01234 56789e

        return 0;
    }
    ```
    <br>
  * Side Note: `strcat(s1+k, s2)` generally does the same thing with `strcat(s1, s2)` because it doesn't matter where we start for the destination string. `strcat()`  appends the second string to the **end** of the second string. 
    
<br>

### Question 2 - MyStrcmp

 Write a function that takes two strings as argument and compares them. The function should perform what strcmp function from string.h library. Validate your function by using strcmp along with your function.

 |  INPUT  |  OUTPUT |
|-------|-------|
| abz abc | 23 |

<br>


### Question 3 - Get Me Out Of Here

Write a program which reads a sentence as a string, and a word as a string. Then the program should exclude this word from the sentence if the sentence contains the word, then print the new version to the screen. Assume no punctuation will occur, and every letter is lower case.

|  INPUT  |  OUTPUT |
|-------|-------|
| you are already dead<br>already | you are dead |

<br>

### Question 4 - Find Me

Write a function which takes a sentence as a string (char array) with size at most 150, and one integer (x), and another empty string with size at most 30. The function should put the x.th word of the sentence to the empty string.

In the main program read a sentence, and an integer from the user, then call the function and print the resulting word to the screen. Assume every letter is lower case, and no punctuation will occur, and the sentence will have enough words to return the requested one.

|  INPUT  |  OUTPUT |
|-------|-------|
| omae wa mou shindeiru<br>3 | mou |