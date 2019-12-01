#include <stdio.h>

int main()
{
    char word[11];
    int wordCount = 0;
    char c;
    
    scanf("%c", &c);
    while(c != '\n'){
        word[wordCount] = c;
        wordCount++;
        scanf("%c", &c);
    }

    int i;
    int increment = 1;
    for(i = 0 ; i < wordCount ; i++){
        if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
            word[i] += increment;
        if(word[i] >= '0' && word[i] <= '9')
            increment = (word[i]-'0');
    }
    
    for(i = 0 ; i < wordCount ; i++)
        printf("%c", word[i]);
    
    return 0;
}