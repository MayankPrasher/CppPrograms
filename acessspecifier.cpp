#include<iostream>
using namespace std;

class A{
	int x ;
	int y ;
	
	public:
		int a = 10;
		
		void get(){
		cout <<"Enter the value in a x :";
		cin>>x;
		cout <<"Enter the value in a y :";
		cin>>y;
		}
		
		void add(){
			
			int result ;
			result = x + y + a ;
		    cout<<result ;
		}
};



int main(){
	
	A ob1;
	ob1.get();
	ob1.add();
	ob1.a = 12;
	ob1.add();
	}