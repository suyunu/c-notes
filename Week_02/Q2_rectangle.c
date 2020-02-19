/*
 * Q1 - Rectangle
 */

#include <stdio.h>

int main() {
	int r1, r2;
	int perimeter, area;

	scanf("%d %d", &r1, &r2);

	perimeter = 2 * (r1+r2);
	area = r1*r2;

	printf("%d %d", perimeter, area);

	return 0;
}

