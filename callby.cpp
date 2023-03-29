#include<iostream>
using namespace std;

void replace(int &a){
	
	 a = 5 ;
	cout<<"replaced value :"<<a<<endl;
}

int main(){
	
	int num = 3 ;
	replace(num);
	cout<<"Actual value :"<<num;
	return 0 ;
}