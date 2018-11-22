/*
 * 	QUESTION 10:
 *	Write a function that takes an integer as a parameter.
 *  Then returns the summation of each digits' factorial.
 */
#include <stdio.h>
#include <stdlib.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

int fact(int n){
	if(n < 0)
		return -1;
	int result = 1;
	for(int i = 1; i <= n; i++){
		result *= i;
	}
	return result;
}

int sumFactDigits(int a){
	int result = 0;
	while(a != 0){
		result += fact(a % 10);
		a = a / 10;
	}
	return result;
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

	int x;
	scanf("%d", &x);
	printf("%d", sumFactDigits(x));

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	return 0;
}
