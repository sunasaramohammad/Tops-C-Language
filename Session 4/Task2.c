#include<stdio.h>
#include <stdbool.h>

void main(){

    float price,discount, finalPrice;  

    printf("Enter the Product Price: ");
    scanf("%f" , &price);

    printf("Enter the Product Discount: ");
    scanf("%f" , &discount);

    float discountAmount = price * discount / 100;
    printf("DiscountAmount %.2f \n" , discountAmount);

    finalPrice = price - discountAmount;
    printf("FinalAmount %.2f \n" , finalPrice);

    bool isMember;
    printf("Enter 1 if you are a member , enter 0 if you are not member:");
    scanf("%d" , &isMember);

    float extraDiscount =finalPrice * 5 / 100 * isMember;
    printf("extraDiscount %f \n" , extraDiscount);

    printf("FinalAmount after extraDiscount: %.f \n" , finalPrice - extraDiscount);

}