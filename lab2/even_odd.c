#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    //Check for even (remainder=0 when number is divided by 2)
    if (a%2==0)
    {
        printf("%d is EVEN\n",a);
    }
    else
    {
        printf("%d is ODD\n",a);
    }
}