#include<iostream>
using namespace std ;

class A{
	
	public :
		int x ;
		int y ;
		void input(){
			
			cout<<"Enter the value in x :";
			cin>>x;
			cout<<"Enter the value in y :";
			cin>>y;
		}
		void output(){
			
			cout<<"Value in x :"<<x<<endl;
			cout<<"Value in y :"<<y<<endl;
		}
		friend A operator +(A,A);
};

 A operator +(A o1 , A o2){
	A temp ;
	temp.x = o1.x + o2.x;
	temp.y = o1.y + o2.y;
	return temp;
}
int  main(){
	
	A ob1 , ob2 , ob3 ;
	ob1.input();
	ob2.input();
	ob3 = ob1 + ob2;
	ob3.output();
	return 0;
}