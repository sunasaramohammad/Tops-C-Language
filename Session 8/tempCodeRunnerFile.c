    #include <stdio.h>
    #include <ctype.h>

    void getUserInitials(char first[], char last[])
    {
        for(int i = 0; first[i] != '\0'; i++)
        {
            first[i] = toupper(first[i]);
        }

        for(int i = 0; last[i] != '\0'; i++)
        {
            last[i] = toupper(last[i]);
        }

        printf("Name: %s %s\n", first, last);

      
    }

    void main()
    {
        char first[20], last[20];

        printf("Enter your full name: ");
        scanf("%s %s", first, last);

        getUserInitials(first, last);

        
    }