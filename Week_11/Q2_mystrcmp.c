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
	fgets(s1, 100, stdin);
	fgets(s2, 100, stdin);

	printf("mystrcmp(s1,s2) --> %d ?==? %d <-- strcmp(s1,s2)", mystrcmp(s1,s2), strcmp(s1,s2));

	return 0;
}