#include <stdio.h>

int main() {
	int x;
	scanf("%d", &x);

	if(x > 0){
		printf("positive\n");
		if(x % 2 == 0){
			printf("even\n");
		}
		else{
			printf("odd\n");
		}
	}
	else if(x < 0){
		printf("negative\n");
		printf("%d\n", -x);
	}
	else{
		printf("zero");
	}

	return 0;
}