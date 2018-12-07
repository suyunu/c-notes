/*
 ============================================================================
 created with love!
 this program reads an array and sorts it in ascending order. both of the bubble sort
 and selection sort are implemented. because instructors dont mind complexity or
 compile time of your code, you can choose any of the sorting algorithms.
 (bubblesort is easy to memorize)
 <<<<yani diyorum ki ezberlicekseniz dizbebegim fonksiyonunu ezberleyin diğerini ezberlemesi daha zor.>>>>
 sample i/o:
 input:
 5
 7 8 9 10 1
 output:
 1 7 8 9 10
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int okubebegim(int a[], int b){
  int i;
  for(i=0; i<b; i++){
    scanf("%d", &a[i]);
  }
}
// bubblesort
int dizbebegim(int a[], int b){
  int i, temp, j;
  for(i=0; i<b; i++){
    for(j=0; j<b-1-i; j++){
      if(a[j]>a[j+1]){
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
      }
    }
  }
}
// selection sort
void selectionSort (int dizi[], int elemanSayisi){
     int i, j, enKucuk, temp;
     for (i=0; i<elemanSayisi-1; i++)
     {
         enKucuk = i;
         for (j=i+1; j<elemanSayisi; j++)
         {
             if (dizi[j] < dizi [enKucuk])
             enKucuk = j;
         }
         temp = dizi[i];
         dizi[i] = dizi[enKucuk];
         dizi[enKucuk] = temp;
     }
}

int yazbebegim(int a[], int b){
  int i;
  for(i=0; i<b; i++){
    printf("%d ", a[i]);
  }printf("\n");
}
int main(void) {
  int anilar[100], i, b;
  scanf("%d", &b);
  okubebegim(anilar, b);
  dizbebegim(anilar, b);
  yazbebegim(anilar, b);
  return 0;
}
