#include<iostream>
using namespace std ;
class A{
	int x;
	int y;
	public :
		void input(){
			cout<<"Enter in x :";
			cin>>x;
			
			cout<<"Enter in y:";
			cin>>y;
		}
	    void out(){
	    	cout<<"x is :"<<x<<"|y:"<<y;
		}
		friend A operator - (A o);
};
A operator- (A o){
	A temp;
	temp.x = - o.x;
	temp.y = - o.y;
	return temp;
}
int main(){
	A ob;
	ob.input();
	ob.out();
	A ob2;
	ob2 = -ob;
	ob2.out();
	return 0 ;
}