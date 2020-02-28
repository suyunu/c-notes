#include <stdio.h>

int main() {
	int total_seconds;
	scanf("%d", &total_seconds);

	int hours = total_seconds/3600;
	int minutes = (total_seconds - hours*3600)/60;
	int seconds = (total_seconds - hours*3600 - minutes*60);
	
	printf("%d %d %d", hours, minutes, seconds);

	return 0;
}