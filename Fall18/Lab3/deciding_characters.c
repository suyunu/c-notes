/*
 * Author: Burak Suyunu
 * Date  : 11.10.2018
 * Source: github.com/suyunu/c-notes
 */
 
/*
 * Title : Deciding Characters
 * 
 * Read a character.  
 * If the character is a lower-case letter, then print its upper-case.  
 * If the character is a upper-case letter, then print its lower-case.  
 * If the character is a digit,  then print 2 times of this digit.  
 * Otherwise, print *Wrong*
 * 
 * | Input | Output |
 * |:-----:|:------:|
 * |   s   |    S   |
 * |   H   |    h   |
 * |   8   |   16   |
 * |   +   |  Wrong |
 */
 
#include <stdio.h>

int main() {
	char c;

	scanf("%c", &c);

	if(c >= 'A' && c <= 'Z'){
		printf("%c", c + ('a'-'A'));
	}
	else if(c >= 'a' && c <= 'z'){
		printf("%c", c + ('A'-'a'));
	}
	else if(c >= '0' && c <= '9'){
		printf("%d", 2 * (c - '0'));
	}
	else{
		printf("Wrong");
	}
	
	return 0;
}




