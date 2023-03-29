#include<iostream>
#include<math.h>
using namespace std ;

void power(int a = 5 , int b = 2){
	int result ;
	result = pow(a,b) ;
	cout<<"The result is :"<<result<<endl;
}

int main(){
	
	power(2,2);
	power();
	return 0 ;
}