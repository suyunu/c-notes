#include <stdio.h>

char to_upper(char c){
	if(c >= 'a' && c <= 'z')
		return c + ('A'-'a');
	return c;
}

int main() {
	char c;

	scanf("%c", &c);

	while(c != '\n'){
		printf("%c", to_upper(c));
		scanf("%c", &c);
	}

	return 0;
}
