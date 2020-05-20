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
    int n;
    char sentence[1001], word[21];

    fgets(sentence, 1000, stdin);
    scanf("%d %s", &n, word);

    normalizeString(sentence);
    normalizeString(word);

    int i;
    int spaceCtr = 1;
    for(i = 0 ; spaceCtr < n && i < strlen(sentence) ; i++){
        if(sentence[i] == ' ')
            spaceCtr++;
    }

    // last word
    if(spaceCtr < n){
        sentence[strlen(sentence)+1] = '\0';
        sentence[strlen(sentence)] = ' ';
        strcat(sentence, word);
    }
    else{
        char temp[1000] = "";
        strcpy(temp, sentence+i);
        strcpy(sentence+i, word);
        sentence[strlen(sentence)+1] = '\0';
        sentence[strlen(sentence)] = ' ';
        strcat(sentence, temp);
    }

    printf("%s Cool", sentence);

    return 0;
}

