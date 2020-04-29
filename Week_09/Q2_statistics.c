#include <stdio.h>

int main() {
	int N, i;
	int arr[51];

	scanf("%d", &N);

	for(i = 0 ; i < N ; i++)
		scanf("%d", &arr[i]);

	float sum = 0, avg, var = 0;

	for(i = 0 ; i < N ; i++)
		sum += arr[i];

	avg = sum / N;

	for(i = 0 ; i < N ; i++)
		var += (arr[i] - avg) * (arr[i] - avg);
	var /= N;

	printf("%.0f %.2f %.2f", sum, avg, var);

	return 0;
}
