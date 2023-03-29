#include<stdio.h>

//int fact(int j){
//	
//	if(j==0){
//		
//		return 1;
//	}
//	else{
//		
//		return fact(j-1)*j;
//	}
//}
//int c(int n , int r){
//	
//	int t0 , t1 , t2 , g ;
//	 t0 = fact(n);
//	 t1 = fact(r);
//	 t2 = fact(n-r);
//	 g = t0/(t1*t2);
//	 return g;
//}

//recurrsive function
int c(int n , int r){
	
	if(r==0 || n==r){
		
		return 1;
	}
	else{
		
		return c(n-1,r-1)+c(n-1,r);
	}
}
int main(){
	
	int a ;
	 a = c(4,2);
	 printf("%d",a);
	 return 0;
}