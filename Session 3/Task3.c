//Write a program that stores your favorite Spotify playlist's name (string), total number of songs (int)
//and average song duration in minutes (float). Print all values in a single formatted sentence.

#include<stdio.h>

void main(){

    char playlistName[]="Sidhu Moose Wala Hits";
    int totalSong=30;
    float avgDuration=3.8;
    
    
    printf("My favorite playlist is: %s, it has %i Songs, and the average song duration is %.1f minutes.",
    playlistName, totalSong, avgDuration);
}