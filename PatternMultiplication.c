#include<stdio.h>
int main(){
    int i,j,n=9;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j==1){
                printf("%d ",i);
            }
            else if(j%2==0){
                printf("* ");}
            else{
                printf("%d ",j*i);
            }
        }
        printf("\n");
    }
    return 0;
}