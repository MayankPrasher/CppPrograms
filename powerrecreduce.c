#include<stdio.h>
int p(int m,int n){
	
	if(n==0){
		
		return 1;
	}
	if(n%2==0){
		
		return p(m*m,n/2);
	}
	else{
		
		return m*p(m*m,(n-1)/2);
	}
}
int main(){
	
	int r;
	r= p(2,10);
	printf("%d",r);
	return 0;
}