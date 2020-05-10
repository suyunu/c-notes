/*
 ============================================================================
 Name        : lab10_a5.c
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

int main(void) {

	int N, M;

	scanf("%d %d", &N, &M);

	int arr[N][M];

	read_2d_array(N, M, arr);

	print_2d_array(N, M, arr);

	return 0;
}
