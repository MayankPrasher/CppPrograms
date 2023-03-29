#include<iostream>
using namespace std;

void valuequal(int arr[],int n){
	int i,result ;
	int flag = 0 ;
	
	for(i=0;i<=n; i++){
		
		if(arr[i]==i+1){
		    
			flag++;	
			result = arr[i];
		}
	}
	
	if(flag==0){
		
		cout<<"NO";
	}
	else{
		
		cout<<result ;
	}
	
}

int main(){
	
	int arr[] = {8,2,6,3};
	int n = 4;
	valuequal(arr,n);
	return 0 ;
	
}