#include <stdio.h>
#include <string.h>

void copyWord(char s1[], char s2[], int x){
	int i, j;
	if(x == 1){
		int s2ctr = 0;
		for(j = 0 ; s1[j] != ' ' && s1[j] != '\n' && s1[j] != '\0' ; j++){
			s2[s2ctr] = s1[j];
			s2ctr++;
		}
		s2[s2ctr] = '\0';
	}
	else{
		int spaceCtr = 0;
		for(i = 0 ; i < strlen(s1) ; i++){
			if(s1[i] == ' '){
				spaceCtr++;
				if(spaceCtr == x-1){
					int s2ctr = 0;
					for(j = i+1 ; s1[j] != ' ' && s1[j] != '\n' && s1[j] != '\0' ; j++){
						s2[s2ctr] = s1[j];
						s2ctr++;
					}
					s2[s2ctr] = '\0';
					break;
				}
			}
		}
	}
}

int main() {
	int x;
	char s1[1000], s2[1000];
	gets(s1);
	scanf("%d", &x);

	copyWord(s1, s2, x);

	puts(s2);

	return 0;
}