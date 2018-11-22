/*
 *	QUESTION 7:
 *	Write a function that will take an integer number and return its reverse version as another integer.
 *
 *	Then fill/write main() appropriately to see the result.
 */


#include <stdio.h>
#include <stdlib.h>
// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

// write your function here (you may remove this line)
int reverseInt(int a){
	int result = 0;
	while(a != 0){
		result *= 10;
		result += a % 10;
		a = a / 10;
	}
	return result;
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	
  int x;
	scanf("%d", &x);
	printf("%d", reverseInt(x));
  
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

	return 0;
}
