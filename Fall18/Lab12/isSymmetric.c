/*
 ============================================================================
 created with love!
 the program takes an matrix as input and declares if it is symmmetric or not by
 taking its transpose and checking if the transpose version and the original version
 is the same or not.
 if you dont know what a matrix is then learn it.
 if you dont know what transpose means then learn it.
 if you dont know why you are at BOUN and others not, let me tell you: you have the
 ability to learn easily. dont get scared of learning new things.
 "hocam lisede öğretmediler"  then what? we werenot expecting you to learn everything at the highschool.
 we expect you to learn more than we gave you. you got the internet. there was no internet at our times.
 şaka yapıyorum da arkadaşlar, korkmayın ısırmaz matrixler karmaşık sayılar. bi google'lasanız bulacağınız şeyler.
 "sınavda google yok ama" diyen o gereksiz insan lütfen sen olma.
 sample i/o:
 input:
 5 5
 1 0 5 0 9
 0 2 0 4 0
 5 0 8 0 7
 0 4 0 0 5
 9 0 7 5 3
 output:
 it is symmmetric.
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
int isSimetric(int a[][MAX], int b, int c){
  int a2[MAX][MAX], isSymetric=1, i, j;
  for(i=0; i<b; i++){
    for(j=0; j<c; j++){
      a2[i][j]=a[i][j];
    }
  }
  transpose(a, b, c);

  for(i=0; i<b; i++){
    for(j=0; j<c; j++){
      if(a2[i][j]!=a[i][j]){
        isSymetric=0;
        break;
      }
    }
  }if(isSymetric==1){
    printf("okey baby, you did it!");
  }else{
    printf("nooo");
  }
}
int main(void) {
  int matrix[MAX][MAX], N, M;
  scanf("%d %d", &N, &M);
  readMatrix(matrix, N, M);
  isSimetric(matrix, N, M);
  return EXIT_SUCCESS;
}
