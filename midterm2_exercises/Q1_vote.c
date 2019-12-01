#include <stdio.h>

int main() {
	int N; 
	int vote_counts[101] = {0};
	int i;
	
	scanf("%d", &N);
	
	int vote;
	for(i = 0 ; i < N ; i++){
		scanf("%d", &vote);
		vote_counts[vote]++;
	}
	
	int max_voted = 1;
	int max_vote_count = 0;
	for(i = 1 ; i < 101 ; i++){
		if(vote_counts[i] > max_vote_count){
			max_vote_count = vote_counts[i];
			max_voted = i;
		}
	}
	
	printf("%d %d\n", max_voted, max_vote_count);
	
	return 0;
}