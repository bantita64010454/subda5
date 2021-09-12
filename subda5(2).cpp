#include <stdio.h>
int main(){
	
	float people1, people2,people3,people4,people5,people6,people7,people8,people9,people10;
	float sum = 0;
	float avg;
	
		scanf("%lf %lf %lf%lf%lf%lf%lf%lf%lf%lf",&people1, &people2,&people3,&people4,&people5,&people6,&people7,&people8,&people9,&people10 );
		
		sum = people1+ people2+people3+people4+people5+people6+people7+people8+people9+people10;
		
		printf("%lf", sum);
		avg = sum/10;
		printf("\n%2lf", avg);
		
		
		
		return 0;
	

}
