#include<iostream>
using namespace std;

class A{
	
	public:
		int x;
		void input(int);
		void output();
		void operator <(A o){
			if(x<o.x){
				cout<<"Second object is greater than first";
			}
			else if(x>o.x){
				cout<<"first object is greater than Second";
			}
			else{
				cout<<"Both are equal";
			}
		}
};
void A::input(int a){
	x = a;
}
void A::output(){
	cout<<"Value in x :"<<x;
}
int main(){
	A ob1 , ob2;
	ob1.input(8);
	ob2.input(6);
	ob1<ob2;
	return 0 ;
}