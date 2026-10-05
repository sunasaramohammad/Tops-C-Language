#include <stdio.h>

void main() {
    int musicMinutes[7];
    int i ,total =0 , avg ,max;

    // Enter and store data in array
    for (i = 0; i < 7; i++) {
        printf("Enter minutes for day %d: ", i + 1);
        scanf("%d", &musicMinutes[i]);
    }

    // Open file
    FILE *fptr = fopen("music_log.txt", "w");

    // Save array data to file
    max=musicMinutes[0];
    for (i = 0; i < 7; i++) {
        fprintf(fptr, "Day %d: %d minutes\n", i + 1, musicMinutes[i]);
        total=total + musicMinutes[i];
        if(musicMinutes[i] > max){
        max = musicMinutes[i];
        } 
    }
    avg=total / 7;
    fprintf(fptr,"Average minutes of music in a week is : %d\n",avg);
    fprintf(fptr,"Maximum minutes: %d\n", max);
    fclose(fptr);


    //read file
    fptr = fopen("music_log.txt", "r");

    if (fptr == NULL) {
        printf("File could not be opened.\n");
    }

    printf("\nWeekly Report:\n");

    char line[100];

    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }

    
    // Close file
    fclose(fptr);

    printf("Data saved successfully.");

}