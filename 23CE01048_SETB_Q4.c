#include <stdio.h>
int main (){
    int n,s=0,flag=0;
    printf("Enter a number");
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        for (int j=i+1;j<n;j++){
            s=i+j;
            if(s==n){
                int ci=0,cj=0;
                for (int k=1;k<=j;k++){
                    if (i%k==0){
                        ci++;
                    }
                    if (j%k==0){
                        cj++;
                    }
                }
                if(ci>2 && cj>2){
                    printf("%d  %d\n",i,j);
                    flag=1;
                }
                
            }
        }
    }
    if (flag==0){
        printf("No such composite pair available");
    }
    return 0;

}