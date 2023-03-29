#include<iostream>
using namespace std;

int main(){
	
	int length , breadth , perimeter , area ;
	
	cout<<"Enter the length of the shape \n";
	cin>>length;
	cout<<"Enter the breadth of the shape \n";
	cin>>breadth;
	area = length * breadth ;
	if(length == breadth){
		
		cout<<"The shape is square and the area is "<<area<<endl;
		perimeter = 4 * length ;
		cout<<"the perimeter is "<<perimeter;
	}
	else{
		
		cout<<"The shape is rectangle and the area is "<<area<<endl;
		perimeter = length * breadth ;
		cout<<"the perimeter is "<<perimeter;
	}
	return 0 ;
}