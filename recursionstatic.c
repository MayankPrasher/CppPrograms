#include<stdio.h>
int fun(int a){
	
	static int x =0 ;
	if(a>0){
		
		x++;
		return fun(a-1)+x;
	} 
	
	return 0;
}

int main(){
	
	int i = 5 ;
	
	printf("%d \n",fun(i));
	
}