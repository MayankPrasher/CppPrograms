#include<iostream>
using namespace std ;
class a{
	int x;
	int y;
public:
	void read(){
		cout<<"Enter the number in x :";
		cin>>x;
		cout<<"Enter the number in y :";
		cin>>y;
	}
	void display(){
			cout<<"the number in x :"<<x;
			cout<<"the number in x :"<<y;	
	}
	friend a operator+(a,a);
};
 a operator+(a o1 , a o2){
 	a temp;
 	temp.x = o1.x + o2.x;
 	temp.y = o1.y + o2.y;
 
 	return temp ;
 }
 
 int main(){
 	
 	a ob1,ob2,ob3;
 	ob1.read();
 	ob2.read();
 	ob3 = ob1 + ob2;
 	ob3.display();
 	return 0 ;
 }
