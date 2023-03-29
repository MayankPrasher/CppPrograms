#include<iostream>
using namespace std ;
class A{
	private :
		void privatefun(){
			int a = 10 ;
			int b = 20 ;
			cout<<"private ka maal hai sirf class mai dikhunga"<<endl;
		}
    protected :
    	int j = 8;
    	int i = 9;
    	void protectfun(){
    		cout<<"Mujhe kya mai toh sirf class or derived class mai dikhunga"<<endl;
		}
	public :
		int x = 30 ;
		int y = 21 ;
		void publicfun(){
			cout<<"Mujhe object bhi access karega apni class bhi karegi or derived class bhi"<<endl;
		}
};
class B:public A{
	
	public:
		void newfun(){
			cout<<"class or bhi function call krio ek baar kyuki mai akela nhi hoon class"<<endl;
		}
	int add(){
		int result = x +y;
		cout<<"from class A but result in B which is"<<result<<endl;
		int protectedresult = i + j ;
		cout<<"from class A but protected hoon or result hai"<<protectedresult<<endl;
		return 0 ;
	}
};
int main(){
	
	B ob1;
//	ob1.privatefun();
//	ob1.protectfun();
	ob1.publicfun();
	ob1.newfun();
	ob1.add();
	return 0 ;
}