#include <ctype.h>
#include <stdio.h>

int main()
{
    char a;
    printf("Enter an Alphabet: ");
    scanf("%c", &a);
    
    if (isupper(a))
    {
        printf("The Alphabet converted to lower: %c\n", tolower(a));
    }
    else
    {
        printf("The Alphabet is LowerCase\n");
    }
}