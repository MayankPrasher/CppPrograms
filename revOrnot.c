#include<stdio.h>
// #include<string.h>

int main(){
    
    int num,test,rev,a,b,c,d,e,len,safe;

    printf("Enter the 5 digit No. :");
    scanf("%d",&num);
    safe = num;
    len = 0;
    while(num!=0){
     num = num/10;
     len++ ;

    }

    if(len!=5){
        printf("Ek baari mai samjh nahi aati :) ? \n ENTER THE 5 DIGIT NO. !!!");
    }
    else{
        test = safe;

    e=test%10;
    d=(test/10)%10;
    c=(test/100)%10;
    b=(test/1000)%10;
    a=(test/10000);
    rev = e*10000 + d*1000 + c*100 + b*10 + a;

    printf("The reversed no. is : %d",rev);

    if(rev == safe){

        printf("\nWoho!! reversed no. is same as original No.");
    }
    }
    
    return 0;



}