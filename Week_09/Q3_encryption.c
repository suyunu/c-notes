#include <stdio.h>

int main()
{
	int i;
	char arr[51];
	int s_len = 0;

	char c;

	// read sentence
	scanf("%c", &c);
	while(c != '\n'){
		arr[s_len] = c;
		s_len++;

		scanf("%c", &c);
	}


	// encryption
	for(i = 0 ; i < s_len ; i++)
		arr[i] = arr[i]+1;

	for(i = 0 ; i < s_len ; i++){
		printf("%c", arr[i]);
	}

	// decryption
	for(i = 0 ; i < s_len ; i++)
		arr[i] = arr[i]-1;

	for(i = 0 ; i < s_len ; i++){
		printf("%c", arr[i]);
	}


    return 0;
}
