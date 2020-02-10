#include <stdio.h>

struct student{
	int id;
	float mt1, mt2, final;
	char grade;
};

int main() {
	int n, i;
	struct student arr[50];

	scanf("%d", &n);
	for(i = 0 ; i < n ; i++){
		scanf("%f", &arr[i].mt1);
		scanf("%f", &arr[i].mt2);
		scanf("%f", &arr[i].final);
		arr[i].id = 1000+i;
		arr[i].grade = 'I';
	}

	for(i = 0 ; i < n ; i++){
		float total_grade = arr[i].mt1*0.3 + arr[i].mt2*0.3 + arr[i].final*0.4;
		if(total_grade <= 24)
			arr[i].grade = 'F';
		else if(total_grade <= 49)
			arr[i].grade = 'C';
		else if(total_grade <= 74)
			arr[i].grade = 'B';
		else
			arr[i].grade = 'A';
	}

	for(i = 0 ; i < n ; i++){
		float total_grade = arr[i].mt1*0.3 + arr[i].mt2*0.3 + arr[i].final*0.4;
		printf("%d %.1f %c\n", arr[i].id, total_grade, arr[i].grade);
	}

	return 0;
}
