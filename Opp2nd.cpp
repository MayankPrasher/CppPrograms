#include<iostream>

using namespace std ;

class student {
	public :
	string fname ;
	string lname ;
	int year ;
	string major ;
};

int main(){
	
	student s1 ;
	
	s1.fname = "Mayank";
	s1.lname = "Prasher";
	s1.year = 2;
	s1.major = "SDE";
	
	cout<<s1.fname+" "<<s1.lname<<" of year "<<s1.year<<" with the " <<s1.major<<" as an major";
}