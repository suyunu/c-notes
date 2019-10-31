#include <stdio.h>

int main() {
	int r, c;
	scanf("%d %d", &r, &c);

	int i;
	for(i = 0 ; i < r ; i++){
		int j;
		for(j = 0 ; j < c ; j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
