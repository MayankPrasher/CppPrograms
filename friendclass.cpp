#include<iostream>
using namespace std;
class B;
class A{
	char ch = 'A';
	int num = 6;
	public :
		friend class B;
};
class B{
	public :
		void dis(A ob){
			cout<<ob.ch<<endl;
			cout<<ob.num<<endl;
		}
};
int main(){
  B obj;
  A obj2;
  obj.dis(obj2);
  return 0 ;
}