#include <stdio.h>

int main() {
	int i, j;
	int r, c;
	
	scanf("%d %d", &r, &c);

	for(i = 0 ; i < r ; i++){
		for(j = 0 ; j < c ; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
