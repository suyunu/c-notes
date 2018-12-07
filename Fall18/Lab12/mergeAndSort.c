/*
 ============================================================================
 created with love!
 this program reads two arrays and merges them. after then sorts them in ascending
 order.
 sample i/o:
 input:
 3 4
 1 3 5
 2 4 6 8
 output:
 1 2 3 4 5 6 8
 input:
 4 2
 1 2 3 5
 2 4
 output:
 1 2 2 3 4 5
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int readArray(int ar[], int size){
  int i;
  for(i=0; i<size; i++){
    scanf("%d", &ar[i]);
  }
}
int printArray(int ar[], int size){
  int i;
  for(i=0; i<size; i++){
    printf("%d ", ar[i]);
  }printf("\n");
}
int swap(int *a, int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int ascend(int ar[], int size){
  int i,j;
  for(i=0; i<size; i++){
    for(j=0; j<size-1-i; j++){
      if(ar[j]>ar[j+1]){
        swap(&ar[j], &ar[j+1]);
      }
    }
  }
}
int mergeandascend(int ar1[], int ar2[], int s1, int s2){
  int i, ar3[100];
  for(i=0; i<s1; i++){
    ar3[i]=ar1[i];
  }
  for(i=s1; i<s1+s2; i++){
    ar3[i]=ar2[i-s1];
  }
  ascend(ar3, s1+s2-1); // -1 due to array indexing starts from 0th
  printArray(ar3, s1+s2-1);
}
int main(void) {
  int arr1[100], arr2[100], N, M;
  scanf("%d %d", &N, &M);
  readArray(arr1, N);
  readArray(arr2, M);
  mergeandascend(arr1, arr2, N, M);
  return EXIT_SUCCESS;
}
