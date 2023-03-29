#include<iostream>
using namespace std;
int main(){
	int nsub;
	cout<<"Enter number of subjects :";
	cin>>nsub;
	int *marks = new int[nsub];
	for(int i = 0 ; i<nsub;i++){
		cout<<"Enter the marks of subject"<<i+1<<":";
		cin>>marks[i];
	}
	int total = 0 ;
	for(int i = 0 ; i<nsub;i++){
		total+=marks[i];
	}
	int full = nsub*100;
	int per = total/full;
	cout<<"Total is :"<<total<<endl;
	cout<<"percentage is :"<<per<<endl;
	delete[] marks;
	return 0;
}