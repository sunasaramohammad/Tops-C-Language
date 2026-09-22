#include<stdio.h>

void main()
{
    int meal;
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("4. Snack\n");

    printf("Enter your meal choice (1-4): ");
    scanf("%d", &meal);

    switch(meal)
    {
        case 1:
            printf("Suggested Breakfast: Paratha with Chai");
            break;
        case 2:
            printf("Suggested Lunch: Dal-Rice with Sabzi");
            break;
        case 3:
           printf("Suggested Dinner: Paneer Tikka");
            break;
        case 4:
            printf("Suggested Snack: Samosa with Chutney");
            break;
        default:
           printf("Try some fruits!");
    }
}