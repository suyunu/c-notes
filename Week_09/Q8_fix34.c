#include <stdio.h>

int main() {
	int N, i, j;

	scanf("%d", &N);

	int arr[N];

	for(i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	for(i = 0; i < N; i++) {
		if(arr[i] == 3) {
			for(j = 0; j < N; j++) {
				if(arr[j] == 4 && arr[j-1] != 3) {
					int temp = arr[i+1];
					arr[i+1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	
	for(i = 0; i < N; i++)
		printf("%d ", arr[i]);

	return 0;
}