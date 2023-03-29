//a program that uses a while loop to calculate simple interest for 3 sets of values of principal , number of years and rate of interest.
#include<stdio.h>
int main(){
	int n , count ,p ;
float r ,si ;
count = 1;

while(count<=3)
{
	printf("\nEnter the principal amount : ");
	scanf("%d",&p);
	
	printf("\nEnter the no. of years : ");
	scanf("%d",&n);
	
	printf("\nEnter the rate of interest : ");
	scanf("%f",&r);
	
	si = p*n*r/100 ;
	printf("\nThe Simple interest of given data is: ");
	printf("%f",si);
	 count = count + 1 ;
}
return 0 ;
}
