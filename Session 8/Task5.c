    #include <stdio.h>
    #include <ctype.h>

    void firstletter(char text[])
    {
        if(text[0]!='\0')
        {
            text[0] = toupper(text[0]);
        }
    }

    void main()
    {
        char productname[20] = "samsung";
        char username[20] = "Mohammed";

        firstletter(productname);
        printf("Product name is %s.\n", productname);
        firstletter(username);
        printf("Username is %s.\n", username);

    }
