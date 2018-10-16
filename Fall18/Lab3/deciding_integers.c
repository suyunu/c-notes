/*
 * Author: Burak Suyunu
 * Date  : 11.10.2018
 * Source: github.com/suyunu/c-notes
 */
 
/*
 * Title : Deciding Integers
 * 
 * Read an integer number.  
 * If the number is positive, print *POSITIVE* to the screen. Then check wheter the number is odd or even and print *ODD* or *EVEN*.  
 * If the number is negative, print *NEGATIVE* to the screen. Then calculate the number's distance from zero and print on the screen.  
 * If the number is zero, then print *ZERO* to the screen. 
 */
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if(n > 0){
		printf("POSITIVE\n");
		if(n % 2 == 0){
			printf("EVEN\n");
		}
		else{
			printf("ODD\n");
		}
	}
	else if(n < 0){
		printf("NEGATIVE\n");
		printf("%d\n", -n);
	}
	else{
		printf("ZERO\n");
	}
	
	return 0;
}




