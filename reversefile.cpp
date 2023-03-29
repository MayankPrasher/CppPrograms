#include<iostream>
#include<fstream>
using namespace std ;
int main(){
	
	string line ;
	string data ;
	ifstream file("newpeople.txt");
	
	while(getline(file,line)){
		
		data +=line+'\n';
	}
	
	for(int i = data.length()-1 ; i>=0 ; i--){
		
		cout<<data[i];
	}
	return 0 ;
}