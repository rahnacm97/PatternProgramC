#include<stdio.h>
int main(){
    int i,j,n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n+3;j++){
            if(i==n||j<=i*2-1||j>=(n*3)-(2*i-1)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}