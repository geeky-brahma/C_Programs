#include <stdio.h>
int main()
{
    int n,s=0;
    printf("Enter Value for n: ");
    scanf("%d",&n);
    for (int i; i<=n; i++)
    {
        // printf("i=%d\n",i);
        for (int j=1; j<=i; j++)
        {
            // printf("j=%d\n",j);
            s+=j;
        }
    }
    printf("Sum of series = %d",s);
    return 0;
}