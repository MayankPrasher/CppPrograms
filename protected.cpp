#include<iostream>
using namespace std ;

class base{
	
	protected :
		int a = 7 ; 
};
class Derived : public base{
	
	public:
	void print(){
		
		cout<<"The number in base class "<<a;
	}
};

int main(){
	Derived ob;
	ob.print();
	
	return 0 ;
}