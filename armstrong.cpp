#include<iostream>
#include<math.h>
using namespace std ;
int main(){
	
	int n,m,sum=0,r,j;
	int counter = 0 ;
	
	printf("enter the no. :");
	scanf("%d",&n);
	m=n;
	j = n ;
	
	while(j>0){
		
		j = j/10;
		counter++ ;
	}
	while(n!=0){
     
     r = n%10;
     sum = sum + pow(r,counter);
     n = n/10;
     
	}

	if(sum == m){
		
		printf("Its is armstrong no.!!");
	}
	else{
		
		printf("Its not a armstrong no.!!");
	}
	return 0;
}