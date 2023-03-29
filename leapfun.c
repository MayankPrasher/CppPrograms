#include<stdio.h>
int leap(int year){
	int d;
	d = year%4 ;
	if(d==0){
		return 1;
	}
	else{
		return 0 ;
	}
}
int main(){
	int year,ans ;
	printf("Enter the year :");
	scanf("%d",&year);
	ans = leap(year);
	if(ans==1){
		printf("It's a Leap year !!'");
	}
	else{
		printf("It's not a leap year ");
	}
	return 0 ;
}