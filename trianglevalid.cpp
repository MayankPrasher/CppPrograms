//if the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not.
//The triangle is valid if the sum of two sides is greater than the largest of the three sides.
#include<iostream>
using namespace std;
int main(){
	float s1,s2,s3,largest;
	cout<<"\nEnter the side 1 of triangle :";
	cin>>s1;
	cout<<"Enter the side 2 :";
	cin>>s2;
	cout<<"Enter the side 3 :";
	cin>>s3;
	if(s1>s2 && s1>s3){
		largest = s1;
	}
	else if(s2>s1 && s2>s3){
		largest = s2;
	}
	else{
		largest = s3;
		}
	if((s1+s2)>largest || (s2+s3)>largest || (s3+s1)>largest){
		
		cout<<"Triangle is valid";
	}
	else{
		
		cout<<"Triangle is invalid";
	}
	return 0 ;
	
}