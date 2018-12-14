/*
 ============================================================================
 created with love!
 this program checks if the given array is palindrome or not. palindrome
 means when you reverse the array, you will get the same shit.
 the program will take inputs for array until you hit "enter" ('\n')
 sample i/o:
 input:
 3 5 7 9 11
 output:
 not palindrome
 input:
 abc cba
 output:
 palindrome
 ! note that we havent declared how many inputs we gonna give due to the beauty of
 shining sun and checking for '\n'. but we assumed that number of elements of array will be less than 100.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i=0, sayac, isPalindrome=1;
  char kelime[100], harf;
  scanf("%c", &harf);
  while(kac!='\n'){
    kelime[i]=harf;
    i++;
    scanf("%c", &harf);
  }
  sayac=i;
  for(i=0; i<sayac; i++){
    if(kelime[i]!=kelime[sayac-i-1]){
      isPalindrome=0;
    }
  }
  if(isPalindrome==1){
    printf("palindrome");
  }else{
    printf("not palindrome");
  }
  return EXIT_SUCCESS;
}
