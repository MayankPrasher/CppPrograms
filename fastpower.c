#include<stdio.h>

//int fastPower(int a , int b){
//	
//	int res =1;
//	while(b>0){
//		if((b&1)!=0){
//			res = res*a;
//		}
//		a = a*a ;
//		b = b>>1 ;
//	}
//	
//	return res ;
//}

long  longfastPower(long a ,long b,long n){
	
	long res = 1;
	while(b>0){
		
		if((b&1)!=0){
			
			res = (res*(a % n)) % n;
		}
		a = ((a % n) * (a % n)) % n ;
		b = b >> 1 ;
	}
	
	return res ;
	
}

int main(){

//   long t ;
//   t = fastPower(361,163);
//    t = ;
   printf("%lu",longfastPower(361,163,1000000007));
   
   return 0 ;
}
