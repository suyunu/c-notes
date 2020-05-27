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
	int i, j, N;
	scanf("%d", &N);

	Point_t pArr[N];
	for(i = 0 ; i < N ; i++)
		scanf("%f %f", &pArr[i].x, &pArr[i].y);

	Point_t p1 = pArr[0], p2 = pArr[1];
	float max_dist = distance(p1, p2);

	for(i = 0 ; i < N-1 ; i++){
		for(j = i+1 ; j < N ; j++){
			if(distance(pArr[i], pArr[j]) > max_dist){
				max_dist = distance(pArr[i], pArr[j]);
				p1 = pArr[i];
				p2 = pArr[j];
			}
		}
	}

	printf("%.2f %.2f\n", p1.x, p1.y);
	printf("%.2f %.2f\n", p2.x, p2.y);

    return 0;
}
