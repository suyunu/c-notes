#include <stdio.h>

int is_prime(int x){
	int i;
	int isPrime = 1;

	if(x < 2)
		isPrime = 0;

	for(i = 2 ; i < x ; i++){
		if(x % i == 0){
			isPrime = 0;
			break;
		}
	}

	return isPrime;
}

void prime_sum(int x){
	int i;

	for(i = 2 ; i <= x/2 ; i++){
		if(is_prime(i) && is_prime(x-i)){
			printf("%d %d\n", i, x-i);
		}
	}
}

int main() {
	int x;

	scanf("%d", &x);

	prime_sum(x);

	return 0;
}
