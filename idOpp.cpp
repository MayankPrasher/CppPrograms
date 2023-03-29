#include<iostream>

using namespace std; 

class id {
	 
	 int sid;
	 string name ;
	 string fname;
	 string mname;
	 string pno ;
	 string bgrp;
	public : 
	 id(){
	 	
	 	cout<<"Enter the your student id :	";
	 	cin>>sid;
	 	cout<<"Enter your name :";
	 	cin>>name;
	 	cout<<"Enter your mother's name :";
	 	cin>>fname;
	 	cout<<"Enter your father's name :";
	 	cin>>mname;
	 	cout<<"Enter your phone number :";
	 	cin>>pno;
	 	cout<<"Enter your blood group :";
	 	cin>>bgrp;
	 }
	 
	 void display(){
	 	
	 	cout<<"Student id :"<<sid<<endl;
	 	cout<<"Name :"<<sid<<endl;
	 	cout<<"Mother's Name :"<<sid<<endl;
	 	cout<<"Father's Name :"<<sid<<endl;
	 	cout<<"Phone No. :"<<sid<<endl;
	 	cout<<"Blood group :"<<sid<<endl;
	 	
	 }
	 
	
};


int main(){
	int num ;
	cout<<"Enter the number of students :";
	cin>>num;
	int student[num];
	
	for(int i ; i<num ; i++){
		
		id student[num];
	    student[num].display();
	}
	
	return 0 ;
	
}