/*
 * Author: Burak Suyunu
 * Date  : 11.10.2018
 * Source: github.com/suyunu/c-notes
 */
 
/*
 * Title : Calculator
 * 
 * Write a basic calculator program (+, -, \*, /) with if-else statements.  
 * The program takes three inputs: float, char, float, then prints the result.

 * |  Input | Output |
 * |:------:|:------:|
 * | 1 + 45 |  46.00 |
 * | 1 - 45 | -44.00 |
 * | 1 * 45 |  45.00 |
 * | 1 / 45 |  0.02  |
 */
 
#include <stdio.h>

int main() {
	float f1, f2;
	char c;
	scanf("%f %c %f", &f1, &c, &f2);
	
	if(c == '+')
		printf("%.2f", f1+f2);
	else if(c == '-')
		printf("%.2f", f1-f2);
	else if(c == '*')
		printf("%.2f", f1*f2);
	else if(c == '/')
		printf("%.2f", f1/f2);
	
	return 0;
}




