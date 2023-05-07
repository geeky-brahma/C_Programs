
// Output
// Enter the length of string: 5
// Enter String1: hello
// olleh


#include <stdio.h>
#include<string.h>
int main()
{
    int s_len,a;
    
    printf("Enter the length of string: ");
    scanf("%d",&s_len);
    char str[s_len];
    printf("Enter String1: ");
    scanf("%d",&a);
    scanf("%[^\n]s", str);
    
    for (int i=s_len-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }

    // printf("%s",result);
    
    return 0;
}