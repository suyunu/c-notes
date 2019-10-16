#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int sum = a*(a%2) + b*(b%2) + c*(c%2);
	printf("%d", sum);

	return 0;
}