/*
 ============================================================================
 created with love!
 2017 spring final question.
 the detailed expression is at the image with the same name.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

  int i, count=0, array[1000], min=9999, max=-9999;
  scanf("%d", &array[count]);
  while(array[count]!=0){
    count++;
    scanf("%d", &array[count]);
  }
  for(i=0; i<count; i++){
    if(array[i]>max){
      max=array[i];
    }
  }
  for(i=0; i<count; i++){
    if(array[i]<min){
      min=array[i];
    }
  }
  printf("%d %d", count*min, count*max);

  // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

  return 0;
}
