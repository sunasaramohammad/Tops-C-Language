#include<stdio.h>

void main() {
    int choice = 0;
    int min[7];

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
                scanf("%d", &min[i]);
            }
        }
         else if(choice == 2) {
            int i;

            printf("View Weekly Summery\n");
            for(i=0;i<7;i++){
                printf("Day %d: %d minutes\n", i+1, min[i]);
            }
        }
        else if(choice == 3) {
            printf("Thanks for using app.");

        }
         else {
            printf("Invalid choice. Please try again.\n");
        }
    }
}