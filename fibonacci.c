#include<stdio.h>
//recurssive function with memoization
//	int f[7];
//int fib(int n){
//	
//	if(n<=1){
//	  f[n] = n;
//	  return n;
//	}
//	else{
//		if(f[n-2]==-1){
//			
//			f[n-2] = fib(n-2);
//		}
//		if(f[n-1]=-1){
//			
//			f[n-2] = fib(n-1);
//		}
//		
////		f[n] = f[n-2]+f[n-1];
//		return f[n-2]+f[n-1];
//	}
//}
//ittrative
//int fib(int n){
//	
//	int t0 = 0 , t1 = 1 , s = 0 , i ;
//   
//   if(n<=1){
//   	
//   	return n ;
//   }
//   
//   else{
//   	
//   	for(i = 2 ; i<=n ; i++){
//   	     s = t0 + t1;
//   	     t0 = t1;
//   	     t1 = s ;
//	   }
//	   
//	   return s;
//   }
//}
//recurssive function without memo
//int fib(int n){
//	
//	if(n<=1){
//		
//		return n ;
//	}
//	
//	else{
//		
//		return fib(n-2)+fib(n-1);
//	}
//}

//int main(){
//	int r ;
//	
//	r = fib(5);
//	printf("%d",r);
//	return 0;
//}
int f[10];

int fib(int n){
	
	if(n<=1){
		
		f[n]=n;
		return n;
	}
	else{
		
		if(f[n-2]==-1){
			
			f[n-2] = fib(n-2);
			
		}
		if(f[n-1]==-1){
			
			f[n-1] = fib(n-1);
			
		}
		return f[n-2]+f[n-1];
	}
}
int main(){

	int i;
	
	for(i=0;i<=10;i++){
		
		f[i] = -1;
	}
	
	printf("%d \n",fib(5));
	return 0;
}