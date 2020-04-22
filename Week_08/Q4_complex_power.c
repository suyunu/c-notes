#include <stdio.h>

// a regular power function with pointer for you to compare it with the complex_power finction
void poww(int a, int p, int *res){
    // *poww = a^p

    *res = a;

    int i;
    for(i = 1 ; i < p ; i++){
        *res = *res * a;
    }
}

void complex_power(float a, float b, int p, float *re, float *im){
    *re = a;
    *im = b;

    int i;
    for(i = 1 ; i < p ; i++){
        float temp_re, temp_im;
        temp_re = a * *re - b * *im;
        temp_im = a * *im + b * *re;

        *re = temp_re;
        *im = temp_im;
    }
}


int main(){
    float a, b;
    int p;
    scanf("%f %f %d", &a, &b, &p);

    float re, im;
    complex_power(
        // DO_NOT_EDIT_ANYTHING_ABOVE_THIS_LINE
            a, b, p, &re, &im
        // DO_NOT_EDIT_ANYTHING_BELOW_THIS_LINE
    );
    printf("%.2f %.2f", re, im);

    return 0;
}
