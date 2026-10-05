    #include <stdio.h>
    #include <ctype.h>

    void getUserInitials(char first[], char last[])
    {
        printf("Initials: %c%c", toupper(first[0]), toupper(last[0]));
    }

    void main()
    {
        char first[20], last[20];

        printf("Enter your full name: ");
        scanf("%s %s", first, last);

        getUserInitials(first, last);

        
    }