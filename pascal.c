#include<stdio.h>
int main(){
    int i,j,lim,s;
    
    printf("enter the lim:");
    scanf("%d",&lim);
    for(i=0;i<=lim;i++){
        for(s=1;s<=lim-i;s++){
            printf(" ");
        }
        int coef = 1;
        for(j=1;j<=i;j++){
            printf("%d ",coef);
            coef = coef * (i-j)/j;
        }
        printf("\n");
    }

    return 0;
}