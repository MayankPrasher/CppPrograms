#include<stdio.h>
int main(){
	int hours, emp , extra;
	float over,rate;
	rate = 12.00;
	emp = 1 ;
	while(emp<=10){
		printf("\n\nworking hours of employee  %d :",emp);
		scanf("%d",&hours);
		if(hours>40){
			
			extra = hours - 40 ;
			over = extra * rate ;
			
			
			printf("\n overtime pay of employee %d : %f",emp,over);
		}
		else{
			
			printf("\nNot Eligible");
		}
		
		emp = emp + 1;
	} 
	return 0 ;
}