#include <stdio.h>

int is_perfect(int x){
	int i;
	int sum = 0;

	for(i = 1 ; i < x ; i++){
		if(x % i == 0){
			sum += i;
			printf("%d ", i);
		}
	}
	printf("\n");

	if(sum == x)
		return 1;
	else
		return 0;
}

int main() {
	int x;

	scanf("%d", &x);

	printf("%d", is_perfect(x));

	return 0;
}
