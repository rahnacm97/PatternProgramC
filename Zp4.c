#include<stdio.h>
int main(){
    int i,j,rows;
    printf("Enter the no.of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows;j++){
           if(j==rows-i+1||i==rows||i==1){
            printf("*");
           }else{
            printf(" ");
           }
        }
        printf("\n");
    }
    return 0;
}