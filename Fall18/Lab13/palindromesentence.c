/*
 ============================================================================
 created with love!
 checks if a sentence is palindrome or not.
 non-palindrome example: dünya liderimiz yine coştu
 palindrome example: kicacik (kıç açık)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int isPalindrome(char a[]){
  int i, sayac=0, amantanrim=1;
  while(a[i]!='\0'){
      sayac++;
      i++;
  }
  for(i=0; i<=sayac; i++){
    if(a[i]!=a[sayac-1-i]){
      amantanrim=0;
      break;
    }
    amantanrim=1;
  }
  if(amantanrim==0){
      return 0;
    }else{
      return 1;}
}
int main(void) {
  char kutu[100];
  gets(kutu);
  if( isPalindrome(kutu) == 0){
    printf("NO");
  }else{
    printf("YES");
  }
  return EXIT_SUCCESS;
}
