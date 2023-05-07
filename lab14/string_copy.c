#include <stdio.h>
#include<string.h>
int main()
{
    int s_len1, s_len2,a;
    
    printf("Enter the length of 1st string: ");
    scanf("%d",&s_len1);
    char s_1[s_len1];
    printf("Enter String1: ");
    scanf("%d",&a);
    scanf("%[^\n]s", s_1);
    printf("Enter the length of 2nd string: ");
    scanf("%d",&s_len2);
    char s_2[s_len2];
    printf("Enter String2: ");
    scanf("%d",&a);
    scanf("%[^\n]s", s_2);

    char result[s_len1+s_len2];

    for (int i=0; i<s_len1; i++)
    {
        result[i]=s_1[i];
    }

    for (int i=0; i<s_len2; i++)
    {
        result[i+s_len1]=s_2[i];
    }
    
    for (int i=0; i<s_len1+s_len2; i++)
    {
        printf("%c",result[i]);
    }

    // printf("%s",result);
    
    return 0;
}