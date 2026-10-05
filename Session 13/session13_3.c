#include<stdio.h>
#include<stdlib.h>

void main(){

    
    FILE *fptr;

    fptr = fopen("playlist.txt", "a");
    

    if(fptr == NULL){
        printf("The file is not opened.");
    }
    else{
        
        printf("The file is now opened.\n");
        fputs("Love Dose \n", fptr);
        fputs("Love Me Thoda Aur \n", fptr);

        
        fclose(fptr);
        printf("Data successfully written in file "
               "playlist.txt\n");
        printf("The file is now closed.");
    }


}