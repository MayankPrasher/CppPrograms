#include<stdio.h>

int main(){

    float x,y;

    printf("\nEnter the (x,y) Co - ordinates :");
    scanf("%f %f",&x,&y);

    if(x==0 && y==0){
        printf("\nPoints lies on the origin ");
    }
    if(x==0 && y!=0){
      printf("\nPoints on the y-axis");
    }
    if(x!=0 && y==0){

        printf("\nPoints on the x-axis");
    }
    if(x!=0 && y!=0){

        printf("\nPoints lies on the Plane");
    }
    return 0;
}