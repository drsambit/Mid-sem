#include <stdio.h>
int main(){
    int l,h;
    printf("Enter lower limit:");
    scanf("%d",&l);
    printf("Enter upper limit:");
    scanf("%d",&h);
    if(l<0 && h<0){
        printf("Invalid Input.....Enter again first lower limit then upper limit:");
        scanf("%d %d",&l,&h);
    }
    for(int i=l;i<=h;i++){
        if(i<=0){
            continue;
        }
        int s=0;
        for(int f=1;f<i;f++){
            if(i%f==0){
                s=s+f;
            }
            
        }
        if (i==s){
            printf("%d is a perfect number\n",i);
        }

    }
    return 0;

}