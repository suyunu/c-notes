#include <stdio.h>

int main() {
	int N, i;
	int arr[50];

	scanf("%d", &N);
	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr[i]);

	for(i = 0 ; i < N/2 ; i++){
		int temp = arr[i];
		arr[i] = arr[N-i-1];
		arr[N-i-1] = temp;
	}

	for(i = 0 ; i < N ; i++)
		printf("%d ", arr[i]);

	return 0;
}