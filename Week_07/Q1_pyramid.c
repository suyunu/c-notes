#include <stdio.h>

void pyramid(int num_of_rows){
	int i, j;
	int counter = 1;

	for(i = 1 ; i <= num_of_rows ; i++){
		for(j = 0 ; j < num_of_rows-i ; j++)
			printf(" ");
		for(j = 0 ; j < i ; j++)
			printf("%d ", counter++); // increase counter after printing

		printf("\n");
	}
}

int main() {
	int x;
	scanf("%d", &x);

	pyramid(x);

	return 0;
}
