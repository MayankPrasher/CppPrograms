//write a function power(a,b), to calculate the value of a raised to b
#include<stdio.h>
#include<math.h>
int power(int a , int b){
	int d;
	d = pow(a,b);
	return d;
}
int main(){
	int num ,pow,ans ;
	printf("Enter the Number : ");
	scanf("%d",&num);
	printf("Enter the Number for Power : ");
	scanf("%d",&pow);
	ans = power(num,pow);
	printf("answer is : %d",ans);
	return 0;
}