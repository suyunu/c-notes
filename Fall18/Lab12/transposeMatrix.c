/*
 ============================================================================
 created with love!
 transposes the matrix given.
 lab9 question1 on teachingCodes.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int readMatrix(int a[][MAX], int b, int c){
  int i, j;
  for(i=0; i<b; i++){
    for(j=0; j<c; j++){
      scanf("%d", &a[i][j]);
    }
  }
}
int printMatrix(int a[][MAX], int b, int c){
  int i, j;
  for(i=0; i<b; i++){
    for(j=0; j<c; j++){
      printf("%d ", a[i][j]);
    }printf("\n");
  }
}
int transpose(int a[][MAX], int b, int c){
  int i, j, temp;
  for(i=0; i<b; i++){
    for(j=i; j<c; j++){
      temp=a[j][i];
      a[j][i]=a[i][j];
      a[i][j]=temp;
    }
  }
}
int main(void) {
  int matrix[MAX][MAX], N, M;
  scanf("%d %d", &N, &M);
  readMatrix(matrix, N, M);
  transpose(matrix, N, M);
  printMatrix(matrix, M, N);
  return EXIT_SUCCESS;
}
