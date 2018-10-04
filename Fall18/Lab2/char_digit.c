/*
 * Read a digit as a character from the user.
 * Then print 2 times of this digit.
 * REMARK: Input is not int, it is char. So you have to read it with %c.
 *
 * Input : 8
 * Output: 16
 *
 */

#include <stdio.h>

int main(){
	char ch;
	
	scanf("%c", &ch);
	printf("%d", 2*(ch-'0'));
	
	return 0;
}
