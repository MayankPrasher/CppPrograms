#include<iostream>
#include<stdlib.h>

using namespace std ;

int main(){
	
	int *p = new int[5];
	int *r = new int[10];
	int i ;
	
	p[0] = 4 ;
	p[1] = 6 ;
	p[2] = 8 ;
	p[3] = 10;
	p[4] = 12;
	
	for(i=0;i<5;i++){
		
		cout<<p[i];
	}
	
	return 0 ;
}