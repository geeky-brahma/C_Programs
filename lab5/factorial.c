#include <stdio.h>
int main()
{
    int n,i,fact;
    printf("Enter Value for n: ");
    scanf("%d",&n);
    fact=1;
    for ( i = 1 ; i <= n; i++)
    {
        printf("%d",i);
        fact=fact*i;
        printf("%d",fact);
    }
    printf("Factorial of %d = %d",n,fact);
    return 0;
}