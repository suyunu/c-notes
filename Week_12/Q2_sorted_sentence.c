#include <stdio.h>
#include <string.h>

void normalizeString(char s[]){
	if(s[strlen(s)-2] == '\r' || s[strlen(s)-2] == '\n')
		s[strlen(s)-2] = '\0';
	else if(s[strlen(s)-1] == '\r' || s[strlen(s)-1] == '\n')
		s[strlen(s)-1] = '\0';
}

int main() {
	int i, j;
	char str[1000];
	int words_start_ind[100]; // starting indices of each word
	int words_len[100]; // length  of each word
	int words_count = 0; // number of words

	fgets(str,150,stdin);
	normalizeString(str);

	// We think like every word has an id starting from 0 to words_count-1 in the order of appearance in the string.

	words_start_ind[0] = 0;
	for(i = 0 ; i <= strlen(str) ; i++){
		if(str[i] == ' ' || str[i] == '\0'){
			words_len[words_count] = i - words_start_ind[words_count];
			words_start_ind[words_count+1] = i+1;
			words_count++;
		}
	}

	// Sorting will happen on this array using word ids
	int sort_list[100];
	for(i = 0 ; i < words_count ; i++)
		sort_list[i] = i;


	// This part is actually Bubble Sort.
	// Instead of comparing numbers in sort_list,
	// We compare the words that has the corresponding id from the sort_list.
	for(i = 0 ; i < words_count ; i++){
		for(j = 0 ; j < words_count-1 ; j++){
			int w1_ind = sort_list[j], w2_ind = sort_list[j+1];  // get word ids from the sort_list

			// copy the words that we will compare from the main string (str) to temp strings (s1, s2)
			char s1[100], s2[100];
			strncpy(s1, str+words_start_ind[w1_ind], words_len[w1_ind]);
			s1[words_len[w1_ind]] = '\0'; // Do not forget to put \0 after copying
			strncpy(s2, str+words_start_ind[w2_ind], words_len[w2_ind]);
			s2[words_len[w2_ind]] = '\0'; // Do not forget to put \0 after copying

			// Compare the strings and make the adjustment on the sort_list
			if(strcmp(s1, s2) > 0){
				int temp = sort_list[j];
				sort_list[j] = sort_list[j+1];
				sort_list[j+1] = temp;
			}
		}
	}


	// print the words in the order of they appear in sort_list
	for(i = 0 ; i < words_count ; i++){
		int w_ind = sort_list[i]; // get word id from the sort_list
		char s[100];

		strncpy(s, str+words_start_ind[w_ind], words_len[w_ind]); // Get the word from the main string
		s[words_len[w_ind]] = '\0'; // Do not forget to put \0 after copying
		printf("%s ", s);
	}

	return 0;
}
