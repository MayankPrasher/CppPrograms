#include<iostream>
using namespace std ;
class B;
class A{
	
	int x ;
	int y ;
	
public :
	void set(int a ,int b){
		
		x = a ;
		y = b ;
	}
	
	void get(){
		
		cout<<x<<endl;
		cout<<y<<endl;
	}
	friend A operator +(A,B);
};
class B{
	int m;
	int n ;
public :	
	void in(){
		cout<<"Dalo value m mai :";
		cin>>m;
		cout<<"Dalo value n mai :";
		cin>>n;
	}
	void out(){
		cout<<"m mai :"<<m<<endl;
		cout<<"n mai :"<<n<<endl;
		
	}
	
	friend A operator+(A,B);
};

A operator+(A ob1,B ob2){
	A temp;
	temp.x = ob1.x + ob2.m;
	temp.y = ob1.y + ob2.n;
	return temp;
}

int main(){
	A o1,o3;
	o1.set(3,4);
	o1.get();
	B o2;
	o2.in();
	o2.out();
	o3 = o1 + o2;
	o3.get();
}