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
 1 2 3 4 5 4 3 2 1
 output:
 palindrome
 ! note that we havent declared how many inputs we gonna take due to the beauty of
 shining sun and checking for '\n'. but we assumed that number of elements of array will be less than 100.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, sayac=0, isPalindrome=1;
  int array[100], eleman;
  scanf('%c', &eleman); // we are using %c cuz we want it to be able to equal to '\n'
  while(kac!='\n'){
    array[sayac]=eleman;
    sayac++;
    scanf('%c', &eleman);
  }
  for(i=0; i<sayac; i++){
    if(array[i]!=array[sayac-i-1]){
      isPalindrome=0;
      break;
    }
  }
  if(isPalindrome==1){
    printf("palindrome");
  }else{
    printf("not palindrome");
  }
  return EXIT_SUCCESS;
}
