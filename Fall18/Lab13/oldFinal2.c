/*
 ============================================================================
 created with love!
 2017 spring final question.
 the detailed expression is at the image with the same name.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE


findUniqueLowercaseChars(char str[], char unique[]){
  int boy, boy2, i, j, k=0, isaret=1, isaret2=1, p=0, t=0;
  char anan[100];
  boy = strlen(str);
  for(i=0; i<boy; i++){
    for(j=i+1; j<boy; j++){
      for(t=0; t<i; t++){
        if(str[i]==str[t]){
            isaret=0;
          }
      }if(str[i]==str[j]){
        isaret=0;
      }

    }if(isaret==1 && str[i]>'a' && str[i]<'z'){
      for(p=0; p<boy; p++){
        if(str[i]==unique[p]){
          isaret2=0;
        }
      }
      if(isaret2==1){
        unique[k]=str[i];
        k++;
      }isaret2=1;
    }isaret=1;
  }
}
/*
sınav sırasında variable isimlerinde küfür etmenin yasak olup olmadığını deniyordum, 
githuba koymadan birkac degisiklik yapip daha normalize hale getirdim.
eger object etmeyecek kadar kodunuza güveniyorsanız rahatca sovebilirsiniz.
makine küfürleri anlamıyor xd
*/


// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE


int main() {
    char str[100], unique[100]="";
    gets(str);
    findUniqueLowercaseChars(str, unique);
    printf("%s\n", unique);

    return 0;
}
