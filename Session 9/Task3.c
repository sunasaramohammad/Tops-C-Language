#include<stdio.h>

void main(){

    int order[]={700,800,500,169,854,1000,1460};

    int index,sum=0;
    for(index=0;index<=6;index++){
        printf("order[%d] = %d  \n",index,order[index]);
        sum=sum+order[index];
       
    }
     printf("\nSum = %d\n",sum);

    float avg;
    avg=(float)sum/(float)index;
    printf("Average= %f",avg);

}