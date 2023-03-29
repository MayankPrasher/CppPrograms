#include<iostream>
using namespace std ;
class A{
	public :
	int x ;
	void set(int a){
		
		x = a;
	}
	void print(){
		
		cout<<x;
	}
	
	friend A operator-(A);
};

 A operator-(A ob1){
	
	A temp ;
	temp.x = -ob1.x;
	return temp;
}

int main(){
	
	A o1 , o2 ;
	o1.set(4);
	o2 = -o1;
	o2.print();
	return 0 ;
	
}