/*
 * 	QUESTION 14:
 *	Write a function named 'isPrime' that takes an integer as a parameter
 *	and returns 1 if the number is prime, otherwise returns 0.
 * 	(These 0 (false) or 1 (true) returning functions are also known as "boolean functions")
 */


#include <stdio.h>
#include <stdlib.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

int isPrime(int n){
	if (n < 2){
		return 0;
  }
	for(int i = 2; i < n; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	int a;
	scanf("%d", &a);
	printf("%d" , isPrime(a));
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	return 0;
}
