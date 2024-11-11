#include<stdio.h>
int main(){
    int i,j,s,row;
    printf("Enter the row size:");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(s=0;s<i;s++){
          printf(" ");
            //printf("* ");
        }
        int comp;
        comp = (2*row)-(2*i)-1;
        for(j=0;j<comp;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }

    return 0;
}