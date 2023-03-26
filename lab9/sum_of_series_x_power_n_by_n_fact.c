#include <stdio.h>
int main()
{
    int x,n;
    float sum=0,mul=1,fact=1;
    printf("Series: 1 + x + x^2/2! +...+ x^n/n!\n");
    printf("x: ");
    scanf("%d", &x);
    printf("n: ");
    scanf("%d", &n);
    for (int i =0; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            mul*=x;
        }
        
        for(int k=1; k<=i; k++)
        {
            fact*=k;
        }
        sum+=(mul/fact);
        mul=1;
        fact=1;
    }
    printf("Sum of the Series= %f\n",sum);
    return 0;
}