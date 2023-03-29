 
#include <iostream>
using namespace std;
int main() {
int arr[] = {12,35,1,10,34,1} ;
int i,j,temp ;
//int largest = arr[0];
  for(i = 0 ; i<5; i++){
   
   for(j=i+1; j<5 ; j++){
   	
   	if(arr[i]<arr[j]){
   		
   		temp = arr[j];
   		arr[j] = arr[i];
   		arr[i] = temp ;
	   }
   }
    }
    
    cout<<"Second largest no. in array is : " <<INT_MAX;
	  return 0;
  }

  