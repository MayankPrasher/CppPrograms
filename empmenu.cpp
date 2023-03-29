#include<iostream>
using namespace std;

class emp{
	
	private:
		int eid;
		string ename;
		double basic;
		double hr;
		double da;
		double tax;
	public :
		void insert();
		void display();
		void calculate(){
			double result;
			double base;
			double basetax;
			base = basic + hr + da ;
			basetax = base*tax/100;
			result = base - basetax;
			cout<<"The total salary of emp is :"<<result<<endl;
		}
};
void emp::insert(){
	
	cout<<"Emp Id :";
	cin>>eid;
	cout<<"Emp name :";
	cin>>ename;
	cout<<"Basic salary :";
	cin>>basic;
	cout<<"Enter hr :";
	cin>>hr;
	cout<<"Enter da :";
	cin>>da;
	cout<<"Tax :";
	cin>>tax;

}
void emp::display(){
	cout<<"Emp Id :"<<eid;
	cout<<"Emp name : "<<ename;
	cout<<"Basic salary : "<<basic;
	cout<<"hr :"<<hr;
	cout<<"da :"<<da;
	cout<<"Tax :"<<tax;
}

int main(){
	emp employee[6];
	for(int i = 0 ; i<6 ; i++){
		cout<<"Give input :"<<endl;
		employee[i].insert();
		employee[i].calculate();
	}
	for(int i = 0 ; i<6 ; i++){
		cout<<"Give input :"<<endl;
		employee[i].display();
	}
	return 0 ;
}