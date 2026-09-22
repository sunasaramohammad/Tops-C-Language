#include<stdio.h>
#include<stdbool.h>
void main(){
    int age ,order,result;

    printf("Enter your age: ");
    scanf("%d" , &age);

    printf("Enter your order: ");
    scanf("%d" , &order);

    result=age >= 18 && order > 500;
    printf("Result: %d" , result);  

}