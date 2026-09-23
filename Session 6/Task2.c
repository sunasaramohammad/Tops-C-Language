#include<stdio.h>

void main() {

   int choice;
   char newTeam[10];

   while(1){
    printf("\n1. View Favorite Teams\n");
    printf("2. Add New Team\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1){
        printf("\nYour Favorit Team\n");
        printf("1. RCB\n");
        printf("2. CSK\n");
        printf("3. GT\n");
    }
    else if(choice == 2){
        printf("\nEnter the name of the new team: ");
        scanf("%s", newTeam);
        printf("New team added Successfully: %s\n", newTeam);
    }
    else if(choice == 3){
        printf("Exiting the program.\n");
        break;
    }
    else{
        printf("Invalid choice. Please try again.\n");
    }
   }
}