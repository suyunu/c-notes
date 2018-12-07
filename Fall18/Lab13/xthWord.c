/*
 ============================================================================
 created with love!
 lab8b question 2 on teachingCodes.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
int uzunluk(char string[]){
  int i=0;
  while(string[i]!='\0'){
    i++;
  }
  return i;
}
int yazdir(char string[], int a){
  int i;
  for(i=0; i<a; i++){
    printf("%c", string[i]);
  }printf("\n");
}
int xinci(char str[], int x, char str2[]){
  int i=0, j, count=0, count2=0, length=0;
  for(i=0; i<100; i++){
    if(str[i]==' '){
      count++;
    }
    length++;
    if(count==x-1){
      break;
    }
  }
  j=length;
  while(str[length]!=' ' && str[length]!='\0'){
    str2[count2]=str[j+count2];
    length++;
    count2++;
  }return count2;
}
int main(void) {
  char str[100], str2[100];
  int xth, stru, str2u;
  gets(str);
  scanf("%d", &xth);
  stru=uzunluk(str);
  str2u=xinci(str, xth, str2);
  yazdir(str2, str2u);
  return 0;
}
