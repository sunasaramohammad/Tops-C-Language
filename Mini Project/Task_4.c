#include <stdio.h>

void main() {
    int min[7];
    int i ,total =0  ,max;
    float avg;


    // Enter and store data in array
    for (i = 0; i < 7; i++) {
        printf("Enter minutes for day %d: ", i + 1);
        scanf("%d", &min[i]);
    }

    // Open file            
    FILE *file = fopen("music_log.txt", "w");

    // Save array data to file
    max=min[0];
    for (i = 0; i < 7; i++) {
        fprintf(file, "Day %d: %d minutes\n", i + 1, min[i]);
        total=total + min[i];
        if(min[i] > max){
        max = min[i];
        } 
    }
    avg=(float)total / 7;
    fprintf(file,"Average minutes of music in a week is : %.2f\n",avg);
    fprintf(file,"Maximum minutes: %d\n", max);
    fclose(file);


    //read file
    file = fopen("music_log.txt", "r");

    if (file == NULL) {
        printf("File could not be opened.\n");
    }

    printf("\nWeekly Report:\n");

    char line[100];

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    
    // Close file
    fclose(file);

    printf("Data saved successfully.");

}