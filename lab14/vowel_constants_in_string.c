#include <stdio.h>
int main()
{
    int len_str, a, count_vowel=0, count_con=0;
    printf("Enter the length of the string: ");
    scanf("%d",&len_str);
    char str[len_str];
    printf("Enter The string: ");
    scanf("%d",&a);
    scanf("%[^\n]s",str);

    for (int i=0; i<len_str; i++)
    {
        if (str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
        {
            count_vowel++;
        }
        else
        {
            count_con++;
        }
    }
    printf("Number of Vowels: %d\nNumber of Consonants: %d",count_vowel,count_con);
    return 0;
}