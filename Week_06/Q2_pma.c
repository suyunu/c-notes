#include <stdio.h>

int main() {
	int sum = 0;
	int x;

	scanf("%d", &x);
	while(x >= 0){
		sum += x;
		scanf("%d", &x);
	}

	printf("%d", sum);

	return 0;
}
