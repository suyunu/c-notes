#include <stdio.h>

void rightShiftM(int N, int M, int arr[N][M], int T){
	int i;
	int temp_arr[N][M];

	T %= (N*M);
	for(i = 0 ; i < N*M ; i++)
		temp_arr[0][(i+T)%(N*M)] = arr[0][i];

	for(i = 0 ; i < N*M ; i++)
		arr[0][i] = temp_arr[0][i];
}


int main()
{
	int i, j;

	int N, M;
	scanf("%d %d", &N, &M);

	int arr[N][M];
	for(i = 0 ; i < N ; i++)
		for(j = 0 ; j < M ; j++)
			scanf("%d", &arr[i][j]);

	int T;
	scanf("%d", &T);

	rightShiftM(N, M, arr, T);

	for(i = 0 ; i < N ; i++){
		for(j = 0 ; j < M ; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

    return 0;
}
