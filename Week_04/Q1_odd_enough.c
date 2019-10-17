#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", a*(a%2)+b*(b%2)+c*(c%2));

	return 0;
}
