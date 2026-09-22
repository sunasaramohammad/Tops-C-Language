#include<stdio.h>

void main()
{
    printf("1.RCB\t2.CSK\t3.MI\t4.GT");
    int num;
    printf("\nEnter your favourite team number: ");
    scanf("%d",&num);

    if(num==1)
    {
        printf("E Sala Cup Namde");
    }
    else if(num==2)
    {
        printf("Thala for reason");
    }
    else if(num==3)
    {
    printf("Mumbai ka Raja Kon - Rohit Sharma");
    }
    else if(num==4)
    {
        printf("Aava De");
    }
    else
    {
        printf("Invalid input");
    }
   
}