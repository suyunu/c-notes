/*
 * 	QUESTION 15:
 *	Write a function which takes two integers as parameters and prints all the prime numbers between them.
 */
#include <stdio.h>
#include <stdlib.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

int isPrime(int n){
	if(n < 2)
		return 0;
	for(int i = 2; i < n; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

int printAllPrimes(int a, int b){
	// iterate over all number between a and b (a and b are included)
	for(int i = a; i <= b ;i++){
		if(isPrime(i) == 1){ // if i is prime then print it
			printf("%d ", i);
		}
	}
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	
	int x, y;
	scanf("%d %d", &x, &y);
	printAllPrimes(x, y);

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	return 0;
}
