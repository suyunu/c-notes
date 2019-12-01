#include <stdio.h>

int main() {
	int N, i, j;
	int arr[50];

	scanf("%d", &N);
	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr[i]);

	for(i = 0 ; i < N ; i++){
		for(j = 0 ; j < N-1 ; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	for(i = 0; i < N; i++)
		printf("%d ", arr[i]);

	return 0;
}