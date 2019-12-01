#include <stdio.h>

int main()
{
    int N, i;
    int arr[50];
    
    scanf("%d", &N);
    for(i = 0 ; i < N ; i++)
        scanf("%d", &arr[i]);
    
    int sum = 0;
    for(i = 0 ; i < N ; i++)
        sum += arr[i];
        
    printf("%d", sum);

    return 0;
}