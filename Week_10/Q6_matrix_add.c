/*
 ============================================================================
 Name        : lab10_a6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void read_2d_array(int N, int M, int arr[N][M])
{
	int i, j;

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
			scanf("%d", &arr[i][j]);

	}
}
void print_2d_array(int N, int M, int arr[N][M])
{
	int i, j;

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
			printf("%d ", arr[i][j]);

		printf("\n");
	}
}
void matrix_sum(int N, int M, int firstArr[N][M], int secondArr[N][M], int summation[N][M])
{
	int i, j;

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
			summation[i][j] = firstArr[i][j] + secondArr[i][j];
	}
}

int main(void) {

	int N, M;

	scanf("%d %d", &N, &M);

	int firstArr[N][M], secondArr[N][M], sum[N][M];

	read_2d_array(N, M, firstArr);

	read_2d_array(N, M, secondArr);

	matrix_sum(N, M, firstArr, secondArr, sum);

	print_2d_array(N, M, sum);


	return 0;
}
