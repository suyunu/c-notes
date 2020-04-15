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

int main() {
	int x;

	scanf("%d", &x);

	printf("%d", is_prime(x));

	return 0;
}
