#include <stdio.h>

int main()
{
	int i;

	int N;
	scanf("%d", &N);
	int arr[N];

	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr[i]);

	
	// part a
	for(i = N-1 ; i >= 0 ; i--)
		printf("%d ", arr[i]);
	printf("\n");


	// part b
	for(i = 0 ; i < N/2 ; i++){
		int temp = arr[i];
		arr[i] = arr[N-i-1];
		arr[N-i-1] = temp;
	}

	for(i = 0 ; i < N ; i++)
		printf("%d ", arr[i]);


    return 0;
}
