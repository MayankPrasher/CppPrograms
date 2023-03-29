#include<stdio.h>

int main(){

    float l;
    float b;
    float r;
    float rectArea;
    float rectPeri;
    float cirArea;
    float cirCum;

    printf("Enter the length of rectangle : ");
    scanf("%f\n",&l);
    printf("Enter the breadth of rectangle : ");
    scanf("%f\n",&b);
    printf("Enter the radius of circle :");
    scanf("%f\n",&r);

    rectArea = l*b;
    rectPeri = 2*(l+b);
    cirArea = 3.14*r*r;
    cirCum = 2*3.14*r;

    printf("The Area of the Rectangle : %f\n",rectArea);
    printf("The Area of the Circle : %f\n",cirArea);
    printf("The Perimeter of the Rectangle : %f\n",rectPeri);
    printf("The Circumfrance of circle is : %f\n",cirCum);

    return 0; 
}