#include<iostream>
using namespace std ;

int main(){
	int partik[]={4,3,5,6,7,3,4,6,8,4,-3,3,5,7,3,7,2,5,6,8,3,5,6,7,7};
	int object,i,n;
	n = 25;
	int countpos = 0;
	int countneg = 0 ;
	int countodd = 0 ;
	int counteven = 0 ;
	
	
	for(i=0;i<n;i++){
		
		if(partik[i]>=0){
			
			countpos++;
		}
		else if(partik[i]<0){
			
			countneg++;
		}
		
		if(partik[i]%2==0){
			
			counteven++;
		}
		else{
			
			countodd++ ; 
		}
	}
	
 cout<<"No. of postive integers : "<<countpos<<endl;
 cout<<"No. of negative integers : "<<countneg<<endl;
 cout<<"No. of odd integers : "<<countodd<<endl;
 cout<<"No. of even integers : "<<counteven<<endl;
	
	return 0 ;
}