//A year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and || .
//logic : year%4 == 0 or year%100 == 0 or year%400 == 0
#include<stdio.h>
int main(){
	 int year;
	 int leap ;
	 printf("\nEnter the year : ");
	 scanf("%d",&year);
	 if(year%4==0 || year%100==0 || year%400==0){
	 	printf("it is a leap year !");
	 }
	 else{
	 	printf("it is not a leap year");
	 }
	return 0;
}