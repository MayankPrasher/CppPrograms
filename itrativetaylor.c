#include<stdio.h>
//irrative
//double e(int x , int n){
//	
//	if(n==0){
//		
//		return 1;
//	}
//	else{
//		
//		double s=1;
//		for(;n>0;n--){
//			
//			s= 1 + s*x/n;
//		}
//		return s;
//	}
//}
//recursive
double e(int x, int n){
	static double s = 1;
	
	if(n==0){
		return s;
	}
	else{
		
		s= 1+x*s/n;
		return e(x,n-1);
	}
}

int main(){
  double r;
  r = e(2,4);
  printf("%lf",r);
  return 0 ;
}