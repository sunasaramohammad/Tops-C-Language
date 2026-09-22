    #include<stdio.h>


    void main(){

        int Likes , Comments , Shares;

        printf("Enter the number of Likes: ");
        scanf("%d", &Likes);

        printf("Enter the number of Comments: ");
        scanf("%d", &Comments);

        printf("Enter the number of Shares: ");
        scanf("%d", &Shares);

        if(Likes >=1000 || Comments > 200 && Shares >=50){
            printf("The post is trending\n");
        }
        else{
            printf("The post is not trending\n");
        }
    }