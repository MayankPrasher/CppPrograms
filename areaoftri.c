#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,s,area;

    printf("\nEnter the side 1 of Triangle :\n");
    scanf("%f",&a);
    printf("\nEnter the side 2 of Triangle :\n");
    scanf("%f",&b);
    printf("\nEnter the side 3 of Triangle ;\n");
    scanf("%f",&c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("\nArea of Triangle :%f",area);

    return 0 ;

}