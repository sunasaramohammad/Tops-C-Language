#include<stdio.h>

void main() {
    int choice = 0;
    int musicMinutes[7];

    while(choice != 3) {
        printf("Menu:\n");
        printf("1. Enter music minutes for the week\n");
        printf("2. Display music minutes for the week\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

       if(choice == 1){
            int i;

            for(i=0;i<7;i++){
                printf("Enter the number of minutes for day %d: ", i+1);
                scanf("%d", &musicMinutes[i]);
            }
        }
         else if(choice == 2) {
            int i;

            for(i=0;i<7;i++){
                printf("Day %d: %d minutes\n", i+1, musicMinutes[i]);
            }
        }
        else if(choice == 3) {
            printf("Exiting the program.\n");
        }
         else {
            printf("Invalid choice. Please try again.\n");
        }
    }
}