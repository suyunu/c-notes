#include <stdio.h>

int main() {
	char c;
	scanf("%c", &c);

	if(c >= 'a' && c <= 'z'){
		printf("%c", c+('A'-'a'));
	}
	else if(c >= 'A' && c <= 'Z'){
		printf("%c", c+('a'-'A'));
	}
	else if(c >= '0' && c <= '9'){
		printf("%d", 2*(c-'0'));
	}
	else{
		printf("asdfasdf");
	}

	return 0;
}
