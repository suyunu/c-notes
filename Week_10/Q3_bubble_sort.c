/*
 ============================================================================
 Name        : lab10_a3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int N, int arr[], int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

}
int main(void) {

	int N, i, j;

	scanf("%d",&N);

	int arr[N];

	for(i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for(i = 0; i < N-1; i++)
	{
		for(j = i+1; j < N; j++)
		{
			if(arr[i] > arr[j])
				swap(N, arr, i , j);
		}
	}
	for(i = 0; i < N; i++)
		printf("%d ", arr[i]);

	return 0;
}
