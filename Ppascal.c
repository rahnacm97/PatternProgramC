#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter row size:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int coef =1;
        for(j=1;j<=i;j++){
            printf("%d ",coef);
            coef = coef * (i-j)/j;
        }
        printf("\n");
    }

    return 0;
}