#include<iostream>
using namespace std;

int secondlargest(int arr[],int n){
     int i , j , first , second;
	 if(n<2){
	 	
	 	return -1 ;
	 }	
	 first = second = INT_MIN;
	 
	 for(i=0 ; i<=n ; i++){
	 	
	 	if(arr[i]>first){
	 		second = first ;
	 		first = arr[i] ;
		 }
	   else if(arr[i]>second && arr[i]!=first){
	   	       
	   	       second = arr[i];
	   }
}
	   if(second == INT_MIN){
	   	return -1 ;
	   }
	   else{
	   	
	   	return second ;
	   }
	 
}

int main(){
	int result ;
	int arr[] = {3,7,4,9,2,1};
	int n = 5 ;
	result = secondlargest(arr,n);
	cout<<result;
	return 0 ;
}