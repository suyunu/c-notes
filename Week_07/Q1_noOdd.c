#include <stdio.h>

int main() {
	int x;
	int counter = 0;
	float sum = 0;

	scanf("%d", &x);
	while(x % 2 == 0){
		sum += x;
		counter++;
		
		scanf("%d", &x);
	}

    if(counter == 0)
        printf("0.00");
    else
	    printf("%.2f", sum/counter);
	return 0;
}