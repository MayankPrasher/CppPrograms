#include<iostream>
using namespace std;
class A{
	int x;
	public :
		void input(){
			cout<<"Enter in x :";
			cin>>x;
		}
		void output(){
			cout<<"Value in x :"<<x<<endl;
		}
		friend A operator +(A o1 , A o2);
};
 A operator +(A o1 , A o2){
			A temp ;
			temp.x = o1.x + o2.x;
			return temp;
		}
int main(){
	A ob1;
	ob1.input();
	A ob2;
	ob2.input();
	A ob3;
	ob3 = ob1 + ob2;
	ob3.output();
	return 0 ;
}		