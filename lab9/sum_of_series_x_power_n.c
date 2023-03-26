#include <stdio.h>
int main()
{
    int x,n,sum=0,mul=1;
    printf("Series: 1 + x + x^2 +...+ x^n\n");
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
        sum+=mul;
        mul=1;
    }
    printf("Sum of the Series= %d\n",sum);
    return 0;
}