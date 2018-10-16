/*
 * Author: Burak Suyunu
 * Date  : 11.10.2018
 * Source: github.com/suyunu/c-notes
 */
 
/*
 * Title : Divisibility
 * 
 * Read an integer number. If the number is not divisible by 2 and 3 then print *not divisible*, otherwise *divisible*.
 */
 
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if((n % 2 != 0) && (n % 3 != 0)){
		printf("not divisible\n");
	}
	else{
		printf("divisible\n");
	}
	
	return 0;
}




