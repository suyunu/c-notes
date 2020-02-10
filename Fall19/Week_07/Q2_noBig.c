#include <stdio.h>

int main() {
	int x, y;
	int sum = 0;

	scanf("%d %d", &x, &y);
	sum += x;
	while(y <= x){
		sum += y;
		
		x = y;
		scanf("%d", &y);
	}

	printf("%d", sum);
	return 0;
}