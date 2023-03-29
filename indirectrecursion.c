#include<stdio.h>

int funa(int n){
	
	if(n>0){
		
		printf("%d",n);
		funb(n-1);
	}
}
 int funb(int n){
	
	if(n>0){
		
		printf("%d",n);
		funa(n/2);
	}
}

int main(){
	
	funa(20);
	return 0;
}