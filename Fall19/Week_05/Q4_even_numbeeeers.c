#include <stdio.h>

int main() {
	int A, B;
	scanf("%d %d", &A, &B);

	int i = A;
	while(i <= B){
		if(i % 2 == 0){
			printf("%d ", i);
		}
		i++;
	}

	return 0;
}