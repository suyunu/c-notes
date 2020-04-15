#include <stdio.h>

int fibonacci(int x){
	int i;
	int f1 = 0, f2 = 1;

	if(x == 1)
		return 0;
	else if(x == 2)
		return 1;

	for(i = 2 ; i < x ; i++){
		int fsum = f1+f2;
		f1 = f2;
		f2 = fsum;
	}

	return f2;
}

int main() {
	int x;

	scanf("%d", &x);

	printf("%d", fibonacci(x));

	return 0;
}
