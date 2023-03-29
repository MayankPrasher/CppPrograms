#include<stdio.h>

int main(){

    int amt,num,n100,n50,n10,n5,n2,n1;
    
    printf("\nEnter the amount : ");
    scanf("%d",&amt);
    num = amt;

    // Note 100
    n100 = num/100;
    num = num%100;
    // Note 50 
    n50 = num/50;
    num = num%50;
    // Note 10
    n10 = num/10;
    num = num%10;
    // Note 5
    n5 = num/5;
    num = num%5;
    // Note 2
    n2 = num/2;
    num = num%2;
    // Note 1
    n1 = num/1;
    num = num%1;

    printf("\nAmount of %d should  back by :",amt);
    printf("\ngive %d notes of Rs.100",n100);
    printf("\ngive %d notes of Rs.50",n50);
    printf("\ngive %d notes of Rs.10",n10);
    printf("\ngive %d notes of Rs.5",n5);
    printf("\ngive %d notes of Rs.2",n2);
    printf("\ngive %d notes of Rs.1",n1);
     
     return 0;
}