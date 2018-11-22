
#include <stdio.h>
#include <stdlib.h>

int power(int a, int b){
	int result = 1;
	for(int i = 0; i < b; i++){
		result *= a;
	}
	return result;
}

// e.g. (10110) in binary = 1 * 2^4 + 0 * 2^3 + 1 * 2^2 + 1 * 2^1 + 0 * 2^0
// we will imitate this expansion below
int convertBinaryToDecimal(int n){
    int decimalNumber = 0, i = 0, remainder;
   
    while (n != 0){
        remainder = n%10;
        n = n / 10;
        decimalNumber += remainder * power(2, i);
        i++;
    }
    return decimalNumber;
}

// Visit this page to learn, how to convert decimal number to binary: https://www.wikihow.com/Convert-from-Decimal-to-Binary
int convertDecimaltoBinary(int n){
	int binaryNumber = 0, i = 1, remainder;

    while (n!=0){
        remainder = n % 2;
    //  printf("Remainder = %d, Quotient = %d\n", remainder, n / 2);
        // 	remove comments in order to see what is going on.
        n = n / 2;
        binaryNumber += remainder * i;
        i *= 10;
    }
    return binaryNumber;
}

//  This code only calls convertDecimaltoBinary function.You also need to try to call convertBinarytoDecimal function.
int main(void) {
	int a;
	scanf("%d", &a);
	printf("%d", convertDecimaltoBinary(a));
	return 0;
}
