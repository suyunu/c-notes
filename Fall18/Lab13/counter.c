/*
 ============================================================================
 created with love!
 counts the num of words and letters in a string.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int howmanywords(char any[]){
  int i, say=0;
  for(i=0; i<100; i++){
    if(any[i]==' '){
      say++;
    }
  }return say;
}
int main(void) {
  char sentence[100];
  /* kac harfli sayma */
  int i=0;
  gets(sentence);
  printf("%s\n", sentence);
  while(sentence[i]!='\0'){
    i++;
  }
  printf("kac harfli: %d", i);
  /* kac kelimeli sayma */
  printf("kac kelimeli: %d\n", howmanywords(sentence));
  return EXIT_SUCCESS;
}
