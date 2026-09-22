#include<stdio.h>

void main()
{
    float amount , discount , final_price;
    printf("Enter the Cart Amount: ");
    scanf("%f", &amount);

    if(amount > 2000){
        discount = amount * 20 / 100;
        printf("Discount 20% : %.2f\n", discount);

        final_price = amount - discount;
        printf("Final Price: %.2f\n", final_price);
    }
    else
    {
        if(amount > 1000){
            discount = amount * 10 / 100;
            printf("Discount 10%: %.2f\n", discount);

            final_price = amount - discount;
            printf("Final Price: %.2f\n", final_price);
        }
        else
        {
            printf("No discount applicable.\n");
            printf("Final Price: %.2f\n", amount);
        }
    }
}