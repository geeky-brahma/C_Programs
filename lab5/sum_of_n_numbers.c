#include <stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter the total numbers: ");
    scanf("%d",&n);
    for (i=1; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum of %d numbers = %d", n, sum);
    
    return 0;
}