#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);

	int even_sum = 0;
	int digit_count = 0;
	int son_bas;

	while(x > 0){
		son_bas = x % 10;
		x /= 10;

		if(son_bas % 2 == 0){
			even_sum += son_bas;
		}
		digit_count++;
	}

	// for( ; x > 0 ; x /= 10){
	// 	son_bas = x % 10;

	// 	if(son_bas % 2 == 0){
	// 		even_sum += son_bas;
	// 	}
	// 	digit_count++;
	// }

	printf("%d %d", digit_count, even_sum);

	return 0;
}
