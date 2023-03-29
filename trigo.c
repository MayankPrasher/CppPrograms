#include<stdio.h>
#include<math.h>

int main(){

    float angle , Sina, Cosa, Tana, Seca, Coseca, Cota;

    printf("\nEnter the Angle :");
    scanf("%f",&angle);

    Sina = sin(angle);
    Cosa = cos(angle);
    Tana =  Sina/Cosa;
    Coseca = 1/Sina;
    Seca = 1/Cosa;
    Cota = 1/Tana;

    printf("\nAngle in then trignometric ratios :");
    printf("\nSin A :%f",Sina);
    printf("\nCos A :%f",Cosa);
    printf("\nTan A :%f",Tana);
    printf("\nCosec A :%f",Coseca);
    printf("\nSec A :%f",Seca);
    printf("\nCot A :%f",Cota);

    return 0;
}