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
	friend void operator != (A o,A o1);
};
     void operator != (A o ,A o1){
		if(o.x!=o1.x){
			cout<<"They are not same bro";
		}
		else{
			cout<<"They are same bro";
		}
	}
int main(){
	A ob1;
	ob1.input();
	A ob2;
	ob2.input();
	ob1!=ob2;
	return 0;
}