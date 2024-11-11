#include<stdio.h>
int main(){
    int i,j,s,num;
    printf("Enter the num:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=num-i+1;j++){
            printf("*");
        }
        for(s=1;s<2*i;s++);
        {printf(" ");}
         printf("\n");
    }
    for(i=num;i>=1;i--){
        for(j=1;j<=num-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}