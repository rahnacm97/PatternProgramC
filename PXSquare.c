#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the row size:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1||j==1||j==n|i==n||i==j||j==n-i+1){
            printf("* ");
        }
        else{
            printf("  ");
        } }
        printf("\n");
    }
    return 0;
}