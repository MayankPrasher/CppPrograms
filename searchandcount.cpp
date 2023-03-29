#include<iostream>
using namespace std;

int main(){
	
	int partik[]={4,3,5,6,7,3,4,6,8,4,3,3,5,7,3,7,2,5,6,8,3,5,6,7,7};
	int object,i,n;
	n = 25;
	int count = 0 ;
	
	
	cout<<"Enter the number that u have to find in:";
	cin>>object;
	
	for(i=0;i<n;i++){
		
		if(partik[i]==object){
			
			count++;
		}
	}
	
	if(count==0){
		
		cout<<"No. is not in array";
	}
	else{
		
		cout<<"No. of times input found in array:"<<count;
	}
	
	return 0 ;
}