/*
 ============================================================================
 created with love!
 project question of 2017 Spring. Detailed description is on the pdf file in
 the same directory.
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
int butunolay(int ar1[], int size1,int ar2[],int size2){
  int i,j,k,istiyom=1,count=0;
  for(i=0;i<size1;i++){
    for(j=0;j<size2;j++){
      if(ar1[i]==ar2[j]){
        for(k=0;k<size2;k++){
          if(ar1[i+k]!=ar2[j+k]){
            istiyom=0;
            break;
          }
        }if(istiyom==1){
          count++;
        }istiyom=1;
      }
    }

  }
  if(count>=2){
    printf("1");
  }else{
    printf("0");
  }
}
int main(void) {
  int arr1[100],arr2[100],size1, size;
  scanf("%d%d",&size, &size1);
  oku(arr1, size);
  oku(arr2, size1);
  reverse(arr2, size1);
  butunolay(arr1, arr2, enes, size1);
  return EXIT_SUCCESS;
}
