#include<stdio.h>

int main(){

    int num,a,b,c,d,e;

    printf("\nEnter the five digit no.:\n");
    scanf("%d",&num);

    e = num%10;
    d = (num/10)%10;
    c = (num/100)%10;
    b = (num/1000)%10;
    a = (num/10000);

    printf("The sum of 5 digits of the Number:%d",a+b+c+d+e);
    return 0;

}