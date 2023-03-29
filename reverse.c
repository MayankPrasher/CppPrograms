#include <stdio.h>

int main(){

    int num,a,b,c,d,e,rev;
    printf("\nEnter the 5 digit no.:\n");
    scanf("%d",&num);

    e = num%10;
    d = (num/10)%10;
    c = (num/100)%10;
    b = (num/1000)%10;
    a = (num/10000);
    rev = e*10000+d*1000+c*100+b*10+a;

    printf("\n The reversed no. :%d",rev);
    return 0;
}