#include<stdio.h>

int main(){

    int angle1,angle2,angle3,sum;

    printf("\nEnter Angle 1 of triangle :");
    scanf("%d",&angle1);

    printf("\nEnter Angle 2 of triangle :");
    scanf("%d",&angle2);
    
    printf("\nEnter Angle 3 of triangle :");
    scanf("%d",&angle3);

    sum = angle1 + angle2 + angle3;

    if(sum == 180 ){

        printf("Triangle is valid !!");
    }
    else{

        printf("Triangle is invalid .");
    }

    return 0;



}