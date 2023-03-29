#include<stdio.h>

int main(){
    int c,d;

    printf("\nEnter two numbers :");
    scanf("%d",&c);
    scanf("%d",&d);
    printf("C contains %d and D contains %d before interchanging",c,d);

    c = c+d;
    d = c-d;
    c = c-d;

    printf("After interchanging D contains %d and C contains %d",d,c);
    return 0;
}