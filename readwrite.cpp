#include<iostream>
#include<fstream>
using namespace std;

int main(){
	char data[50];
	ofstream writefile;
	writefile.open("file.txt");
	cout<<"Enter the content in the file:";
	cin.getline(data,30);
	writefile<<data;
	writefile.close();
	ifstream readfile;
	readfile.open("file.txt");
	char datafile;
	datafile=readfile.get();
	cout<<datafile;
	return 0 ;
}