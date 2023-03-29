#include<stdio.h>
int main(){
	int n,i,div,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		div = n%i;
		if(div==0){
			
			sum = sum+i;
		}
	}
	if(sum==n*2){
		
		printf("It is perfect number");
	}
	else{
		
		printf("it is not a perfect number");
	}
	return 0 ;
}