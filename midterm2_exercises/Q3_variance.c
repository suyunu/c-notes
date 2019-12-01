#include <stdio.h>

int main()
{
    int choice, N;
    int arr[50];
    
    scanf("%d %d", &choice, &N);
    
    int i;
    for(i = 0 ; i < N ; i++)
        scanf("%d", &arr[i]);
        
    if(choice == 1 || choice == 2){
        float avg=0;
        for(i = 0 ; i < N ; i++)
            avg += arr[i];
        avg /= N;
        
        if(choice == 1)
            printf("%.2f", avg);
        else{
            float var=0;
            for(i = 0 ; i < N ; i++)
                var += ((arr[i]-avg)*(arr[i]-avg));
            var /= (N-1);
            printf("%.2f", var);
        }
    }
    else{
        printf("invalid");
    }
    
    return 0;
}