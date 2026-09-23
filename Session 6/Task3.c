#include<stdio.h>

void main() {
    int guess;

    do{
        printf("\n1. Kesariya\n");
        printf("2. Zinda Baad\n");
        printf("3. Tum Hi Ho\n");

        printf("Guess the song Number:");
        scanf("%d", &guess);

        if(guess ==3){
            printf("\nYou guessed correctly\n");
            break;
        }
        else{
            printf("\nYou guessed wrong\n");
        }

    }while(guess != 3);


}