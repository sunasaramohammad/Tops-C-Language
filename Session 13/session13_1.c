#include<stdio.h>
#include<stdlib.h>

void main(){

    
    FILE *fptr;

    fptr = fopen("playlist.txt", "w");
    

    if(fptr == NULL){
        printf("The file is not opened.");
    }
    else{
        
        printf("The file is now opened.\n");
        fputs("Scapegoat\n", fptr);
        fputs("Tum Hi Ho\n", fptr);
        fputs("Kesariya\n", fptr);

        
        fclose(fptr);
        printf("Data successfully written in file "
               "playlist.txt\n");
        printf("The file is now closed.");
    }


}