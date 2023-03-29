#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char data[50] ;
	ofstream writeline;
	writeline.open("fisrtfile.txt");
	cout<<"Enter the content that u have to write :";
	cin.getline(data,30);
	writeline<<data;
	writeline.close();
    ifstream readline;
    readline.open("fisrtfile.txt");
    ofstream writeline2;
    writeline2.open("second.txt");
    char copy;
    copy = readline.get();
    while(!readline.eof()){
    	writeline2<<copy;
    	copy = readline.get();
    	
	}
	writeline2.close();
	readline.close();
    
}