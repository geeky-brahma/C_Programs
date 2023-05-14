#include <stdio.h>
void reverse(char[], int);
int main()
{
    char str[]="ABCD DEF XYZ",str_temp[100];
    int space=0,count=0,j=0;
    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]==' ')
        {
            space++;
        }
        count++;
    }

    for (int i=count-1; i>=0; i--)
    {
        if (str[i]==' ')
        {
            reverse(str_temp, j);
            j=0;
            for (int k = 0; temp_arr[k]!='\0'; k++) 
            { 
                temp_arr[k] = '\0'; 
            }
            continue;
        }
        else if(i==0)
        {
            str_temp[j]=str[i];
            j++;
            reverse(str_temp, j);
            j=0;
            continue;
        }
        str_temp[j]=str[i];
        j++;
    }
    return 0;
}

void reverse(char str_temp[200], int count_j)
{
    for (int i=count_j-1; i>=0;i--)
    {
        printf("%c",str_temp[i]);
    }
    printf(" ");
}