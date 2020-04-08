#include <stdio.h>

int main() {
	int x, y;
	float avg = 0;
	float ctr = 0;

	scanf("%d %d", &x, &y);
	avg += x;
	ctr++;
	while(y <= x){
		avg += y;
		ctr++;
		
		x = y;
		scanf("%d", &y);
	}

	printf("%.2f", avg/ctr);
	return 0;
}