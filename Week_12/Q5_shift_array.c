#include <stdio.h>

void rightShiftA(int N, int arr[N], int T){
	int i;
	int temp_arr[N];

	T %= N;
	for(i = 0 ; i < N ; i++)
		temp_arr[(i+T)%N] = arr[i];

	for(i = 0 ; i < N ; i++)
		arr[i] = temp_arr[i];
}


int main()
{
	int i;

	int N;
	scanf("%d", &N);

	int arr[N];
	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr[i]);

	int T;
	scanf("%d", &T);

	rightShiftA(N, arr, T);

	for(i = 0 ; i < N ; i++)
		printf("%d ", arr[i]);

    return 0;
}
