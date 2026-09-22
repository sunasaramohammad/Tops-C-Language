#include<stdio.h>

void main()
{
    int age ;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are eligible for Driving License\n");
    }
    else
    {
        printf("You are not eligible for Driving License\n");
    }

    if(age >= 21){
        printf("You are eligible for Credit Card\n");
    }
    else
    {
        printf("You are not eligible for Credit Card\n");
    }

    if(age >=25){
        printf("You are eligible for Car Rental\n");
    }
    else
    {
        printf("You are not eligible for Car Rental\n");
    }
}