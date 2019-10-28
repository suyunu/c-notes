#include <stdio.h>

int main() {
	int A, B, t;
	scanf("%d %d %d", &A, &B, &t);

	int i;

    // while version
	i = B;
	while(i >= A){
		printf("%d ", i);
		i -= t;
	}
	
	printf("\n");
    
    // for version
	for(i = B ; i >= A ; i -= t){
		printf("%d ", i);
	}

	return 0;
}