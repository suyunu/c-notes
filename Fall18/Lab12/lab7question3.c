/*
 ============================================================================
 created with love!
 lab7question3 on teachingCodes
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int oku(int dizi[], int boyut){
  int i;
  for(i=0; i<boyut; i++){
      scanf("%d", &dizi[i]);
    }
}
int startingIndex(int a1[], int a2[], int s1, int s2){
  int i,j,k,sorunyok=1, index;
  for(i=0; i<s1; i++){
    for(j=0; j<s2; j++){
      if(a1[i]==a2[j]){
        for(k=0; k<s2; k++){
          if(a1[i+k]!=a2[j+k]){
            sorunyok=0;
            break;
          }
        }
        if(sorunyok==1){ // sıkıntı yoksa sıkıntı var demektir xd
          index=i;
        }
        sorunyok=1;
      }
    }
  }
 
 
  if(index!=NULL){ // if we were able to find and assign some num to index; then it is not null anymore, we shall write it
    printf("%d", index);
  }else{
   // if index is null, then we shant write anythin'
  }
}
int main(void) {
  int arr1[100], arr2[100] , size1, size2;
  scanf("%d %d", &size1, &size2);
  oku(arr1, size1);
  oku(arr2, size2);
  startingIndex(arr2, arr1, size2, size1);
  return EXIT_SUCCESS;
}
