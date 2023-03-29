#include<iostream>
using namespace std ;

class Car {
	
	public :
		string brand;
		string color ;
		string model ;
		int year ;
};

int main(){
	
	Car car1;
	
	car1.brand = "BMW";
	car1.color = "Black";
	car1.model = "XS";
	car1.year = 2020;
	
	Car car2 ;
	
	car2.brand = "Maruti" ;
	car2.color = "Red" ;
	car2.model = "Alto" ;
	car2.year = 2018 ;
	
	cout<<car1.brand<<" "<<car1.color<<" "<<car1.model<<" "<<car1.year<<endl;
	cout<<car2.brand<<" "<<car2.color<<" "<<car2.model<<" "<<car2.year<<endl;
    return 0 ;
}