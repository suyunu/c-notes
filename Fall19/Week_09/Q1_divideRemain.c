#include <stdio.h>

// DO NOT EDIT ANYTHING ABOVE
void divideWithRemainder(int num, int div, int *res, int *rem){
	*res = num/div;
	*rem = num%div;
}
// DO NOT EDIT ANYTHING BELOW

int main()
{
    int n, d, res, rem;

    scanf("%d %d", &n, &d);

    divideWithRemainder(
    // DO NOT EDIT ANYTHING ABOVE
    		n, d, &res, &rem
    // DO NOT EDIT ANYTHING BELOW
        );

    printf("%d %d", res, rem);
    return 0;
}
