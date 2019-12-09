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
	int N;
	int i, j;
	int arr[50][50];

	scanf("%d", &N);

	readArray(arr,N,N);

	int sum = 0;
	for(i = 0 ; i < N ; i++){
		for(j = N-1 ; j >= N-1-i ; j--){
			sum += arr[i][j];
		}
	}

	printf("%d", sum);


	return 0;
}