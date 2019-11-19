#include <stdio.h>

int isPrime(int x);

int isPrime(int x){
	if(x <  2)
		return 0;
	
	int i;
	for(i = 2 ; i < x ; i++){
		if(x % i == 0){
			return 0;
		}
	}
	return 1;
}

int main() {
	int a;
	scanf("%d", &a);
	printf("%d", isPrime(a));

	return 0;
}
