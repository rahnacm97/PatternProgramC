#include<stdio.h>
int main(){
    int i,j,s,n,star,space;
    printf("Enter the no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        if(i<=n){
            star = (n - i)*2+1;
            space = i-1;
        }else{
            star = (i-n+1)*2-1;
            space = 2*n-i-1;
        }
        for(s=1;s<=space;s++){
            printf("  ");
        }
        for(j=1;j<=star;j++){
            if(i==1||i==2*n-1||j==1||j==star){
                printf("* ");
                }else{
                    printf("  ");
                }
            
        }
        printf("\n");
    }

    return 0;
}