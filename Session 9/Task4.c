#include<stdio.h>

void main(){

    int cricketScores [3][2]={{170, 165},{145, 172},{200, 180}};

    int i;
     for(i = 0; i <=2; i++)
    {
        if(cricketScores [i][0] > cricketScores [i][1])
        {
            printf("Match %d highest cricketScores  = %d\n", i + 1, cricketScores [i][0]);
        }
        else
        {
            printf("Match %d highest cricketScores  = %d\n", i + 1,cricketScores [i][1]);
        }
    }

                
}