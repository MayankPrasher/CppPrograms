//expression 1 ? expression 2 : expression 3 ;
//   True            print           not       
//   false           not            print      
//Q. WAP to receive value of an angle in degrees and check whether sum of squares 
//of sine and cosine of this angle is angle to 1.
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
	float theta;
	cout<<"Enter the angle in degree :";
	cin>>theta;
	theta = 0.0174533*theta;
	sin(theta)*sin(theta)+cos(theta)*cos(theta)==1 ? cout<<"Expression is true" : cout<<"Expression is false";
	return 0 ;
}