#include <stdio.h>
int main()
{
    char str[]="Today is Saturday";
    printf("Original string: %s\n",str);

    // Change case using pointers
    printf("String with case changed: ");
    for (int i=0; *(str+i)!='\0'; i++)
    {
        if (*(str+i)==' ')
        {
            printf("%c",*(str+i));
        }
        else if (*(str+i)>='a' && *(str+i)<='z')
        {
            printf("%c",*(str+i)-32);
        }
        else if (*(str+i)>='A' && *(str+i)<='Z')
        {
            printf("%c",*(str+i)+32);
        }
    }
    printf("\n");

    // Reverse String using pointers
    int count;
    printf("Reversed string: ");
    for (int i=0; *(str+i)!='\0'; i++)
    {
        count++;
    }
    for (int i=count-1; i>=0; i--)
    {
        printf("%c",*(str+i));
    }
    printf("\n");

    // Count vowels and consonats
    int vowel=0, consonants=0;
    for (int i=0; *(str+i)!='\0'; i++)
    {
        if (*(str+i)=='a'||*(str+i)=='e'||*(str+i)=='i'||*(str+i)=='o'||*(str+i)=='u'||*(str+i)=='A'||*(str+i)=='E'||*(str+i)=='I'||*(str+i)=='O'||*(str+i)=='U')
		{
			vowel++;
			continue;
		}
        consonants++;
    }
    printf("No. of Vowels: %d\n",vowel);
	printf("No. of Consonants: %d\n",consonants);

    // Reversing the 1st word
    printf("The string with 1st word reversed: ");
    char str_temp[100];
    int count_str=0, flag=1;
    for (int i=0; *(str+i)!='\0'; i++)
    {
        if (*(str+i)==' ' && flag==1)
        {
            for (int j=i-1; j>=0; j--)
            {
                printf("%c",*(str+j));
            }
            flag=0;
            printf("%c",*(str+i));
        }
        else if (flag!=1)
        {
            printf("%c", *(str+i));
        }

    }
    return 0;
}