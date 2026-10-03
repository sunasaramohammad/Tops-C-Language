#include <stdio.h>
#include <string.h>

void main()
{
    char fname[10];
    printf("Enter Full Name:");
    scanf("%s",&fname);

    char username[6];

    if(strlen(fname) <= 5)
    {
        strcpy(username, fname);
    }
    else
    {
        strncpy(username, fname, 5);
        username[6] = '\0';
    }

    printf("Username: %s", username);
}