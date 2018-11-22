/*  QUESTION 11: 
 *  Write power function which takes two integer numbers a and b, then calculates and returns a^b.
 */
#include <stdio.h>
#include <stdlib.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

int power(int a, int b){
	int result = 1;
	for(int i = 0; i < b; i++){
		result *= a;
	}
	return result;
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {
	// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
	
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", power(x,y));

	// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	return 0;
}
