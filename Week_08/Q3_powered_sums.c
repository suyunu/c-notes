#include <stdio.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

void sums(int a, int b,int *sum){
	*sum = a + b;
}

void powered(int sum, int a, int b, int *p1, int *p2){
	*p1 = 1;
	*p2 = 1;

	int i;
	for(i = 0 ; i < a ; i++){
		*p1 *= sum;
	}
	for(i = 0 ; i < b ; i++){
		*p2 *= sum;
	}
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
int main(){
	int a, b;
	scanf("%d %d", &a, &b);

	int sum;

	sums(
		// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
		a, b, &sum
		// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	);
	printf("%d\n", sum);

	int sum_p1, sum_p2;
	powered(
		// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
		sum, a, b, &sum_p1, &sum_p2
		// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
	);

	printf("%d %d", sum_p1, sum_p2);

    return 0;
}