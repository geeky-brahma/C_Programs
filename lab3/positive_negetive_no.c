#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a<0)
    {
        printf("%d is a negative number",a);
    }
    else if (a>0)
    {
        printf("%d is a positive number",a);
    }
    else 
    {
        printf("%d is Zero",a);
    }
    
    return 0;
}