#include <stdio.h>
#include <string.h>

void main()
{
    char name[] = "Virat Kohli";
    char username[5];

    if(strlen(name) <= 5)
    {
        strcpy(username, name);
    }
    else
    {
        strncpy(username, name, 5);
        username[5] = '\0';
    }

    printf("Username: %s", username);
}