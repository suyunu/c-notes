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
	char sent[100], word[100];
	fgets(sent,100,stdin);
	fgets(word,100,stdin);
	
	// This part ensures that strings do not have \n or \r at the end before \0.
	normalizeString(sent);
	normalizeString(word);

	for(i = 0 ; i < strlen(sent) ; i++){
		if(strncmp(sent+i, word, strlen(word)) == 0){
			char temp[100];
			strcpy(temp, sent+i+strlen(word)+1);
			strcpy(sent+i, temp);
			break;
		}
	}

	puts(sent);

	return 0;
}