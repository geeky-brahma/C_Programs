// Output
// Enter the length of the string: 9
// Enter The string: ABCD  XYZ
// ZYX  ABCD


#include <stdio.h>
#include <string.h>
int main()
{
    
    int len_str,a;
    printf("Enter the length of the string: ");
    scanf("%d",&len_str);
    char str[len_str];
    printf("Enter The string: ");
    scanf("%d",&a);
    scanf("%[^\n]s",str);
    int space=0, index=len_str-1;
    while (space<2)
    {
        if (str[index]==*" ")   // Array elements are passed as pointers so *" " refers to the ponter of space
        {
            space+=1;
            index=0;
            printf("  ");
        }
        else if (space<1)
        {
            printf("%c",str[index]);
            index--;
        }
        else 
        {
            printf("%c",str[index]);
            index++;
        }
        
    }
    
    return 0;
}