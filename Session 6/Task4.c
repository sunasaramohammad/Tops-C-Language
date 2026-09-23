#include<stdio.h>

void  main(){

    int i=1;

    printf("\nEntry Controll Loop Example\n");

    // The condition is checked before the loop body runs.
    //If the condition is false at the beginning, the loop runs 0 times.

    while(i < 5)
    {
    printf("%d\n", i);
    i++;
    }   

    printf("\nExit Controll Loop Example\n");

    //The loop body runs first, and the condition is checked afterward.
    //If the condition is false at the beginning, the loop still runs at least once.
    
    int j=1;
    do
    {
        printf("%d\n", j);
        j++;
    }
    while(j < 5);

   
}