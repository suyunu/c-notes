#include <stdio.h>

int main()
{
	int i, j;

	int N, M;
	scanf("%d %d", &N, &M);
	int arr1[N], arr2[M];

	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr1[i]);

	for(i = 0 ; i < M ; i++)
		scanf("%d", &arr2[i]);

	for(j = 0 ; j < M ; j++){
		for(i = 0 ; i < N ; i++){
			if(arr1[i] != arr2[j+i])
				break;
		}
		
		// i will be equal to N if and only if the above loop terminates without entering the if statement
		// So if i is equal to N, it means that we found the same sub array to arr1.
		if(i == N){
			printf("%d", j);
			break;
		}
	}

    return 0;
}
