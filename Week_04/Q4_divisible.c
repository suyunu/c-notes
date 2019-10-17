#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if(a <= 0 || b <= 0){
		printf("Incorrect Input\n");
	}
	else{
		if(a % b == 0){
			printf("it is divisible\n");
		}
		else{
			printf("it is not divisible\n");
		}
	}

	return 0;
}
