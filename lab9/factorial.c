#include <stdio.h>
int main()
{
    int fact=1;
    for (int i=1; i<=10; i++)
    {
        for (int j=1; j<=i; j++)
        {
            fact*=j;
        }
        printf("Factorial of %d = %d\n",i,fact);
        fact=1;
    }
    return 0;
}