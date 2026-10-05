#include <stdio.h>
#include <string.h>

void addToCart(char shoppingcart[][30], int *count, char product[])
{
    strcpy(shoppingcart[*count], product);
    *count = *count + 1;

    printf("Updated Cart:\n");
    printf("--------------\n");

    for(int i = 0; i < *count; i++)
    {
        printf("%s\n", shoppingcart[i]);
    }
    
    
    printf("--------------\n");
}

void main()
{
    char shoppingcart[10][30] = {"Pizza", "Burger"};
    int count = 2;

    printf("Current Cart:\n");
    printf("--------------\n");
    for(int i = 0; i < count; i++)
    {
        printf("%s\n", shoppingcart[i]);
    }
    printf("--------------\n\n");

    addToCart(shoppingcart, &count, "Juice");

}