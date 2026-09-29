#include<stdio.h>

void main(){
    int playlistRatings[3][5] = {
    {4, 5, 3, 4, 5},
    {5, 4, 5, 3, 4},
    {3, 4, 4, 5, 3}
    };

    int index;
    for(index=0;index<=4;index++){

       printf("PlaylistRating 2 :%d\n", playlistRatings[1][index]);
     
    }
}