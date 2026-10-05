#include<stdio.h>
#include<stdlib.h>

void main(){

    
    FILE *fptr;

    char data[50];

    fptr = fopen("playlist.txt", "r");
    

    if(fptr == NULL){
        printf("The file is not opened.");
    }
    else{
        printf("The file is now opened.\n");

        while (fgets(data, 50, fptr) != NULL)
        {

            // Print the data
            printf("%s", data);
        }
         fclose(fptr);
        
        
    }


}