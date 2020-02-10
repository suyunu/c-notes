/*
 * Q3 - Average
 */

#include <stdio.h>

int main() {
	int n1, n2, n3;
	scanf("%d %d %d", &n1, &n2, &n3);

	float average;
	average = (n1+n2+n3)/3.0;

	printf("%.2f", average);

	return 0;
}
