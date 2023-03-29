#include<stdio.h>

int main(){

    float len,bre,area,peri;

    printf("\n Enter the length of the rectangle : ");
    scanf("%f",&len);

    printf("\n Enter the breadth of rectangle : ");
    scanf("%f",&bre);

    area = len*bre ;
    peri = 2 * (len + bre);

    printf("\n The area of the rectangle : %f",area);
    printf( " \n The perimeter of the rectangle : %f",peri);

    if(area < peri ){

        printf("\nPerimeter of rectangle is greater than Area ");
    }
    if( area > peri ){

        printf("\nArea of the rectangle is greater than Perimeter");
    }
    else{

        printf("\nArea and Perimeter both are equal");
    }
    return 0;
}