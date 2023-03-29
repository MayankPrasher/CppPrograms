#include<iostream>
using namespace std; 

int main(){
	
	int arr[]={2,5,7,8,42,9,10};
	int even , odd , temp,size,i;
	size = sizeof(arr)/sizeof(arr[0]);
	
	for(even=0;even<size;even+=2){
		for(odd=1;odd<size;odd+=2){
			
			temp = arr[even];
			arr[even] = arr[odd];
			arr[odd] = temp ;
		}
	}
	
	for(i=0 ; i<size ; i++){
		
		cout<<arr[i]<<" ";
	}
	
	return 0 ;
}