#include <stdio.h>
int main()
{
    char str1[200], str2[200];
    printf("Enter a String: ");
	scanf(" %[^\n]",str1);
    
    printf("Enter a String: ");
	scanf(" %[^\n]",str2);

    int flag=0;
    for (int i=0; str1[i]!='\0' && str2[i]!='\0' ; i++)
    {
        if (str1[i]=='\0' && str2=='\0')
        {
            break;
        }
        else if ((str1[i]=='\0' && str2!='\0')||(str1[i]!='\0' && str2=='\0'))
        {
            flag++;
            break;
        }
        else if (str1[i]!=str2[i])
        {
            flag++;
            break;
        }
    }
    if (flag==1)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return 0;
}