#include<iostream>
using namespace std;
template <class T>
void sort(T a[]){
	for(int i = 0 ; i<5 ; i++){
		for(int j = i+1 ; j<5 ;j++){
			if(a[i]<a[j]){
					T temp ;
			temp = a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		
		}
	}
	for(int i = 0 ; i<5 ; i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int arr[]= {2,3,8,1,5};
	float arr2[]={1.4,0.5,7.5,8.9,3.4};
	sort(arr);
	cout<<endl;
	sort(arr2);
	return 0 ;
}
