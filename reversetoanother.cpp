#include<iostream>
using namespace std;

int main(){
	
	int a[] = {3,6,4,8,5,2};
	int b[] = {0,0,0,0,0,0};
	int i , n ;
	n = 5;
	 
	 for(i=0;i<=n;i++){
	 	
	 	b[n-i]=a[i];
	 }
     
		for(i=0 ; i<=n ; i++){
		
		cout<<b[i]<<" ";
	}
	
	return 0 ;
}