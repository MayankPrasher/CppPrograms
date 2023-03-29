#include<stdio.h>

int main(){

    float x1 , x2 , x3 , y1 ,y2 ,y3 ,m ,n ;

    printf("\n Enter (x1,y1) Co - ordinates :");
    scanf("%f %f",&x1,&y1);

    printf("\n Enter (x2,y2) Co - ordinates :");
    scanf("%f %f",&x2,&y2);

    printf("\n Enter (x3,y3) Co - ordinates :");
    scanf("%f %f",&x3,&y3);
    
    m = (y2 - y1 )/ (x2 - x1) ;
    n = (y3 - y2 )/ (x3 - x2) ;

    if(m == n){

        printf("\nAll points are on straight line !!!");
    }
    else{

        printf("\n Points are not in the straight line");
    }
    return 0;
    
}