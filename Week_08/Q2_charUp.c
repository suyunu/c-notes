#include <stdio.h>

char toUpper(char c); 

char toUpper(char c){
	if(c >= 'a' && c <= 'z')
		return c+'A'-'a';
	else
		return c;
}

int main() {
	char c;

	scanf("%c", &c);
	while(c != '\n'){
		printf("%c", toUpper(c));
		scanf("%c", &c);
	}

	return 0;
}


