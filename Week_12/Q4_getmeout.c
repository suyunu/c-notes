#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char s1[100], s2[100];
	gets(s1);
	gets(s2);

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
