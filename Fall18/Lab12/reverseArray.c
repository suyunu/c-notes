/*
 ============================================================================
 created with love!
 takes and array and reverses it.
 sample i/o:
 input:
 5
 1 2 3 4 5
 output:
 5 4 3 2 1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int swap(int *a, int *b){
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
int reverse(int dizi[], int boyut){
  int i;
  for(i=0; i<boyut/2; i++){
    swap(&dizi[i], &dizi[boyut-i-1]);
  }
}
int oku(int dizi[], int boyut){
  int i;
  for(i=0; i<boyut; i++){
      scanf("%d", &dizi[i]);
    }
}
int yaz(int dizicik[], int boyutcuk){
  int i;
  for(i=0; i<boyutcuk; i++){
      printf("%d ", dizicik[i]);
    }
}
int main(void) {
  int anan[100], size;
  scanf("%d", &size);
  oku(anan, size);
  reverse(anan, size);
  yaz(anan, size);
  return EXIT_SUCCESS;
}
