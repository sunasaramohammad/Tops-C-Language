#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char song[100];
    char lowerSong[100];
    int i;

    fptr = fopen("playlist.txt", "r");

    if(fptr == NULL)
    {
        printf("File could not be opened.");
    }
    else
    {
        while(fgets(song, 100, fptr) != NULL)
        {
            // Convert song name to lowercase
            for(i = 0; song[i] != '\0'; i++)
            {
                lowerSong[i] = tolower(song[i]);
            }
            lowerSong[i] = '\0';

            // Check if "love" is present
            if(strstr(lowerSong, "love") != NULL)
            {
                printf("%s", song);
            }
        }

        fclose(fptr);
    }

}           