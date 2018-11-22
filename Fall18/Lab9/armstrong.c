
/* 	 Write a function called armstrong that takes one integer num as a parameter
 *	 Assume num is abcd. The function returns a^n + b^n + c^n + d^n. Here, n is the count of digit,
 *	 in this case n = 4.
 *	 For example armstrong(189) should return 1^3 + 8^3 + 9^3 = 1242.
 */
#include <stdio.h>
#include <stdlib.h>

// helper function that evaluates and then returns a^b . It should define above the armstrong function.
int power(int a, int b){
	int result = 1;
	int i;
	for(i = 0; i < b; i++){
		result *= a;
	}
	return result;
}

int armstrong(int a){
	int result = 0, temp = a;
	int nodigits = 0;

	//count the number of digits of a. In order to prevent the value of a, temp variable is created before.
	while(temp != 0){
		temp = temp / 10;
		nodigits++;
	}

	while(a != 0){
		result += power( (a % 10), nodigits); // remember that a % 10 fetches the value of last digit of a.
		a = a / 10;
	}
	return result;
}
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
int main() {

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	int x;
	scanf("%d", &x);
	printf("%d", armstrong(x));
	return 0;
}
