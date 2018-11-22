/*
 *
 *Question
 *Write a function name rectangleCalculation that take 2 integers
 *height and width parameters and 2 pointer parameters that area and circumference
 *the area of rectangle computed as height * width
 *and circumference of rectangle computed as 2*(height + width)
 */


#include <stdio.h>
#include <stdlib.h>
// Function that calculate takes height, width integers and address of area and circumference as pointer parameters
// Because it takes the addresses of variables(calculatedArea and calculatedCircumference),
// this function will modify the values of variables(calculatedArea and calculatedCircumference) which declared in main function(caller)
void rectangleCalculation(int height, int width, int* area, int* circumference){
	*area = height * width;
	*circumference = 2 * (height + width);
}

int main(void) {
	int a, b, calculatedArea, calculatedCircumference;//declaration of variables
	scanf("%d %d", &a, &b); // takes two integer values from user
	rectangleCalculation(a, b, &calculatedArea, &calculatedCircumference);//call the function
	printf("%d %d", calculatedArea, calculatedCircumference); //print values of calculatedArea and calculatedCircumference
	return 0;
}
