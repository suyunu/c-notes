#include <stdio.h>

int power(int , int );

int power(int a, int b){
	int result=1;
	int i;

	for(i = 1 ; i <= b ; i++){
		result *= a;
	}

	return result;
}

// DO NOT EDIT BELOW
int main() {
	int a, b;
	scanf("%d %d", &a, &b);


	int x = power(
	// DO NOT EDIT ABOVE
	a, b
	// DO NOT EDIT BELOW
	);

	printf("%d", x);

	return 0;
}


