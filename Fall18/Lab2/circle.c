/*
 * Read the radius of a circle from the user,
 * then print this circle's circumference and area upto 2 decimal places.
 * Define PI as 3.14
 */

#include <stdio.h>

#define PI 3.14

int main(){
	float r;
	
	scanf("%f", &r);
	printf("%.2f\n", 2*PI*r);
	printf("%.2f\n", PI*r*r);
	
	return 0;
}
