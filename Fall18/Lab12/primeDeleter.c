/*
 ============================================================================
 created with love!
 the program reads an array and makes its prime numbers 0.
 sample i/o:
 input:
 8
 3 4 5 6 7 8 9 10
 output:
 0 4 0 6 0 8 9 10
 input:
 3
 1 2 3
 output:
 1 2 0
 it would been much more cool if i were to write and isPrime function but i am tired
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int readArray(int a[], int b){
  int i;
  for(i=0; i<b; i++){
    scanf("%d", &a[i]);
  }
}
int printArray(int a[], int b){
  int i;
  for(i=0; i<b; i++){
    printf("%d ", a[i]);
  }
}
int removePrime(int a[], int b){
  int i, j, isPrime=1;
  for(i=0; i<b; i++){
    for(j=2; j<a[i]; j++){
      if(a[i]%j==0){
        isPrime=0;
        break;
      }
    }
      if(isPrime==1 && a[i]!=1){
        a[i]=0;
      }
      isPrime=1;
  }
}
int main(void) {
  int array[100], n;
  scanf("%d", &n);
  readArray(array, n);
  removePrime(array, n);
  printArray(array, n);
  return EXIT_SUCCESS;
}
