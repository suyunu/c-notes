/*
 * 	Write a function named divideWithRemainder which takes
 *  two integer values: number and divisor, and two integer
 *  pointers (addresses of two integers): result and remainder.
 *  This function should divide the number by divisor, then write
 *  the result into the address given by result, and write the remainder
 *  into the address given by remainder. In the main program, create four
 *  integers: a,b,c,d. Then read the values of a and b from the user.
 *  Then call the function with the values of a and b, and the addresses of c and d,
 *  respectively. Your function will divide a by b, and the value of c will be the result,
 *  and the value of d will be the remainder. Then print out the values of c and d.
 */
#include <stdio.h>
#include <stdlib.h>


void divideWithRemainder(int number, int divisor, int* result, int* remainder){
	*result = number / divisor;
	*remainder = number % divisor;
}

int main(void) {

	int a, b, c, d;
	scanf("%d %d", &a, &b);
	divideWithRemainder(a, b, &c, &d);
	printf("result:%d remainder:%d", c, d);
	return 0;
}
