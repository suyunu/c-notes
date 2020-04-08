#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);

	int even_sum = 0;
	int digit_count = 0;
	int last_digit;

	while(x > 0){
		last_digit = x % 10;
		x /= 10;

		if(last_digit % 2 == 0){
			even_sum += last_digit;
		}
		digit_count++;
	}

	printf("%d %d", digit_count, even_sum);

	return 0;
}
