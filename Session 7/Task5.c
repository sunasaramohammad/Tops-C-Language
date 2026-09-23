#include<stdio.h>

void main(){
    int row,i,j,s;
    printf("Enter the number of rows: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++){
        for(s=row-1;s>=i;s--){
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");

    }

}