#include<iostream>
using namespace std ;

class student{
	
	int id ;
	string name ;
	int marks ;
	
	public :
		
		student(){
	
		}
		
void input(){
			
		cout<<"Enter Student id :";
		cin>>id;
		cout<<"Enter the Student name :";
		cin>>name;
		cout<<"Enter the Student Marks :";
		cin>>marks;
			
		}	
	student(int i, string n , int m){
          
          id = i ;
          name = n ;
          marks = m ;
     }
		student(student &o){
			
			id = o.id;
			name = o.name;
			marks = o.marks;
		}
		
		
		void display(){
			
			cout<<"Id is : "<<id<<endl;
			cout<<"Name is : "<<name<<endl;
			cout<<"marks is : "<<marks<<endl;
		}
};

int main(){
	
	
		
	student ob1;
	ob1.input();
	ob1.display();
	student ob2(ob1);
	ob2.display();
	student ob3 ;
	ob3 = ob2 ;
	ob3.display();
	
	
	
}