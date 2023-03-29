#include<stdio.h>

int main(){

    int year,firstDay,leapDays;
    long int normalDays,totalDays;

    printf("Enter the year:");
    scanf("%d",&year);

    normalDays = (year-1)*365;
    leapDays = (year-1)/4 - (year-1)/100 + (year-1)/400 ;
    totalDays = normalDays + leapDays ;
    firstDay = totalDays%7 ;

    if(firstDay == 0){

        printf("First day of %d is : Monday",year);
    }
    if(firstDay == 1){

        printf("First day of %d is : Tuesday",year);
    }
    if(firstDay == 2){

        printf("First day of %d is : Wednesday",year);
    }
    if(firstDay == 3){

        printf("First day of %d is : Thrusday",year);
    }
    if(firstDay == 4){

        printf("First day of %d is : Friday",year);
    }
    if(firstDay == 5){

        printf("First day of %d is : Saturday",year);
    }
    if(firstDay == 6){

        printf("First day of %d is : Sunday",year);
    }

    return 0;
}