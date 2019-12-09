#include <stdio.h>

void readArray(int arr[], int N){
	int i;
	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr[i]);
}

void printArray(int arr[], int N){
	int i;
	for(i = 0 ; i < N ; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void copyArray(int arr1[], int arr2[], int N){
	int i;
	for(i = 0 ; i < N ; i++)
		arr1[i] = arr2[i];
}

int main(void) {
	int arr1[100] = {0};
	int arr2[100] = {0};
	int N = 3;

	readArray(arr1, N);
	readArray(arr2, N);
	copyArray(arr1, arr2, N);
	printArray(arr1, N);
	printArray(arr2, N);


	return 0;
}
