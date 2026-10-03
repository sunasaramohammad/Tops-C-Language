#include<stdio.h>
#include<string.h>

struct Time{
    int hour;
    int minute;
};

struct movieShow {
    char name[50];
    int screenNumber;
    struct Time time;
};

void main(){

    struct movieShow s1;

    strcpy(s1.name , "Mirzapur");
    s1.screenNumber = 5;
    s1.time.hour = 3;
    s1.time.minute = 17;

    printf("Movie Name: %s \n", s1.name);
    printf("Screen Number: %d \n", s1.screenNumber);
    printf("Show Time: %02d:%02d \n", s1.time.hour, s1.time.minute);

    

}