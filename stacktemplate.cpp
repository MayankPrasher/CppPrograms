#include<iostream>
using namespace std;
template <class T>
class stk{
	T arr[5];
	int top = -1;
	public:
		void push(T a){
			top++;
			arr[top]= a ;
			cout<<"push successfull"<<endl;
		}
		T pop(){
			T temp;
			temp = arr[top];
			top--;
			return temp;
		}
};
int main(){
	stk <double>ob;
	ob.push(3.4);
	double d = ob.pop();
	cout<<d;
	return 0 ;
}