/*
 ============================================================================
 created with love!
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 1000
/**
 * Write a program which takes two words (word1, word2) and a sentence from the user.
 * Your program should replace each occurence of word1 in your sentence with word2.
 *
 * *** Assume that our sentence doesn't have any spaces at the beginning or at the end.
 * *** Assume that there is only one space character between the words.
 *
 * Input:               Output:
 * Ali                  Mehmet ata bak Mehmet
 * Mehmet
 * Ali ata bak Ali
 *
 */
int findStringLength(char string[]){
    int i, length=0;
    for(i=0; i<MAX_SIZE; i++){
        if(string[i]=='\0'){
            break;
        }else{
            length++;
        }
    }
    return length;
}
void shiftAndReplaceWords(char sentence[], char word1[], char word2[], int currentIndex){
    int sentenceLength, word1Length, word2Length, word2_1Diff;
    int i, j;

    sentenceLength = findStringLength(sentence);
    word1Length = findStringLength(word1);
    word2Length = findStringLength(word2);
    word2_1Diff = word2Length - word1Length;

    if(word2_1Diff > 0){//shift right until the end of the word1
        for(i=sentenceLength-1; i>=currentIndex+word1Length; i--){
            sentence[i+word2_1Diff] = sentence[i];
        }
    }else if(word2_1Diff < 0){//shift left until the end of the word1
        for(i=currentIndex+word1Length; i<sentenceLength; i++){
            sentence[i+word2_1Diff] = sentence[i];
        }
    }
    sentence[sentenceLength+word2_1Diff]='\0';

    //replace word1 with word2
    for(i=currentIndex, j=0; j<word2Length; i++, j++){
        sentence[i] = word2[j];
    }
}
int main()
{
    char sentence[MAX_SIZE], word1[MAX_SIZE], word2[MAX_SIZE], currentChar;
    int sentenceLength, word1Length, word2Length, word2_1Diff;
    int i, j, isTheSameWord;

    gets(word1);
    gets(word2);
    gets(sentence);

    sentenceLength = findStringLength(sentence);
    word1Length = findStringLength(word1);

    isTheSameWord = 1;
    j = word1Length - 1;
    for(i=sentenceLength-1; i>=0; i--){
        currentChar = sentence[i];
        // we need to check i==0 because if the first word of the sentence
        // is what we are looking for then the currentChar won't be ' '
        // before that word.
        if((currentChar == ' ') || (i==0 && currentChar == word1[j])){
            if(isTheSameWord == 1){
                // if we reached ' ', then we should start replacing
                // the word from the next char
                if(currentChar == ' '){
                    shiftAndReplaceWords(sentence, word1, word2, i+1);
                }else{// this means i==0, and we haven't reached ' ',
                    // our word starts from the current index i not i+1
                    shiftAndReplaceWords(sentence, word1, word2, i);
                }
            }
            //reset the variables to check words
            isTheSameWord = 1;
            j = word1Length - 1;
        }else{
            if(currentChar != word1[j]){
                isTheSameWord = 0;
            }
            j--;
        }
    }

    printf("%s\n", sentence);

    return 0;
}
