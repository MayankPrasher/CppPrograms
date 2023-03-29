#include<stdio.h>

int main(){

    float ftemp;
    float ctemp;

    printf("Enter the temprature in fehrenhiet : ");
    scanf("%f",&ftemp);

    ctemp =(ftemp - 32)*5/9;

    printf("Temprature in celsius : %f",ctemp);
     return 0;
}