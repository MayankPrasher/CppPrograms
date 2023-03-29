#include<stdio.h>
#include<math.h>

int main(){

    float x,y,r,theta;
    printf("\nEnter the x and y co-ordinates :");
    scanf("%f %f",&x,&y);

    r = sqrt(x*x + y*y);
    theta = atan(y/x);

    printf("The polar co-ordinates are : %.2f(cos %.2f)+ i(sin %.2f)",r,theta,theta);

    return 0;
}