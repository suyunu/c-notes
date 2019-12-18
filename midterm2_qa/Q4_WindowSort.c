#include <stdio.h>
#include <stdlib.h>
 
 
void arrayFill(int arr[], int N){
    int i, p;
    for (i=0; i <= N-1; i++){
        scanf("%d ", &p);
        arr[i] = p;
    }
}
 
void arrayPrint(int arr[], int N){
    int i;
    for (i=0; i <= N-1; i++){
        printf("%d ", arr[i]);
    }
}
 
 
void swap(int *p, int *r){
    int temp = *p;
    *p = *r;
    *r = temp;
}
 
int arrayFind(int arr[], int N, int F){
    int i, pos=-1;
    int counter = 0;
 
    for(i=0; i <=N-1; i++){
        if(arr[i]==F){
            pos =i;
            counter++;
 
        }
        if (counter == 2){
            break;
        }
    }
 
    return pos;
}
 
void findandsort(int arr[], int N, int F, int W){
 
    int pos = arrayFind(arr, N, F);
    int i, j;
    int Wleft=W, Wright = W;
 
    if(pos >= 0){
 
        if(pos + W > N-1){
            Wright =N-1-pos;
        }
        if (pos - W < 0){
            Wleft = pos - 0;
        }
 
        for(i=pos-Wleft; i <= pos + Wright; i++){
            for(j=i+1; j <= pos + Wright; j++){
                 if(arr[j] < arr[i]){
                     swap(&arr[j], &arr[i]);
                 }
            }
        }
    }
 
}
 
 
int main() {
    int N, F, W;
    scanf("%d", &N);
    int arr[N];
    arrayFill(arr, N);
    scanf("%d%d", &F, &W);
    findandsort(arr, N, F, W);
    arrayPrint(arr, N);
 
 
    return 0;
}
