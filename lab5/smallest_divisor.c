#include <stdio.h>
int main()
{
    int n,divi,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for ( i = 2; i <= n; i++)
    {
        if (n%i==0)
        {
            divi=i;
            break;
        }

    }
    printf("Smallest divisor of %d = %d",n,divi);
    
    return 0;
}