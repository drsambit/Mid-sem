#include <stdio.h>
#include <math.h>
int main (){
    int r,h;
    printf("Enter the radius of the cylinder:");
    scanf("%d",&r);
    printf("Enter the height of the cylinder:");
    scanf("%d",&h);
    float v=3.14*r*r*h;
    float sa=2*3.14*r*h;
    printf("Volume of the cylinder is %0.2f",v);
    printf("\nThe surface area of the cylinder is %0.2f",sa);
    return 0;
}