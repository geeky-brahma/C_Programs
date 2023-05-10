#include <stdio.h>
int main()
{
    char input[200];
    printf("Enter a String: ");
	scanf("%[^\n]",input);

    int upper=0, lower=0;
    printf("Original String: %s\n", input);
    printf("New String: ");
    for (int i=0; input[i]!='\0'; i++)
    {
        
        
        if (input[i]>='a' && input[i]<='z')
        {
            
            // new_str[i]=input[i]-32;
            printf("%c",input[i]-32);
            lower++;
        }
        else if (input[i]>='A' && input[i]<='Z')
        {
            
            // new_str[i]=input[i]+32;
            printf("%c",input[i]+32);
            upper+=1;
            
            
        }
        else
        {
            // new_str[i]=input[i];
            printf("%c",input[i]);
        }
    }

    printf("\nNo. of Upper Case: %d",upper);
    printf("\nNo. of Lower Case: %d",lower);
    
    
    

    
    return 0;
}