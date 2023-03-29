#include<iostream>
using namespace std ;
class A{
	
	int  x ;
	
	public :
		void input(int a ){
		    x = a ;
		}
		void out(){
			
			cout<<x;
		}
		
		void operator=(A);
};

void A::operator=(A ob){
	x = ob.x;
}

int main(){
	A ob1 , ob2 ;
	ob1.input(8);
	ob2 = ob1;
	ob2.out();
}