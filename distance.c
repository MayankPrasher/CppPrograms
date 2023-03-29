#include<stdio.h>;
 
int main(){

    float dis;
    float meter;
    float feet;
    float inches;
    float cm;

    printf("Enter distance between cities in kilometer :");
    scanf("%f",dis);

    meter = dis*1000;
    feet = dis*3280.8399;
    inches = dis*39370.0787;
    cm = dis*100000;

    printf("distance in meter : %f\n",meter);
    printf("distance in feet : %f\n",feet);
    printf("distance in inches : %f\n",inches);
    printf("distance in centimeter : %f\n",cm);

    return 0;
}

