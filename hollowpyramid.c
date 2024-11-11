#include<stdio.h>
int main(){
    int i,j,rows,s;
    printf("Enter the no.of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(s=1;s<=rows-i;s++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1||i==rows){
           printf("*");
           }else{
            printf(" ");
           }
        }
        printf("\n");
    }
    return 0;
}