#include<stdio.h>

void main(){

    int likes=1000;
    int *ptrLikes=&likes;

    printf("Value of like %d\n",likes);
    printf("Address of Like %u\n" , &likes);
    printf("Address of ptrLikes %u\n" ,ptrLikes);
    printf("Like vale of PtrLikes %d\n",*ptrLikes);
}