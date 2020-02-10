#include <stdio.h>

void readArray(int arr[50][50], int R, int C){
	int i, j;
	for(i = 0 ; i < R ; i++){
		for(j = 0 ; j < C ; j++){
			scanf("%d", &arr[i][j]);
		}
	}
}

void printArray(int arr[50][50], int R, int C){
	int i, j;
	for(i = 0 ; i < R ; i++){
		for(j = 0 ; j < C ; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int R, C;
	int i, j;
	int arr[50][50];

	scanf("%d %d", &R, &C);

	readArray(arr,R,C);
	printArray(arr,R,C);

	return 0;
}