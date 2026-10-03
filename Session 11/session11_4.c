#include<stdio.h>

    void incrementFollowers(int *followers , int n){
    int i;

    for(i=0;i<n;i++){
        printf("Followers of user Before followers 100 increment %d: %d\n", i, *(followers+i));
        *(followers+i) = *(followers+i) + 100;
         printf("Followers of user After  followers 100 increment %d: %d\n", i, followers[i]);
        printf("\n");
    }

}

void  main(){
    int followers[]={1000,2400,2550,990,2000};
    
    incrementFollowers(followers,5);

}