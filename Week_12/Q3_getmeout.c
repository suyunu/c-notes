#include <stdio.h>
#include <string.h>

int mystrcmp(char s1[], char s2[]){
	int i;
	for(i = 0 ; i < strlen(s1)+1 && i < strlen(s2)+1 ; i++)
		if(s1[i] - s2[i] != 0)
			return s1[i]-s2[i];

	return 0;
}

int main()
{
	int i;
	char s1[100], s2[100];
	gets(s1);
	gets(s2);

	for(i = 0 ; i < strlen(s1) ; i++){
		if(strncmp(s1+i, s2, strlen(s2)) == 0){
			strcpy(s1+i, s1+i+strlen(s2)+1);
			break;
		}
	}

	puts(s1);

	return 0;
}
