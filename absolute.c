#include<stdio.h>

int main(){

    int mod ,result;

    printf("\nEnter the Integer expression :");
    scanf("%d",&mod);

    if(mod<0){

        result = mod*(-1);
    }
    else{

        result = mod ;
    }

    printf("\nThe absolute value of expression %d : %d ",mod,result);

    return 0;

}