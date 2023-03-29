#include<stdio.h>
int p(int m,int n){
	
	if(n==0){
		
		return 1;
	}
	else{
		
		return p(m,n-1)*m;
	}
}
int main(){
int r ;
r = p(2,4);
printf("%d",r);
return 0;
}