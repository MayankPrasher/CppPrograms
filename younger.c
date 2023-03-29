#include<stdio.h>

int main() {

    int ageA , ageS , ageR;

    printf("\nenter the age of Shyam : ");
    scanf("%d",&ageS);
    printf("\nenter the age of Ajay :");
    scanf("%d",&ageA);
    printf("\nenter the age of Rohan :");
    scanf("%d",&ageR);

    if(ageA<ageS && ageA < ageR){

        printf("\nAjay is the younger then both");
    }
    if(ageS<ageA && ageS<ageR){

        printf("\nShyam is the younger then both");
    }
    if(ageR<ageA && ageR<ageS){
        printf("\nRohan is the younger then both");
    }
    return 0;
}