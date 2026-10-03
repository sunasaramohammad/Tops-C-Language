#include<stdio.h>

void swapPlaylistCounts(int *a , int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void main(){

    int playlist1 = 10;
    int playlist2 = 20;

    printf("Before swap: %d %d\n", playlist1, playlist2);

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("After swap: %d %d\n", playlist1, playlist2);

}