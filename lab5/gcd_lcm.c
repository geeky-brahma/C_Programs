#include <stdio.h>
int main()
{
    int a,b,i,gcd, lcm;
    printf("Enter 1st Number: ");
    scanf("%d",&a);
    printf("Enter 2nd Number: ");
    scanf("%d",&b);
    for (i = 1; i <=b; i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
            
        }
        
    }
    printf("GCD for %d and %d = %d\n",a,b,gcd);
    lcm=(a*b)/gcd;
    printf("LCM for %d and %d = %d",a,b,lcm);
    return 0;
}