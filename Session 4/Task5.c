#include<stdio.h>

void main()
{

   int followerCount=11,count;

 //Pre-increment
   printf("Before Pre-increment, followerCount = %d\n",followerCount);
   
   count=++followerCount; 
   printf("count = %d\n",count);
   printf("After Pre-increment, followerCount = %d\n",followerCount);


//Post-increment
   followerCount=11; 
   printf("Before Post-increment, followerCount = %d\n",followerCount);
   
   count=followerCount++;
   printf("count = %d\n",count);
   printf("After Post-increment, followerCount = %d\n",followerCount);


}