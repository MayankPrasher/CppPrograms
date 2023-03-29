#include<stdio.h>
int main(){
	int n,i,div,sum=0,count=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		div = n%i;
		if(div==0){
			
			count ++;
		}
	}
	if(count==2){
		
		printf("It is prime number");
	}
	else{
		
		printf("it is not a prime number");
	}
	return 0 ;
}