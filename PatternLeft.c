#include<stdio.h>
int main(){
    int i,j,n=6;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}