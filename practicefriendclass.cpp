#include<iostream>
using namespace std;
class B;
class A{
	
	public:
		int x;
		void input(int a){
			x = a;
		}
		friend void maxm(A,B);
};
class B{
	
	public:
		int y;
		void inputy(int b){
			y = b;
		}
		friend void maxm(A,B);
};
void maxm(A o1 ,B o2){
	
	if(o1.x>o2.y){
	 cout<<"x is greater than y";
	}
	else if(o2.y){
		cout<<"y is greater than x";
	}
	else{
	 cout<<"both are equal";
	}
}
int main(){
	A ob1;
	ob1.input(6);
	B ob2;
	ob2.inputy(3);
	maxm(ob1,ob2);
	return 0 ;
}