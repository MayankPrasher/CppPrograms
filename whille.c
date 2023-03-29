#include<stdio.h>
int main(){
	
	int n ;
	int i = 1 ;
	
	printf("Enter the number : ");
	scanf("%d",&n);
	while(i<=n){
		
		printf("%d\n",i);
		i = i + 1;
	}
	return 0;
}