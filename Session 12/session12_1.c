#include<stdio.h>
#include<string.h>

struct Playlist {
    char title[30];
    char artist[20];
    int duration;
};

void main(){

    struct Playlist  s1;
    strcpy(s1.title , "Scapegoat");
    strcpy(s1.artist , "Sidhu moose wala");
    s1.duration=293;

    printf("My favorite song's Title %s \n", s1.title);
    printf("Artist: %s \n", s1.artist);
    printf("Duration: %d seconds \n", s1.duration);

}