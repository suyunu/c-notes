#include <stdio.h>
#include <math.h>

typedef struct{
	float x;
	float y;
}Point_t;

float distance(Point_t p1, Point_t p2){
	return sqrt( pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2) );
}


int main(){
	Point_t p1, p2;

	scanf("%f %f", &p1.x, &p1.y);
	scanf("%f %f", &p2.x, &p2.y);

	printf("%.2f", distance(p1, p2));

    return 0;
}
