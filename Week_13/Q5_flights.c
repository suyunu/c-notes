#include <stdio.h>
#include <string.h>

typedef struct{
	int flight_no;
	char org[4];
	char dst[4];
	int start;
	int arrival;
}Flight_t;

/*
 * sorts flights according to their
 * starting time and the originating airport code.
 *
 * if f1 > f2 return 1
 * if f1 == f2 return 0
 * if f1 < f2 return -1
 */
int compare_flights(Flight_t *f1, Flight_t *f2){
	if(f1->start > f2->start)
		return 1;
	else if(f1->start < f2->start)
		return -1;
	else{
		if(strcmp(f1->org, f2->org) > 0)
			return 1;
		else if(strcmp(f1->org, f2->org) < 0)
			return -1;
		else
			return 0;
	}
}

int main(){
	int i, j;
	int N;
	scanf("%d", &N);

	Flight_t flights[N];

	for(i = 0 ; i < N ; i++){
		scanf("%d", &flights[i].flight_no);
		scanf("%s", flights[i].org);
		scanf("%s", flights[i].dst);
		scanf("%d", &flights[i].start);
		scanf("%d", &flights[i].arrival);
	}


	for(i = 0 ; i < N ; i++){
		for(j = 0 ; j < N-1 ; j++){
			if(compare_flights(&flights[j], &flights[j+1]) > 0){
				Flight_t temp = flights[j];
				flights[j] = flights[j+1];
				flights[j+1] = temp;
			}
		}
	}


	for(i = 0 ; i < N ; i++){
		printf("%d ", flights[i].flight_no);
		printf("%s ", flights[i].org);
		printf("%s ", flights[i].dst);
		printf("%d ", flights[i].start);
		printf("%d\n", flights[i].arrival);
	}


    return 0;
}
