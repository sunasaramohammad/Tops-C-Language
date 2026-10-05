#include <stdio.h>

void main()
{
    char items[30] = {"burger, pizza, fries"};
    int prices[3] = {120, 250, 90};
    int total = 0;
    int i;
    for(i=0;i<3;i++)
    {
        total += prices[i];
    }
    printf("Total price is %d",total);

}
// Assignment and loop variable issues
// Errors :
// 1) for (i = 0; i < items.length; i++)
// 2) for (i = 0; i < items; i++)
// 3) total =+ prices[i];
