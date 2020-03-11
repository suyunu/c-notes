#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	int sum = 0;
	int i;

	for(i = A+1 ; i < B ; i++){
		if(i % 2 == 0)
			sum += i;
	}

	printf("%d", sum);

	return 0;
}