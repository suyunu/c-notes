#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, num_of_rotations;
    scanf("%d", &N);
    int numbers[N];
    // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
    for(i=0; i<N; i++){
        scanf("%d", &numbers[i]);
    }
    int min = numbers[0];
    num_of_rotations = 0;
    for(i=1; i<N; i++){
        if(numbers[i] < min){
            min = numbers[i];
            num_of_rotations = i;
        }
    }
    // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
    printf("Number of rotations: %d", num_of_rotations);
    return 0;
}
