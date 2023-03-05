#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    //a-z : 97-122
    //A-Z : 65-90
    //0-9 : 48-57
    if (ch>=97 & ch<=122)
    {
        printf("The Entered character is a Lower case Letter");
    }
    else if (ch>=65 & ch<=90)
    {
        printf("The Entered character is a Upper case Letter");
    }
    
    
    else if (ch>=48 & ch<=57)
    {
        printf("The Entered character is a Digit");
    }
    else
    {
        printf("The Entered character a Special Character");
    }
    
    return 0;
}