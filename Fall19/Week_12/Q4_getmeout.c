#include <stdio.h>
#include <string.h>

void normalizeString(char s[]){
	if(s[strlen(s)-2] == '\r' || s[strlen(s)-2] == '\n')
		s[strlen(s)-2] = '\0';
	else if(s[strlen(s)-1] == '\r' || s[strlen(s)-1] == '\n')
		s[strlen(s)-1] = '\0';
}

int main()
{
	int i;
	char s1[100], s2[100];
	fgets(s1,100,stdin);
	fgets(s2,100,stdin);
	
	// This part ensures that strings do not have \n or \r at the end before \0.
	normalizeString(s1);
	normalizeString(s2);

	for(i = 0 ; i < strlen(s1) ; i++){
		if(strncmp(s1+i, s2, strlen(s2)) == 0){
			char temp[100];
			strcpy(temp, s1+i+strlen(s2)+1);
			strcpy(s1+i, temp);
			break;
		}
	}

	puts(s1);

	return 0;
}