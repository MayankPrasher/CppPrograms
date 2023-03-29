#include<iostream>

using namespace std ;

class matrix{
	
	int x [2][2]; 
	int y [2][2];
	public : 
	
	void input(){
		
		cout<<"Insert the data in matrix 1 :";
		for(int i=1;i<=4;i++){
			for(int j=1;j<=4;j++){
				cin>>x[i][j];
			}
		}
		cout<<"Insert the data in matrix 2 :";
		for(int i=1;i<=4;i++){
			for(int j=1;j<=4;j++){
				cin>>y[i][j];
			}
		}
	}
	
//	num operator + (num ob){
//		
//		num temp ;
//	   temp.x = x + ob.x;
//	   temp.y = y + ob.y;
//	   return temp;
//	}
	void display(){	
	cout<<"The elements in array x:"<<endl;
	    for(int i=1;i<=4;i++){
	    	for(int j=1;j<=4;j++){	
	    		cout<<x[i][j];
			}
			cout<<endl;
		}
	cout<<"The elements in array y:"<<endl;
	    for(int i=1;i<=4;i++){
	    	for(int j=1;j<=4;j++){	
	    		cout<<y[i][j];
			}
			cout<<endl;
		}
	}
	
};

int main(){
	
	matrix ob1;
	ob1.input();
	matrix ob2;
	ob2.input();
    ob1.display();
    ob2.display();
}