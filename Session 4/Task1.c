#include<stdio.h>

void main(){
    float itemPrice , quantity , total;

    printf("Enter the ItemPrice: ");
    scanf("%f" , &itemPrice);

    printf("Enter the Quantity: ");
    scanf("%f" , &quantity);

    total= itemPrice * quantity;

    printf("Total Bill Amount:%.2f", total);

}