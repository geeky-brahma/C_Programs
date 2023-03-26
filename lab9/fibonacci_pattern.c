// 1
// 1 1
// 1 1 2
// 1 1 2 3



#include <stdio.h>
int main()
{
    int row,a=1,b=1,sum=0;
    printf("Enter The number of Rows: ");
    scanf("%d",&row);
    for (int i=1; i<=row; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%d ",a);
            sum=a+b;
            a=b;
            b=sum;

        }
        a=1;
        b=1;
        printf("\n");
    }
    return 0;
}