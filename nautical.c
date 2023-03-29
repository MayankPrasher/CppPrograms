#include<stdio.h>
#include<math.h>

int main(){

    float l1,l2,g1,g2,d;

    printf("\nInsert the latitude co-ordinates(L1,L2):");
    scanf("%f %f",&l1,&l2);

    printf("\nInsert the longitude co-ordinates(G1,G2):");
    scanf("%f %f",&g1,&g2);

    d = 3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("Distance between points in Nautical miles is : %f",d);

    return 0;
}