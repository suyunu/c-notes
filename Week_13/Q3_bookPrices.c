#include <stdio.h>

struct book{
	int page;
	int price;
	char name[5];
};

int main() {
	int i, j;
	int n;
	struct book arr[50];

	scanf("%d", &n);
	for(i = 0 ; i < n ; i++)
		scanf("%d %s %d", &arr[i].page, arr[i].name, &arr[i].price);

	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < n-1 ; j++){
			if(arr[j].price > arr[j+1].price){
				struct book temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for(i = 0 ; i < n ; i++)
		printf("%d %s %d\n", arr[i].page, arr[i].name, arr[i].price);

	return 0;
}
