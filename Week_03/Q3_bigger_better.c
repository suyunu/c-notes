#include <stdio.h>

int main() {
	char ch;
	scanf("%c", &ch);
	
	printf("%c", ch+('A'-'a'));

	return 0;
}