#include<stdio.h>
int main(){
	int n,r ;
	printf("Enter a no. to reverse :");
	scanf("%d",&n);
	while(n>0){
		
		r = n%10;
		n = n/10;
		printf("%d",r);
	}
	return 0 ;
}