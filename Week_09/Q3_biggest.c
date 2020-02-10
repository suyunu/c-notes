#include <stdio.h>

int main()
{
    int N, i;
    int arr[50];
    
    scanf("%d", &N);
    for(i = 0 ; i < N ; i++)
        scanf("%d", &arr[i]);
    
    int big = arr[0];
    for(i = 1 ; i < N ; i++)
        if(arr[i] > big)
            big = arr[i];
        
    printf("%d", big);

    return 0;
}