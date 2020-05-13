#include <stdio.h>
#include <string.h>

void normalizeString(char s[]){
	if(s[strlen(s)-2] == '\r' || s[strlen(s)-2] == '\n')
		s[strlen(s)-2] = '\0';
	else if(s[strlen(s)-1] == '\r' || s[strlen(s)-1] == '\n')
		s[strlen(s)-1] = '\0';
}

void copyWord(char sent[], int x, char word[]){
	int i, j;

	int spaceCtr = 1;
	for(i = 0 ; spaceCtr < x ; i++){
		if(sent[i] == ' ')
			spaceCtr++;
	}

	int word_ctr = 0;
	for(j = i ; sent[j] != ' ' && sent[j] != '\0' ; j++)
		word[word_ctr++] = sent[j];

	word[word_ctr] = '\0';

}

int main(){
	int i;
	char sent[100], word[100];
	int x;

	fgets(sent, 100, stdin);
	normalizeString(sent);

	scanf("%d", &x);

	copyWord(sent, x, word);
	puts(word);

    return 0;
}