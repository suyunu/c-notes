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

    // swap columns
	// for all i => arr[i][0] <-> arr[i][C-1]
	for(i = 0 ; i < R ; i++){
		int temp = arr[i][0];
		arr[i][0] = arr[i][C-1];
		arr[i][C-1] = temp;
	}

    // swap rows
	// for all j in C => arr[0][j] <-> arr[R-1][j]
// 	for(j = 0 ; j < C ; j++){
// 		int temp = arr[0][j];
// 		arr[0][j] = arr[R-1][j];
// 		arr[R-1][j] = temp;
// 	}


	printArray(arr,R,C);

	return 0;
}