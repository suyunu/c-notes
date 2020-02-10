#include <stdio.h>

int main() {
	int R=4, C=4;
	int i, j, k, l;
	char arr[50][50] = {{0}}; // initialize the matrix with 0's

	for(i = 1 ; i <= R ; i++){
		scanf("%s", arr[i]+1); // read the input line by line and put it inside 0's
	}

	for(i = 0 ; i <= R+1 ; i++){
		for(j = 0 ; j <= C+1 ; j++){
			printf("%c", arr[i][j]); // or print with %d
		}
		printf("\n");
	}
	// resulting matrix -> now we don't have to check for borders.
	/*
	 * 000000
	 * 0xxxx0
	 * 0xxxx0
	 * 0xxxx0
	 * 0xxxx0
	 * 000000
	 *
	 */

	char starChar = '*';
	int starCharCounter = 0;

	for(i = 1 ; i <= R ; i++){
		for(j = 1 ; j <= C ; j++){
			if(arr[i][j] >= 'a' && arr[i][j] <= 'z'){
				int starCounter = 0;
				for(k = -1 ; k <= 1 ; k++){
					for(l = -1 ; l <= 1 ; l++){
						if(arr[i+k][j+l] == '*'){
							starCounter++;
						}
					}
				}
				if(starCounter == starCharCounter && arr[i][j] < starChar){
					starChar = arr[i][j];
					starCharCounter = starCounter;
				}
				if(starCounter > starCharCounter){
					starChar = arr[i][j];
					starCharCounter = starCounter;
				}
			}
		}
	}

	printf("%c %d", starChar, starCharCounter);

	return 0;
}


