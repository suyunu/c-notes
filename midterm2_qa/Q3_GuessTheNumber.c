#include <stdio.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE

void guessTheNumber(int x, int *lb, int *ub){
    *lb = 0;
    *ub = 100;
    
    int guess;
    scanf("%d", &guess);
    while(guess != x){
        if(guess >= *ub)
                    printf("Out of Upper Bound\n");
        else if(guess <= *lb)
                    printf("Out of Lower Bound\n");
        else if(guess > x){
                    printf("Go Low\n");
                    *ub = guess;
        }
        else if(guess < x){
                    printf("Go High\n");
                    *lb = guess;
            }
            scanf("%d", &guess);
    }
    printf("Voila\n");
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE


int main()
{
    int x;
    int lower_bound, upper_bound;
    scanf("%d", &x);
    
    guessTheNumber(
            // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
            x, &lower_bound, &upper_bound
            // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
        );
    
    printf("%d %d", lower_bound, upper_bound);
    
    return 0;
}
