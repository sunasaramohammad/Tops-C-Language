#include<stdio.h>

void main(){
    int zomatoOrder[]={257,456,786,954,874};
    int *ptrOrder=zomatoOrder;
    int i;

    for(i=0;i<5;i++){

        printf("value of order %d: %d\n", i+1, zomatoOrder[i]);
        printf("address of Zomato Order: %u\n",&zomatoOrder[i]);
        printf("address of ptrOrder using pointer: %u\n",ptrOrder+i);
        printf("\n");
    }
}