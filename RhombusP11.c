#include<stdio.h>
int main(){
    int i,j,s,row=5;
    for(i=1;i<=row;i++){
        for(s=1;s<=i-1;s++){
            printf("  ");
        }
        for(j=1;j<=row;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}