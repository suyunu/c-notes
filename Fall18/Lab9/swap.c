/*
 * 	QUESTION 1:
 *  Write a function named swap which takes two integer pointers
 *  (addresses of two integers) and swaps the values in those two addresses.
 */

#include <stdio.h>
#include <stdlib.h>


void swap(int* a, int* b){
	int temp = *a; // In order to prevent a's old value, we store it in temp variable
	*a = *b;
	*b = temp;
}
int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	swap(&x, &y);
	printf("%d %d", x, y);
	return 0;
}
