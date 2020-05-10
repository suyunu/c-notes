/*
 ============================================================================
 Name        : lab10_a2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int N, int arr[], int k, int l)
{
	int temp;

	temp = arr[k];
	arr[k] = arr[l];
	arr[l] = temp;
}
int main(void) {

	int N, i, j;
	int index_to_be_changed;

	scanf("%d", &N);

	int arr[N];

	for(i = 0; i < N;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i = 0; i < N-1; i++)
	{
		if(arr[i] == 3)
		{
			index_to_be_changed = i+1;

			for(j = 0; j < N; j++)
			{
				if(arr[j] == 4  && arr[j-1] != 3)
					swap(N, arr, index_to_be_changed, j);
			}
		}
	}
	for(i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}
