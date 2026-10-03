#include<stdio.h>
#include<string.h>

struct FoodItem {
    char name[30];
    float price;
    float rating;
};
struct FoodItem food[3];

void main(){
   int i;

   strcpy(food[0].name , "Pizza");
   food[0].price = 299.00;
   food[0].rating = 4.5;

   strcpy(food[1].name , "Burger");
   food[1].price = 149.00;
   food[1].rating = 4.0;

   strcpy(food[2].name , "Pasta");
   food[2].price = 199.00;
   food[2].rating = 4.2;

   for(i=0; i<3; i++){
        printf("Food Item: %s \n", food[i].name);
        printf("Price: %.2f \n", food[i].price);
        printf("Rating: %.1f stars \n\n", food[i].rating);
    }
}