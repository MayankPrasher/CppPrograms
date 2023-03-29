#include<iostream>
using namespace std;

double feet(double gallon){
	 double foot = 1/7.481 ;
	return gallon * foot ;
}

int main(){
	double gallon , result ;
	cout<<"Enter the no. of Gallons :";
	cin>>gallon ;
	result = feet(gallon);
	cout<<gallon<<" has "<<result<<" cubic feet";
	return 0 ;
}