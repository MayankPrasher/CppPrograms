#include<iostream>
using namespace std ;
class A{
	public :
		int x;
		void input();
		void output();
	friend 	A operator - (A);
};

void A::input(){
	
	cout<<"Enter the value in x :";
	cin>>x;
}
void A::output(){
	cout<<"Value in x :"<<x;
}
A operator - (A o){
	A temp ;
	temp.x = -o.x;
	return temp;
}
int main(){
	
	A ob1 , ob2 ;
	ob1.input();
	ob2 = - ob1;
	ob2.output();
	return 0 ;
}