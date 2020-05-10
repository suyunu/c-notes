/*
 ============================================================================
 Name        : lab10_a4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int N, M;

	int i, j;

	scanf("%d %d", &N, &M);

	int arr[N][M];

	for(i = 0; i < N; i++)
	{
		for(j = 0; j < M; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	for(j = 0; j < M; j++)
	{
		for(i = 0; i < N; i++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}

	return 0;
}
