#include<stdio.h>
//int fun1(int a){
//
//if(a>0){
//
//	printf("%d \n",a);
//		fun1(a-1);
//}
//
//}
int fun1(int a){

if(a>0){

    	fun1(a-1);
	printf("%d \n",a);
	
}

}
int main(){
	int x = 4;
	fun1(x);
	return 0;
}