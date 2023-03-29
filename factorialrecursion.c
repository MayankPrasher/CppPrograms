#include<stdio.h>

//int fact(int n){
//	
//	if(n==0){
//		
//		return 1;
//	}
//	else{
//		
//		return fact(n-1)*n;
//	}
//}
int fact(int n){
	
	int num = 1;
	for(int i=1;i<=n;i++){
		
		num = num*i ;
	}
	return num;
}

int main(){
	
	int r;
	r = fact(10);
	printf("%d",r);
	return 0 ;
}