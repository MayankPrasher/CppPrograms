//Logical Operators :
//	AND (&&) :-
//	x        y         x&&y
//	1        1          1
//	0        1          0
//	1        0          0
//	0        0          0 
//	
//	OR (||) :-
//	
//	x        y         x||y
//	1        1          1
//	0        1          1
//	0        1          1
//	0        0          0
//	
//	NOT (!) :- negation of statement 
#include<iostream>
using namespace std;
int main(){
	int hours;
	cout << "\nEnters the Hour :";
	cin>>hours;
	if(hours<=9 || hours>=17){
		cout<<"leisure Hours";
	}
	else{
		cout<<"working Hours";
	}
	return 0 ;
}