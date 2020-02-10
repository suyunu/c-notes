#include <stdio.h>

int main() {
	int n,i,j;
	int arr[1000], count[101] = {0};
	
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
		
	for(i = 0; i < n; i++)
	    count[arr[i]]++;
	
	for(i = 0; i < 101; i++)
	    if(count[i] > 0)
		    printf("%d --> %d\n", i, count[i]);

	return 0;
}