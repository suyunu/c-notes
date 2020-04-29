#include <stdio.h>

int main() {
	int N, i;

	scanf("%d", &N);

	int arr[N];

	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr[i]);

	float sum = 0, avg;
	
	for(i = 0 ; i < N ; i++)
		sum += arr[i];

	avg = sum / N;

	for(i = 0; i < N; i++){
		if(arr[i] > avg){
			printf("%d ", arr[i]);
		}
	}

	return 0;
}
