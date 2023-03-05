#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    //isalpha() method of ctype is used to check for alphabets
    if (isalpha(ch))
    {
        printf("The Entered character is a Letter");
    }
    //isdigit() method used to check for digits
    else if (isdigit(ch))
    {
        printf("The Entered character is a Digit");
    }
    else
    {
        printf("The Entered character a Special Character");
    }
    
    return 0;
}