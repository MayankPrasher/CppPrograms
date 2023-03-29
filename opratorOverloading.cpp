#include<iostream>

using namespace std ;

class num{
	
	int x ; 
	int y ;

	public : 
	
	void input(){
		
		cout<<"Enter the first number :";
		cin>>x;
		cout<<"Enter the second number :";
		cin>>y;
	}
	
	num operator + (num ob){
		
		num temp ;
	   temp.x = x + ob.x;
	   temp.y = y + ob.y;
	   return temp;
	}
	void display(){
		cout<<"The value of x :"<<x<<endl;
		cout<<"The value of y :"<<y<<endl;
	}
	
};

int main(){
	
	num ob1;
	ob1.input();
	num ob2;
	ob2.input();
	num ob3 ;
	ob3 = ob1 + ob2;
	ob3.display();
}