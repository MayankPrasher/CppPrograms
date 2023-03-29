//The marks obtained by a student in 5 different subjects are input through the keyboard . the student gets a division as per the 
//following rules :
//	Percentage above or equal to 60  - First division
//	Percentage between 50 and 59  - Second division
//	Percentage between 40 and 49  - Third division
//	Percentage less than 40  - Fail
//	write a program to calculate the division obtained by the student.
	
#include<iostream>
using namespace std;
int main(){
	int s1,s2,s3,s4,s5,total,per;
	cout<<"\nEnter the marks of subject 1 :";
	cin>>s1;
	cout<<"\nEnter the marks of subject 2 :";
	cin>>s2;
	cout<<"\nEnter the marks of subject 3 :";
	cin>>s3;
	cout<<"\nEnter the marks of subject 4 :";
    cin>>s4;
	cout<<"\nEnter the marks of subject 5 :";
	cin>>s5;
	total = s1+s2+s3+s4+s5;
	per = total*100/500 ;
	if(per>=60){
	cout<<"First Divison";
	}
	if(per<=59 && per>=50){
		cout<<"Second Divison";
	}
	if(per<=49 && per>=40){
		cout<<"Third Divison";
	}
	if(per<40){
		cout<<"Fail";
	}
	return 0 ;
}