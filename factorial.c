#include<stdio.h>

int factorial(int x){
	int pro = 1;
	for(int i=1; i<=x ; i++){
		
		pro = pro*i;
		
	}
	return pro ;
}
int main(){
	int num, result ;
	printf("enter the integer : ");
	scanf("%d",&num);
	result = factorial(num);
	printf("Factorial of %d is : %d",num,result);
	return 0 ;
}