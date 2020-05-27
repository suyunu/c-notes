#include <stdio.h>

typedef struct{
	float x;
	float y;
}Point_t;

typedef struct{
	Point_t ll, ur;
}Rect_t;

void move(Rect_t *r, int moveX, int moveY){
	r->ll.x += moveX;
	r->ll.y += moveY;

	r->ur.x += moveX;
	r->ur.y += moveY;
}

int main(){
	Rect_t r;
	scanf("%f %f %f %f", &r.ll.x, &r.ll.y, &r.ur.x, &r.ur.y);

	int moveX, moveY;
	scanf("%d %d", &moveX, &moveY);

	move(&r, moveX, moveY);

	printf("%.2f %.2f %.2f %.2f\n", r.ll.x, r.ll.y, r.ur.x, r.ur.y);

    return 0;
}