#include<stdio.h>
#include<string.h>

void main(){
    char username1[]="Virat";
    char username2[]="Virat";

    if(strcmp(username1,username2)== 0){
        printf("Same username");
    }
    else{
        printf("Username Diffrent");
    }
}