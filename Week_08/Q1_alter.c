#include <stdio.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
void alter(int *x, char c){
	if(c == 'i'){
		(*x)++;
	}
	else if(c == 'd'){
		(*x)--;
	}
	else if(c == 's'){
		*x = *x * *x;
	}
}
// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main()
{
    int x;
    char c;

    scanf("%d %c", &x, &c);

    alter(
    // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
    	&x, c
    // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
        );

    printf("%d", x);
    return 0;
}