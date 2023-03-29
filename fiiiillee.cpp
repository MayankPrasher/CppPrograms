#include<iostream>
#include<fstream>
using namespace std;

class person{
	
	public:
		string name;
		int age;
	person(){
	}
	person(string n , int x) : name(n), age(x){
	}
};
int main(){
	
	person people[] = {
	person("Mayank",20),
	person("Ankit",19),
	person("Nishant",19)
	};
	ofstream writefile;
	ifstream readfile;
	
	writefile.open("newpeople.txt");
	for(int i=0 ;i<3;i++){
		writefile << people[i].name << " "<<people[i].age<<endl;
	}
	writefile.close();
	readfile.open("newpeople.txt");
	person filedata[3];
	for(int i = 0 ; i<3;i++){
		readfile>>filedata[i].name>>filedata[i].age;
	}
	readfile.close();
	for(int i = 0 ; i<3 ; i++){
		
		cout<<filedata[i].name << " "<<filedata[i].age << endl;
	}
	return 0 ;
}