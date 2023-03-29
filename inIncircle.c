//Give the co - ordinates (x,y) of center of a circle and its radius, write a program
// that will determine whether a point lies inside the circle , on the circle or outside
//the circle. 
#include<stdio.h>
#include<math.h>

int main(){

    float x , y, r ,dis ;

    printf("\nEnter the radius of the circle :");
    scanf("%f",&r);

    printf("\nEnter the x - y coordinate of the point for checking it's postion : ");
    scanf("%f %f",&x,&y);
    dis = sqrt(pow(x,2) + pow(y,2));

    if(r>dis){

        printf("\npoint is inside the circle !! ");
    }
    else if(r == dis){

        printf("\npoint lie on the circle !! ");
    }
    else{

        printf("\npoint lie outside the circle !!");
    }

    return 0 ;

}