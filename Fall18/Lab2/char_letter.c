/*
 * Read a lower case letter from the user.
 * Then print this letter's order in the alphabet.
 *
 * Input : a
 * Output: 1
 *
 * Input : d
 * Output: 4
 */

#include <stdio.h>

int main(){
	char ch;
	
	scanf("%c", &ch);
	printf("%d", ch-'a'+1);
	
	return 0;
}
