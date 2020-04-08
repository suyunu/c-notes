#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int x;
	for(x = a ; x <= b ; x++){
		int i;
		int isPrime = 1;
		for(i = 2 ; i < x ; i++){
			if(x % i == 0){
				isPrime = 0;
				break;
			}
		}
		if(x < 2)
			isPrime = 0;
		if(isPrime == 1){
			printf("%d ", x);
		}
	}

	return 0;
}
