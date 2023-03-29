#include<iostream>
using namespace std ;
class A{
	
	int x;
	
public :
	void set(int a){
		x = a;
	}
	void out(){
		cout<<x;
	}
  void operator>(A);
};

 void A :: operator>(A ob){
	
	if(x>ob.x){
		cout<<"Yes object is bigger then other ";
	}
	else if(x==ob.x){
		cout<<"Both objects has same value";
	}
	else{
		cout<<"No  object is not bigger then other";
	}
	
}

int main(){
	
	A ob1,ob2;
	ob1.set(7);
	ob2.set(3);
	ob1>ob2;
	return 0 ;
}