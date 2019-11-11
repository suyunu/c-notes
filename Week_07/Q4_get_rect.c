#include <stdio.h>

void get_rect(int r, int c);

void get_rect(int r, int c){
	int i, j;

	for(i = 1 ; i <= r ; i++){
		for(j = 1 ; j <= c ; j++){
			printf("*");
		}
		printf("\n");
	}
}

int main() {
	int r, c;
	scanf("%d %d", &r, &c);

	get_rect(r, c);

	return 0;
}
