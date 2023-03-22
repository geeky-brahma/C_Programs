// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5


#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    for (int i=1; i<=n; i++)

    {
        for (int j = 1; j <=n+1-i; j++)
        {
            printf("%d ",i);
        }
        printf("\n");
        
    }
    return 0;
}

