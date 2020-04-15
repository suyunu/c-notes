#include <stdio.h>

int reverse(int x){
	int reverse_x = 0;

	while(x > 0){
		reverse_x = 10*reverse_x + (x%10);
		x /= 10;
	}

	return reverse_x;
}

int main() {
	int x;

	scanf("%d", &x);

	printf("%d", reverse(x));

	return 0;
}
