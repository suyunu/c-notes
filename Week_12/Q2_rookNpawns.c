#include <stdio.h>

int abs(int x){
	if(x < 0)
		return -x;
	return x;
}

int main() {
	int R=8, C=8;
	int i, j;
	int table[10][10];

	// read the chess table
	for(i = 0 ; i < R ; i++)
		for(j = 0 ; j < C ; j++)
			scanf("%d", &table[i][j]);

	// print the chess table to be sure that you have read correct.
	printf("\n");
	for(i = 0 ; i < R ; i++){
		for(j = 0 ; j < C ; j++){
			printf("%d ", table[i][j]);
		}
		printf("\n");
	}

	int rookR, rookC;
	for(i = 0 ; i < R ; i++){
		for(j = 0 ; j < C ; j++){
			if(table[i][j] == 8){
				rookR = i;
				rookC = j;
			}
		}
	}

	int pawnDist = 100, pawnR, pawnC;
	for(i = 0 ; i < R ; i++){
		if(table[i][rookC] == 1 && abs(i-rookR) < pawnDist ){
			pawnDist = abs(i-rookR);
			pawnR = i;
			pawnC = rookC;
		}
	}
	for(j = 0 ; j < C ; j++){
		if(table[rookR][j] == 1 && abs(j-rookC) < pawnDist ){
			pawnDist = abs(j-rookC);
			pawnR = rookR;
			pawnC = j;
		}
	}

	table[rookR][rookC] = 0;
	table[pawnR][pawnC] = 8;

	printf("\n");
	for(i = 0 ; i < R ; i++){
		for(j = 0 ; j < C ; j++){
			printf("%d ", table[i][j]);
		}
		printf("\n");
	}

	return 0;
}


