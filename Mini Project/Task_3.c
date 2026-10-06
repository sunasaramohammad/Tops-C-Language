#include <stdio.h>

void main() {
    int musicMinutes[7];
    int i;

    // Enter and store data in array
    for (i = 0; i < 7; i++) {
        printf("Enter minutes for day %d: ", i + 1);
        scanf("%d", &musicMinutes[i]);
    }

    // Open file
    FILE *fptr = fopen("music_log.txt", "w");

    // Save array data to file
    for (i = 0; i < 7; i++) {
        fprintf(fptr, "Day %d: %d minutes\n", i + 1, musicMinutes[i]);
    }

    // Close file
    fclose(fptr);

    printf("Data saved successfully.");

}