#include<stdio.h>
int main(){
    int i,j,s,n,star,space;
    printf("Enter the no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        if(i<=n){
            star = i;
        }else{
            star = 2*n-i;
        }
        for(j=1;j<=star;j++){
            if(j==1||j==star)
            {
                printf("* ");
            }else{
                printf("  ");
            }
            
        }

        printf("\n");
    }
    return 0;
}