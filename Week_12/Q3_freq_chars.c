#include <stdio.h>
#include <string.h>

void normalizeString(char s[]){
    if(s[strlen(s)-2] == '\r' || s[strlen(s)-2] == '\n')
        s[strlen(s)-2] = '\0';
    else if(s[strlen(s)-1] == '\r' || s[strlen(s)-1] == '\n')
        s[strlen(s)-1] = '\0';
}

int main()
{
    int i;
    char str[1001];

    fgets(str, 1000, stdin);
    normalizeString(str);

    int occurences[128] = {0};
    for(i = 0 ; i < strlen(str) ; i++)
        occurences[(int)str[i]]++;

    char max_char = str[0];
    int max_occur = 0;

    for(i = 0 ; i < 128 ; i++){
        if(i != ' '){
            if( (occurences[i] > max_occur) || (occurences[i] == max_occur && i <= max_char) ){
                max_char = i;
                max_occur = occurences[i];
            }
        }
    }

    printf("%c %d", max_char, max_occur);

    return 0;
}

