#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], str_rev[100], str_word[100];
    int len, i, j = 0, k, counter = 0, temp_len, rev_counter;
    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    len = strlen(str);
    temp_len = k = len;
    for(i = 0; i <=len; i++)
    {
        if(str[i] == ' ' || str[i] == '\0')
        {
            counter = i;
            for(j; j < i; j++)
            {
                str_rev[j] = str[--counter];
            }
            str_rev[j++] = ' ';
        }
    }

    str_rev[len] = '\0';
    printf("%s\n", str_rev);

    for(i = 0; str_rev[i] != '\0'; i++)
    {
        str_word[i] = str_rev[--len];
    }
    
    str_word[i] = '\0';
    printf("%s\n", str_word);
    return 0;
}