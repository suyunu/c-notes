/*
 ============================================================================
 created with love!
 lab8 question1 on teachingCodes.
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
int removeArray(int ar1[], int ar2[], int s1, int s2){
  int i,j, istiyommu=1, yenikasa[100], sayac=0;
  for(i=0; i<s1; i++){
    for(j=0; j<s2; j++){
      if(ar2[j]==ar1[i]){
        istiyommu=0;
      }
    }
    if(istiyommu==1){
        yenikasa[sayac]=ar1[i];
        sayac++;
    }
    istiyommu=1;
  }
  for(i=0; i<sayac; i++){
    ar1[i]=yenikasa[i];
  }
  return sayac;
}
int main(void) {
  int A[100], B[100], n, m, newN;
  scanf("%d %d", &n, &m);
  readArray(A, n);
  readArray(B, m);
  printArray(A, n);
  newN = removeArray(A, B, n, m);
  printArray(A, newN);
  return EXIT_SUCCESS;
}
