#include<stdio.h>
int main(){
    int i,j,s,row;
    printf("Enter the rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(s=1;s<i;s++){
            printf("  ");
        }
        for(j=0;j<=row-i;j++){
        printf("* ");}
        printf("\n");
    }
    for(i=2;i<=row;i++){
        for(s=1;s<=row-i;s++){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
        }
    return 0;
}