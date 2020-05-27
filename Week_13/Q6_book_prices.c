#include <stdio.h>

struct book{
	int page;
	int price;
	char name[5];
};

void sort_books(struct book bArr[], int n){
	int i, j;

	for(i = 0 ; i < n ; i++){
		for(j = 0 ; j < n-1 ; j++){
			if(bArr[j].price > bArr[j+1].price){
				struct book temp = bArr[j];
				bArr[j] = bArr[j+1];
				bArr[j+1] = temp;
			}
		}
	}
}

int main() {
	int i, n;
	scanf("%d", &n);

	struct book bArr[n];
	for(i = 0 ; i < n ; i++)
		scanf("%d %s %d", &bArr[i].page, bArr[i].name, &bArr[i].price);

	sort_books(bArr, n);

	for(i = 0 ; i < n ; i++)
		printf("%s: %d pages (%d gold)\n", bArr[i].name, bArr[i].page, bArr[i].price);

	return 0;
}
