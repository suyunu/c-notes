#include <stdio.h>

int main(void) {
	float x, y;
	char c;

	scanf("%f %c %f", &x, &c, &y);

	if(c == '+'){
		printf("%.2f", x+y);
	}
	else if(c == '-'){
		printf("%.2f", x-y);
	}
	else if(c == '*'){
		printf("%.2f", x*y);
	}
	else if(c == '/'){
		printf("%.2f", x/y);
	}

	return 0;
}
