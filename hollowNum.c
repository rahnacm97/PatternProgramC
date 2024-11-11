#include<stdio.h>
int main(){
    int i,j,lim;
    printf("Enter the row limit:");
    scanf("%d",&lim);
    for(i=1;i<=lim;i++){
        for(j=1;j<=i;j++){
            if(j==i||j==1||i==lim){
            printf("%d ",j);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}