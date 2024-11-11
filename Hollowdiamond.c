#include<stdio.h>
int main(){
    int i,j,s,n,star,space;
    printf("Enter the no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        if(i<=n){
            star = 2*i-1;
            space = n-i;
        }else{
            star = (2*n-i+1)*2-3;
            space = i-n;
        }
        for(s=1;s<=space;s++){
            printf("  ");
        }
        for(j=1;j<=star;j++){
            if(j==1||j==star){
                printf("* ");
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
    }

    return 0;
}