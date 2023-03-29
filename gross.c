#include<stdio.h>

int main(){

    float salary;
    float da;
    float rent;
    float gross;

    printf("Enter salary : \n");
    scanf("%f",&salary);
    da = salary*0.4;
    rent = salary*0.2;
    gross = salary + da + rent;

    printf("the Gross salary : %f\n",gross);
    return 0;
}