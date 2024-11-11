#include<stdio.h>
int main(){
    int i,j,n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n;j++){
            if(j<=n+1-i){
                printf("%d ",j);
            }else if(j>=n+i){
                printf("%d ",2*n-j+1);
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}