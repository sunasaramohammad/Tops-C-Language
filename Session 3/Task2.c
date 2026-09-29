#include<stdio.h>

void main(){

    const float GST=18;
    float price;
    float tax;
    float total;

    printf("Enter your Food Amount:");
    scanf("%f" , &price);

    tax= price*GST/100;
    printf("GST Amount %.4f \n", tax);

    total=price + tax;
    printf("Total Amount %.4f \n", total);

  
}