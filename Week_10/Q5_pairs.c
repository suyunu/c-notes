#include <stdio.h>

int main() {
	int N, X, i, j;
	int arr[50];

	scanf("%d %d", &N, &X);
	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr[i]);

	for(i = 0 ; i < N-1 ; i++){
		for(j = i+1 ; j < N ; j++){
			if(arr[i]+arr[j] == X){
				printf("(%d, %d)\n", arr[i], arr[j]);
			}
		}
	}

	return 0;
}