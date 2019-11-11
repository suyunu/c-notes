#include <stdio.h>

int main() {
	int x, y, z;
	int sum = 0;

	scanf("%d %d %d", &x, &y, &z);
	sum += x+y;
	while(z <= x + y){
		sum += z;

		x = y;
		y = z;
		scanf("%d", &z);
	}
	printf("%d", sum);

	return 0;
}