#include <stdio.h>

typedef struct rectangle{
    float edge1;
    float edge2;
}Rectangle;

// DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
    
Rectangle min_rectangle_area(Rectangle r[], int N){
    int i;
    float min_area;
    int ind;
    
    min_area = r[0].edge1*r[0].edge2;
    ind = 0;
    
    for(i = 1 ; i < N ; i++){
        if(r[i].edge1*r[i].edge2 < min_area){
            min_area = r[i].edge1*r[i].edge2;
            ind = i;
        }
    }
    
    return r[ind];
}

// DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE

int main(){
    Rectangle r_min;
    int i;
    int N;
    Rectangle r[100];
    
    scanf("%d", &N);

    // Reads Rectangles
    for(i = 0 ; i < N ; i++)
        scanf("%f %f", &r[i].edge1, &r[i].edge2);
    
    r_min = min_rectangle_area(
    // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
    r, N
    // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
    );
    
    // Prints the area of the rectangle that has the smallest area
    printf("%.2f\n", r_min.edge1*r_min.edge2);
        
    return 0;
}
