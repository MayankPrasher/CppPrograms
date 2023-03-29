#include<stdio.h>

int main(){

    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;
    float sum;
    float per;

    printf("Enter the marks out of 100 :\n");
    printf("Subject 1:");
    scanf("%f\n",&sub1);
    printf("Subject 2:");
    scanf("%f\n",&sub2);
    printf("Subject 3:");
    scanf("%f\n",&sub3);
    printf("Subject 4:");
    scanf("%f\n",&sub4);
    printf("Subject 5:");
    scanf("%f\n",&sub5);
    sum = sub1+sub2+sub3+sub4+sub5;
    per = (sum/500)*100;

    printf("Total marks : %f out of 500\n",sum);
    printf("Percentage obtained : %f\n",per);

    return 0;

}