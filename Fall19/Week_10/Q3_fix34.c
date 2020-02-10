#include <stdio.h>

int main() {
	int n,i,j;

	scanf("%d", &n);
	int arr[50];
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for(i = 0; i < n; i++) {
		if(arr[i] == 3) {
			for(j = 0; j < n; j++) {
				if(arr[j] == 4 && arr[j-1] != 3) {
					int temp = arr[i+1];
					arr[i+1] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
	
	for(i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}