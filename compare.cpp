#include<iostream>
using namespace std;
int main(){
	int x ,y;
	cout<<"\nEnter first number :";
	cin>>x;
	cout<<"\nEnter second number :";
	cin>>y;
	if(x>y){
		cout<<" x is greater than y";
	}
	if(y>x){
		cout<<" y is grester than x";
	}
	if(x==y){
		cout<<" both are equal";
	}
	return 0;
}