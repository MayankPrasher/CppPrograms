#include<iostream>
using namespace std ;

int add(int a , int b){
	
	return a+b;
	
}

int main(){
	
	int a , b , sum ;
	cout<<"This program is to add two numbers :"<<endl;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number :";
	cin>>b;
	sum = add(a,b);
	cout<<"Result is : "<<sum ;
	return 0 ;
	
}