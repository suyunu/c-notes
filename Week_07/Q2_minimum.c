#include <stdio.h>

int find_min(int x, int y, int z){
	int minimum;

	if(x <= y && x <= z)
		minimum = x;
	if(y <= x && y <= z)
		minimum = y;
	else
		minimum = z;

	return minimum;
}

int main() {
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	printf("%d", find_min(x, y, z));

	return 0;
}