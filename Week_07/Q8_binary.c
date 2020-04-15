#include <stdio.h>

// long int has 8 byte length while int has 4 byte
// we use long int because we are trying to represent a binary number in decimal format
// and they are too long to fit in normal int variables.
long int to_binary(int x){
	int mult = 1;
	long int binary_x = 0;

	while(x > 0){
		binary_x += mult*(x%2);
		mult *= 10;
		x /= 2;
	}

	return binary_x;
}

int main() {
	int x;

	scanf("%d", &x);

	printf("%ld", to_binary(x));

	return 0;
}
