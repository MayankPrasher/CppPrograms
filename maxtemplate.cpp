#include<iostream>
using namespace std;
template <class T>
void m(T a,T b){
	T g = (a>b)?a:b;
	cout<<"Max :"<<g<<endl;
}
int main(){
	m(5,6);
	m(4.1,3.56);
	return 0 ;
}