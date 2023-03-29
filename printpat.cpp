#include<iostream>
using namespace std ;

void printpat(int n){
	
	int i , j , k ;
	
	for(k=0 ; k<=n ; k++){
		
		for(i = n ; i>0 ; i--){
			
			for(j=0 ; j<(n-k); j++){
				
				cout<<i;
			}
		}
		
		cout<<endl;
	}
	
}

int main(){
	
	printpat(5);
	
	return 0 ;
}