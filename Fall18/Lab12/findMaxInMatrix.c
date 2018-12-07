/*
 ============================================================================
 created with love!
 finds the max num of matrix.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int FindMaxAndPrint(int a[][MAX], int b, int c){
  int i, j, max=-9999,row, col; // i equate max to -9999 in order to be sure that when the first element comes and the first comparison gets executed (2 lines below), int max will be equal to the first element. you can also say max=a[0][0] which is also valid. it is just the way i do.
  for(i=0; i<b; i++){
    for(j=0; j<c; j++){
      if(a[i][j]>max){
        max=a[i][j];
        row=i;
        col=j;
      }
    }
  }printf("%d %d %d", max, row, col);
}
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
int main(void) {
  int matrix[MAX][MAX], N, M;
  scanf("%d %d", &N, &M);
  readMatrix(matrix, N, M);
  printMatrix(matrix, N, M);
  FindMaxAndPrint(matrix, N, M);
  return EXIT_SUCCESS;
}
