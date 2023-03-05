#include <stdio.h>

int main()
{
    char a;
    printf("Enter an Alphabet: ");
    scanf("%c", &a);
    
    if (a>=65 & a<=90)
    {
        printf("The Alphabet converted to lower: %c\n", a+32);
    }
    else
    {
        printf("The Alphabet converted to lower: %c\n",a-32);
    }
}