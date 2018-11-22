/*
 *	QUESTION 16: 
 *	Write a function that will take a positive integer n, and returns the nth fibonacci number.
 */
#include <stdio.h>
#include <stdlib.h>


// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

int nthFib(int n){
	int x1 = 0, x2 = 1, temp;
	for(int i = 1; i < n; i++){
		temp = x2;
		x2 += x1;
		x1 = temp;
	}
	return x1;
}
// second version
int nthFibv2(int n){
	int x1 = 0, x2 = 1;
	for(int i = 1; i < n; i++){
		x2 += x1;
		x1 = x2 - x1;
	}
	return x1;
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	int x;
	scanf("%d", &x);
	printf("%d", nthFib(x));

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

	return 0;
}
