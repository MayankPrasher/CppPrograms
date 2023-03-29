#include<iostream>
using namespace std ;

class emp{
	private :
		int eid ;
		string ename ;
		double basic ;
		double hr ;
		double da ;
		double tax ;
		double total ;
   public :
    	
    	void insert(){
    		
    		cout<<"Enter the employee id : ";
    		cin>>eid;
    		cout<<"Enter the employee name : ";
    		cin>>ename;
    		cout<<"Enter the basic salary: ";
    		cin>>basic;
    		cout<<"Enter the house rent: ";
    		cin>>hr;
    		cout<<"Enter the allowance: ";
    		cin>>da;
    		cout<<"Enter the tax: ";
    		cin>>tax;
		}
		
		void calc(){
			
			total = basic + hr + da - tax ;
		}
		
		void display(){
			cout<<"-----------------------------"<<endl;
			cout<<"Employee id is : "<<eid<<endl;
			cout<<"Employee name is : "<<ename<<endl;
			cout<<"Basic salary is : "<<basic<<endl;
			cout<<"House rent  is : "<<hr<<endl;
			cout<<"Allowance  is : "<<da<<endl;
			cout<<"Tax is : "<<tax<<endl;
			cout<<"Total is : "<<total<<endl;
			cout<<"-------------------------"<<endl;
			
		}    	
};

int main(){
	
	emp e[7];
	
	for(int i = 0 ; i<7 ; i++){
		
		e[i].insert();
		e[i].calc();
		e[i].display();
	}
	
	 return 0 ;
}