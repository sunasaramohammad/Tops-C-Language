//Declare variables for a Flipkart product: productName (as a string)
//price (float), and rating (double). Assign sample values and print each variable with its data type.

#include<stdio.h>

void main(){

    char productName[] = "Samsung Galaxy M35 5G";
    float price=18999.50;
    double rating=4.5;

    printf("ProductName: %s \n" , productName);
    printf("Price: %.2f \n" , price);
    printf("Rating: %.2lf \n", rating);
  
}