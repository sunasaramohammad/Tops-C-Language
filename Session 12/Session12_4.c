    #include<stdio.h>
    #include<string.h>

    struct Bio{
        char description [100];
        int age;
    };
    struct InstaProfile {
        char username[30];
        int followers;
        struct Bio bio;

    };
    
    void  main(){
        struct InstaProfile p1;

        strcpy(p1.username,"SalmanKhan");
        p1.followers = 1000000;
        strcpy(p1.bio.description,"Actor, Producer, Singer");
        p1.bio.age = 58;

        printf("Username: %s \n", p1.username);
        printf("Followers: %d \n", p1.followers);
        printf("Bio: %s \n", p1.bio.description);
        printf("Age: %d \n", p1.bio.age);
    }