
// 1 
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1


#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)
    {
        for (int j=1; j<=i; j++ )
        {
            
            if (i%2==0)
            {
                if (j%2!=0)
                {
                    printf("%d ", j%2-1);
                }
                else
                {
                    printf("%d ", j%2+1);
                }
            }
            else
            {
                printf("%d ",j%2);
            }
        }
        printf("\n");
    }
    return 0;
}