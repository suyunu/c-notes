#include <stdio.h>

int main() {
	char a, b;
	scanf("%c %c", &a, &b);

	int result;

	result = (a-'0') * (b-'0');

	printf("%d", result);

	return 0;
}