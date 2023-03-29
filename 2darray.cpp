#include<iostream>
#include<stdlib.h>

using namespace std ;

int main(){
	
	int a[3][4] = {{1,2,3,4},{2,4,5,6},{6,7,6,3}};
	int *b[3] ;
	int **c;
	b[0] = new int[4];
	b[1] = new int[4];
	b[2] = new int[4];
	
	c = new int*[3];
	c[0]= new int[4];
	c[1]= new int[4];
	c[2]= new int[4];
	int i , j ;
		for(i=0;i<3;i++){
	   
	   for(j=0;j<4;j++){
	   	
	   	cout<<c[i][j]<<" ";
	   }
	   cout<<endl;
	}
	

	
	return 0 ;
}