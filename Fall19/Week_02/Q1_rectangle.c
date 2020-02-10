/*
 * Q1 - Rectangle
 */

#include <stdio.h>

int main() {
	int r1, r2;
	int perimete, area;

	scanf("%d %d", &r1, &r2);

	perimete = 2 * (r1+r2);
	area = r1*r2;

	printf("%d %d", perimete, area);

	return 0;
}

