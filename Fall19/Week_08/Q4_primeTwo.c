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

	int i;
	for(i = 2 ; i <= a/2 ; i++)
		if(isPrime(i) == 1 && isPrime(a-i) == 1)
			printf("%d %d\n", i, a-i);

	return 0;
}
