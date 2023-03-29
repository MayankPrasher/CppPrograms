#include<iostream>
using namespace std;
class shape{
	protected :
		double a;
    public :
    	virtual void getdimension(){
    		cout<<"Enter the dimension of the shape :";
    		cin>>a;
		}
		virtual void area()=0;
};
class sqaure : public shape {
	public :
		void area(){
			cout<<"The area of the square :"<<a*a<<endl;
		}
};
class circle : public shape {
	public :
		void area(){
			cout<<"The area of the circle :"<<3.14*a*a<<endl;
		}
};
int main(){
	
	shape *ptr;
	sqaure ob;
	ptr = &ob;
	ptr->getdimension();
	ptr->area();
	shape *ptr2;
	circle ob2;
	ptr2 = &ob2;
	ptr2->getdimension();
	ptr2->area();
	return 0;
}