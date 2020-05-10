/*
 ============================================================================
 Name        : lab10_a1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int N, X;
	int i, j;

	scanf("%d %d",&N, &X);

	int arr[N];

	for(i = 0; i < N; i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i = 0; i < N-1; i++)
	{
		for(j = i+1; j < N; j++)
		{
			if(arr[i] + arr[j] == X)
				printf("%d %d\n", arr[i], arr[j]);
		}
	}
	return 0;
}
