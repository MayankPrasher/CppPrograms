#include<iostream>
using namespace std;
int main(){
	char input;
	cout<<"\nEnter the Character : ";
	cin>>input;
	if(input>=65 && input<=90){
		
		cout<<"Capital letter !!";
	}
	else if(input>=97 && input<=122){
		
		cout<<"small letter !!";
	}
	else if(input>=48 && input<=57){
		
		cout<<"Number !!";
	}
	else{
		
		cout<<"a special symbol !! ";
	}
	return 0;
}