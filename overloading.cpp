#include<iostream>
using namespace std;
class num {
	int x ;
	int y;
	
	public:
		void read(){
			cout<<"Enter the value in x :";
			cin>>x;
			cout<<"Enter the value in y :";
			cin>>y;
		}
		void print(){
			cout<<"the value in x :"<<x<<endl;
			cout<<"the value in y :"<<y<<endl;
		}
		
		num operator +(num);
		
};
num num::operator + (num ob){
		num temp;
		temp.x = x + ob.x;
		temp.y = y + ob.y;
		return temp;
	}

int main(){
	
	num ob1,ob2,ob3 ;
	ob1.read();
	ob2.read();
	
	ob3 = ob1 + ob2;
	
	ob3.print();
	return 0 ;
}