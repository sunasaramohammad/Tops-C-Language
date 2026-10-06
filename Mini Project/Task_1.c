#include<stdio.h>

void main() {
    int musicMinutes[7];
    int i;

    for(i=0;i<7;i++){
        printf("Enter the number of minutes for day %d: ", i+1);
        scanf("%d", &musicMinutes[i]);


    }
    
    for(i=0;i<7;i++){
        printf("Day %d: %d minutes\n", i+1, musicMinutes[i]);
    }
}