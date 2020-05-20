#include <stdio.h>

int main()
{
    int i, j;

    int N;
    scanf("%d", &N);

    int arr[N];
    for(i = 0 ; i < N ; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0];
    int maxSumIndex = 0, maxSumSize = 0;

    for(i = 0 ; i < N ; i++){
        int sum = 0;
        for(j = i ; j < N ; j++){
            sum += arr[j];
            if( (sum > maxSum) || (sum == maxSum && (j-i+1) >= maxSumSize) ){
                maxSum = sum;
                maxSumIndex = i;
                maxSumSize = j-i+1;
            }
        }
    }

    printf("%d %d %d", maxSum, maxSumIndex, maxSumSize);

    return 0;
}
