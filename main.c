
//Listing 18.8 Using strchr() function to search a string for a single character; page 469

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *loc, buf[80];

    int ch;

    //input the string and the character

    printf("Enter the string to be searched...");
    gets(buf);
    printf("Enter the character to search for...");
    ch = getchar();

    //perform the search
    loc = strchr(buf, ch);

    if(loc == NULL)
    {
        printf("The character %c was not found.", ch);
    }
    else
    {
        //obtain position of character by subtracting start of string position from
        //  location of character found... (ie. loc-buf here)
        printf("The character %c was found at position %ld.\n\n", ch, loc-buf);
    }
    return 0;


}
