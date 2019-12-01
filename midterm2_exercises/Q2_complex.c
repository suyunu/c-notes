#include <stdio.h>

void complex_power(float a, float b, int p, float *re, float *im){
    float res_re = a;
    float res_im = b;
    
    int i;
    for(i = 1 ; i < p ; i++){
        float temp_re;
        float temp_im;
        temp_re = a*res_re - b*res_im;
        temp_im = a*res_im + b*res_re;
        
        res_re = temp_re;
        res_im = temp_im;
    }
    
    *re = res_re;
    *im = res_im;
}

int main()
{
    float a, b, re, im;
    int p;
    
    scanf("%f %f %d", &a, &b, &p);
    
    complex_power(a, b, p, &re, &im);
    
    printf("%.2f %.2f", re, im);
    
    return 0;
}