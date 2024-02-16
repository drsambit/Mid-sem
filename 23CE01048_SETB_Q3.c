#include <stdio.h>
int main (){
    int x,y;
    int x1,y1;
    int r;
    printf("Enter the coordinates of the centre of the circle:");
    scanf("%d %d",&x,&y);
    printf("Enter the coordinates of the point:");
    scanf("%d %d",&x1,&y1);
    printf("Enter the radius of the circle:");
    scanf("%d",&r);
    int d=(x1-x)*(x1-x)+(y1-y)*(y1-y);
    int R=r*r;
    if(d==R){
        printf("Point (%d,%d) lies on the circle",x1,y1);
    }
    else if(d<R){
        printf("Point (%d,%d) lies inside the circle",x1,y1);
    }
    else{
        printf("Point (%d,%d) lies outside the circle",x1,y1);
    }
    return 0;
}