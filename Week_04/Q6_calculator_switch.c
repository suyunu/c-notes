#include <stdio.h>

int main(void) {
	float x, y;
	char c;

	scanf("%f %c %f", &x, &c, &y);

	switch(c){
		case '+':
			printf("%.2f\n", x+y);
			break;
		case '-':
			printf("%.2f\n", x-y);
			break;
		case '*':
			printf("%.2f\n", x*y);
			break;
		case '/':
			printf("%.2f\n", x/y);
			break;
		default:
			printf("Wrong Operator\n");
	}

	return 0;
}
