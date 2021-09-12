#include <stdio.h>
int main(){
	
	float people[10];
	float sum = 0;
	float avg;
	
	for(int i=0; i<=9; i++){
	
		scanf("%f", &people[i]);
		sum += people[i];
		
	}
	printf("%.2f", sum);
	
	avg = sum/10;
	
	printf("\nthe average number of 10 persons are %.2lf", avg);
		
	return 0;
		
	

}
