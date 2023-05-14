#include <stdio.h>
void reverse(char[],int);
int main()
{
    char arr[]="ABCD DEF XYZ";
    char temp_arr[50];
    int count=0,j=0;
    // reverse(arr,4);
    for (int i=0; arr[i]!='\0'; i++)
    {
        count++;
    }
    for (int i=0; i<count; i++)
    {
        if (arr[i]==' ')
        {
            reverse(temp_arr,j);
            for (int k = 0; temp_arr[k]!='\0'; k++) 
            { 
                temp_arr[k] = '\0'; 
            }
            j=0;
            continue;
            
        }
        else if (i==count-1)
        {
            temp_arr[j]=arr[i];
            j++;
            reverse(temp_arr,j);
            j=0;
            continue;
        }
        temp_arr[j]=arr[i];
        j++;
            
        
    }
    return 0;
}
void reverse(char arr[100],int n)
{
    for (int i=n-1; i>=0; i--)
    {
        printf("%c",arr[i]);
    }
    printf(" ");
}