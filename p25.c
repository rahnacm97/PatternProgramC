#include<stdio.h>
int main(){
    int i,j,s,n,star,space;
    printf("Enter the no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j<=i||j>=2*n-i){
                printf("* ");
            }else{
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j<n+1-i||j>=n+i){
                printf("* ");
            }else{
                printf("%c ",64+j);
            }
        }
        printf("\n");
    }
return 0;
}