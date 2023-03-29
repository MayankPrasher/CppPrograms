#include<iostream>
using namespace std ;

void add(int a , int b){
      
      int result;
	  result = a + b ;
	  
	  cout<<"Sum is :"<<result;	
}
void sub(int a , int b){
      
      int result ;
	  result = a - b ;
	  
	  cout<<"Result is :"<<result;	
}
void mul(int a , int b){
      int result ;
	  result = a * b ;
	  
	  cout<<"Result is :"<<result;	
}
void divi(int a , int b){
       int result ;
	  result = a / b ;
	  
	  cout<<"Result is :"<<result;	
}
void mod(int a , int b){
      int result ;
	  result = a % b ;
	  
	  cout<<"Result is :"<<result;	
}



int main(){
	 
	 int choice,a,b;
	cout<<"Hey welcome to my menu driven calculator :)"<<endl;
	cout<<"Choose the operation :"<<endl;
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Modulus"<<endl;
	cin>>choice;
		cout<<"Enter the first number :";
		cin>>a;
		cout<<"Enter the second number :";
		cin>>b;
	switch(choice){
		
		case 1 : 
		     add(a,b);
		     break;
		case 2 :
			sub(a,b);
			break;
		case 3 :
		     mul(a,b);
			 break;
	    case 4	:
	    	 divi(a,b);
	    	 break ;
	    case 5 :
	    	 mod(a,b);
	    	 break;
	    default : 
	    cout<<"Wrong input";
	}
	
	return 0 ;
}