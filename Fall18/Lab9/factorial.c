/*	QUESTION 9:
*	Write a function that takes an integer as a parameter, and returns the factorial of it.
*	Then write main() appropriately to see the result.
*
*/
#include <stdio.h>
#include <stdlib.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// write your function here (you may remove this line)
int fact(int n){
	if(n < 0)
		return -1;
	int result = 1;
	for(int i = 1; i <= n; i++){
		result *= i;
	}
	return result;
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	

	//Write your code Here...
	int x;
	scanf("%d", &x);
	printf("%d", fact(x));

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	return 0;
}
