#include <stdio.h>

int main()
{
	int i;

	int N;
	scanf("%d", &N);
	int arr[N];
	int counter[101] = {0};

	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr[i]);
	
	
	for(i = 0 ; i < N ; i++)
		counter[arr[i]]++;
	
	for(i = 0 ; i < 101 ; i++){
		if(counter[i] > 0){
			printf("%d --> %d", i, counter[i]);
		}
	}
	
	// Example
	// 5 10 2 5 50 5 10 1 2 2  -> arr[N]
		
	// 0 1 2 3 4 5 6 7 8 9 10 11 12 ... 50 ... 100 -> counter[101]
	// 0 1 3 0 0 3 0 0 0 0 2  0  0      1      0	

    return 0;
}
