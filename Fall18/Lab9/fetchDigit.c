/*
 * 	QUESTION 1:
 * 	Write a function named fetchDigit which takes two integers as input: number and n.
 * 	Function should return the n.th digit (from the right) of the number as an integer.
 * 	If the number is less than n digits, Function should return -1.
 *	Then write a program which reads a positive integer z and another integer x,
 *	then print out the x.th digit of z. If the input is incorrect (z doesn't have x digits),
 *	program should print "Incorrect input". Assume negative integers will not be given.
 *
*/
#include <stdio.h>
#include <stdlib.h>


int fetchDigit(int number, int n){

	int i, nthDigit;
	for(i = 1; i < n; i++){
		number = number / 10;
	}
	// Check if the number is less than n digits
	if(number == 0)
		return -1;
	nthDigit = number % 10;
	return nthDigit;
}

int main() {

	int z, x;
	//Read z and x here, and
	scanf("%d %d", &z, &x);
	//call the fetchDigit function
	int fetchedDigit = fetchDigit(z, x);
	if(fetchedDigit == -1)
		printf("Incorrect input");
	else
		printf("%d", fetchedDigit);
	return 0;
}
