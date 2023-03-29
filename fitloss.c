#include<stdio.h>

int main(){

    float cp,sp,profit,loss;

    printf("\nEnter the cost price :\n");
    scanf("%f",&cp);
    printf("\nEnter the selling price :");
    scanf("%f",&sp); 

    if(sp>cp){

        printf("\nYAY! U get Profit");
        profit = sp - cp;
        printf("\nProfit of : Rs.%f",profit);
    }
    if(cp>sp){

        printf("\nooh! u are in loss");
        loss = cp - sp ;
        printf("\n Loss of : Rs.%f",loss);
    }
    if(cp == sp){

        printf("\nU got not profit nor loss");
    }
    return 0;
}