#include <stdio.h>
#include <stdlib.h>

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
int localMaxs(int n) {
    int i;
    float max = 0;
    int previous;
    int current;
    int next;
    scanf("%i", &current);
    scanf("%i", &next);
    for (i = 1; i < n - 1; i ++) {
        previous = current;
        current = next;
        scanf("%i", &next);
        if (current > previous && current > next) {
            max = max + 1;
        }
    }
    return max;
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main() {
    int n;
    scanf("%i", &n);
    int result = 0;
    result = localMaxs(
    // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
        n
    // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
    );
    printf("%i", result);
    return 0;
}
